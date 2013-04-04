/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "ACSE1"
 * 	found in "../isoAcseLayer.asn"
 * 	`asn1c -fskeletons-copy`
 */

#include <asn_internal.h>

#include "Associatesourcediagnostic.h"

static asn_TYPE_member_t asn_MBR_Associatesourcediagnostic_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Associatesourcediagnostic, choice.acseserviceuser),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"acseserviceuser"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Associatesourcediagnostic, choice.acseserviceprovider),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"acseserviceprovider"
		},
};
static asn_TYPE_tag2member_t asn_MAP_Associatesourcediagnostic_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* acseserviceuser at 182 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 } /* acseserviceprovider at 196 */
};
static asn_CHOICE_specifics_t asn_SPC_Associatesourcediagnostic_specs_1 = {
	sizeof(struct Associatesourcediagnostic),
	offsetof(struct Associatesourcediagnostic, _asn_ctx),
	offsetof(struct Associatesourcediagnostic, present),
	sizeof(((struct Associatesourcediagnostic *)0)->present),
	asn_MAP_Associatesourcediagnostic_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Associatesourcediagnostic = {
	"Associatesourcediagnostic",
	"Associatesourcediagnostic",
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
	asn_MBR_Associatesourcediagnostic_1,
	2,	/* Elements count */
	&asn_SPC_Associatesourcediagnostic_specs_1	/* Additional specs */
};

