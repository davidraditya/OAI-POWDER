/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "AreaConfiguration-r10.h"

static asn_per_constraints_t asn_PER_type_AreaConfiguration_r10_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_AreaConfiguration_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AreaConfiguration_r10, choice.cellGlobalIdList_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellGlobalIdList_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellGlobalIdList-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AreaConfiguration_r10, choice.trackingAreaCodeList_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrackingAreaCodeList_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"trackingAreaCodeList-r10"
		},
};
static asn_TYPE_tag2member_t asn_MAP_AreaConfiguration_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellGlobalIdList-r10 at 8216 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* trackingAreaCodeList-r10 at 8218 */
};
static asn_CHOICE_specifics_t asn_SPC_AreaConfiguration_r10_specs_1 = {
	sizeof(struct AreaConfiguration_r10),
	offsetof(struct AreaConfiguration_r10, _asn_ctx),
	offsetof(struct AreaConfiguration_r10, present),
	sizeof(((struct AreaConfiguration_r10 *)0)->present),
	asn_MAP_AreaConfiguration_r10_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_AreaConfiguration_r10 = {
	"AreaConfiguration-r10",
	"AreaConfiguration-r10",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_decode_aper,
	CHOICE_encode_aper,
	CHOICE_compare,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_AreaConfiguration_r10_constr_1,
	asn_MBR_AreaConfiguration_r10_1,
	2,	/* Elements count */
	&asn_SPC_AreaConfiguration_r10_specs_1	/* Additional specs */
};

