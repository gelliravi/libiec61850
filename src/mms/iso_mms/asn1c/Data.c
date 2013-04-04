/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#include <asn_internal.h>

#include "Data.h"

static asn_TYPE_member_t asn_MBR_Data_1[] = {
	{ ATF_POINTER, 0, offsetof(struct Data, choice.array),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DataSequence,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"array"
		},
	{ ATF_POINTER, 0, offsetof(struct Data, choice.structure),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DataSequence,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"structure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Data, choice.boolean),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"boolean"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Data, choice.bitstring),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"bitstring"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Data, choice.integer),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"integer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Data, choice.Unsigned),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"unsigned"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Data, choice.floatingpoint),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FloatingPoint,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"floatingpoint"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Data, choice.octetstring),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"octetstring"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Data, choice.visiblestring),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VisibleString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"visiblestring"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Data, choice.generalizedtime),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GeneralizedTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"generalizedtime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Data, choice.binarytime),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeOfDay,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"binarytime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Data, choice.bcd),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"bcd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Data, choice.booleanArray),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"booleanArray"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Data, choice.mMSString),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MMSString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"mMSString"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Data, choice.utctime),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UtcTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"utctime"
		},
};
static asn_TYPE_tag2member_t asn_MAP_Data_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* array at 758 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* structure at 759 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 2, 0, 0 }, /* boolean at 760 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 3, 0, 0 }, /* bitstring at 761 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 4, 0, 0 }, /* integer at 762 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 5, 0, 0 }, /* unsigned at 763 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 6, 0, 0 }, /* floatingpoint at 764 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 7, 0, 0 }, /* octetstring at 766 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 8, 0, 0 }, /* visiblestring at 767 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 9, 0, 0 }, /* generalizedtime at 768 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 10, 0, 0 }, /* binarytime at 769 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 11, 0, 0 }, /* bcd at 770 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 12, 0, 0 }, /* booleanArray at 771 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 13, 0, 0 }, /* mMSString at 774 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 14, 0, 0 } /* utctime at 776 */
};
static asn_CHOICE_specifics_t asn_SPC_Data_specs_1 = {
	sizeof(struct Data),
	offsetof(struct Data, _asn_ctx),
	offsetof(struct Data, present),
	sizeof(((struct Data *)0)->present),
	asn_MAP_Data_tag2el_1,
	15,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Data = {
	"Data",
	"Data",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_Data_1,
	15,	/* Elements count */
	&asn_SPC_Data_specs_1	/* Additional specs */
};

