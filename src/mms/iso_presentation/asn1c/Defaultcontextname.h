/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO8823PRESENTATION"
 * 	found in "../isoPresentationLayer.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_Defaultcontextname_H_
#define	_Defaultcontextname_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Abstractsyntaxname.h"
#include "Transfersyntaxname.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Defaultcontextname */
typedef struct Defaultcontextname {
	Abstractsyntaxname_t	 abstractsyntaxname;
	Transfersyntaxname_t	 transfersyntaxname;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Defaultcontextname_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Defaultcontextname;

#ifdef __cplusplus
}
#endif

#endif	/* _Defaultcontextname_H_ */
