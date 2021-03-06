package com.libiec61850.scl.model;

/*
 *  Copyright 2013 Michael Zillgith
 *
 *	This file is part of libIEC61850.
 *
 *	libIEC61850 is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	libIEC61850 is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with libIEC61850.  If not, see <http://www.gnu.org/licenses/>.
 *
 *	See COPYING file for the complete license text.
 */

import java.util.LinkedList;
import java.util.List;

import com.libiec61850.scl.DataAttributeDefinition;
import com.libiec61850.scl.SclParserException;
import com.libiec61850.scl.types.DataAttributeType;
import com.libiec61850.scl.types.EnumerationType;
import com.libiec61850.scl.types.SclType;
import com.libiec61850.scl.types.TypeDeclarations;

public class DataAttribute {
	
	private String name;
	private FunctionalConstraint fc;
	private AttributeType type;
	private boolean isBasicAttribute = true;
	private int count;
	
	private List<DataAttribute> subDataAttributes = null;
	
	private SclType sclType = null;

	public DataAttribute(DataAttributeDefinition daDefinition, TypeDeclarations typeDeclarations, FunctionalConstraint fc) 
			throws SclParserException 
	{
		this.name = daDefinition.getName();
		this.fc = daDefinition.getFc();
		this.type = daDefinition.getAttributeType();
		this.count = daDefinition.getCount();
		
		if (this.fc == null)
			this.fc = fc;
		
		if (this.type == AttributeType.CONSTRUCTED) {
			isBasicAttribute = false;
			createConstructedAttribute(daDefinition, typeDeclarations);
		}
		else if (this.type == AttributeType.ENUMERATED) {
			createEnumeratedAttribute(daDefinition, typeDeclarations);
		}
	}

	private void createEnumeratedAttribute(
			DataAttributeDefinition daDefinition,
			TypeDeclarations typeDeclarations) throws SclParserException 
	{
		this.sclType = typeDeclarations.lookupType(daDefinition.getType());
		
		if (this.sclType == null)
			throw new SclParserException("Missing type definition for enumerated data attribute: " 
						+ daDefinition.getbType());
		
		if (!(this.sclType instanceof EnumerationType)) 
			throw new SclParserException("Wrong type definition for enumerated data attribute");
	}

	private void createConstructedAttribute(
			DataAttributeDefinition daDefinition,
			TypeDeclarations typeDeclarations) throws SclParserException 
	{
		this.sclType = typeDeclarations.lookupType(daDefinition.getType());
		
		if (this.sclType == null)
			throw new SclParserException("Missing type definition for constructed data attribute: " 
						+ daDefinition.getbType());
	
		if (!(this.sclType instanceof DataAttributeType)) 
			throw new SclParserException("Wrong type definition for constructed data attribute");
		
		DataAttributeType dataAttributeType = (DataAttributeType) this.sclType;
		
		List<DataAttributeDefinition> daDefinitions = dataAttributeType.getSubDataAttributes();
		
		this.subDataAttributes = new LinkedList<DataAttribute>();
		
		for (DataAttributeDefinition daDef : daDefinitions) {
			this.subDataAttributes.add(new DataAttribute(daDef, typeDeclarations, this.fc));
		}
		
	}
	
	public String getName() {
		return name;
	}

	public FunctionalConstraint getFc() {
		return fc;
	}

	public AttributeType getType() {
		return type;
	}

	public List<DataAttribute> getSubDataAttributes() {
		return subDataAttributes;
	}

	public boolean isBasicAttribute() {
		return isBasicAttribute;
	}

	public int getCount() {
		return count;
	}

}
