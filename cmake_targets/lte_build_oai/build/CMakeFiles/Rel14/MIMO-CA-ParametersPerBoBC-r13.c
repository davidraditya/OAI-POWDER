/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "MIMO-CA-ParametersPerBoBC-r13.h"

static asn_TYPE_member_t asn_MBR_MIMO_CA_ParametersPerBoBC_r13_1[] = {
	{ ATF_POINTER, 2, offsetof(struct MIMO_CA_ParametersPerBoBC_r13, parametersTM9_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_CA_ParametersPerBoBCPerTM_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"parametersTM9-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct MIMO_CA_ParametersPerBoBC_r13, parametersTM10_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_CA_ParametersPerBoBCPerTM_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"parametersTM10-r13"
		},
};
static int asn_MAP_MIMO_CA_ParametersPerBoBC_r13_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_MIMO_CA_ParametersPerBoBC_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MIMO_CA_ParametersPerBoBC_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* parametersTM9-r13 at 8951 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* parametersTM10-r13 at 8952 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MIMO_CA_ParametersPerBoBC_r13_specs_1 = {
	sizeof(struct MIMO_CA_ParametersPerBoBC_r13),
	offsetof(struct MIMO_CA_ParametersPerBoBC_r13, _asn_ctx),
	asn_MAP_MIMO_CA_ParametersPerBoBC_r13_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MIMO_CA_ParametersPerBoBC_r13_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MIMO_CA_ParametersPerBoBC_r13 = {
	"MIMO-CA-ParametersPerBoBC-r13",
	"MIMO-CA-ParametersPerBoBC-r13",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	SEQUENCE_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_MIMO_CA_ParametersPerBoBC_r13_tags_1,
	sizeof(asn_DEF_MIMO_CA_ParametersPerBoBC_r13_tags_1)
		/sizeof(asn_DEF_MIMO_CA_ParametersPerBoBC_r13_tags_1[0]), /* 1 */
	asn_DEF_MIMO_CA_ParametersPerBoBC_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_MIMO_CA_ParametersPerBoBC_r13_tags_1)
		/sizeof(asn_DEF_MIMO_CA_ParametersPerBoBC_r13_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MIMO_CA_ParametersPerBoBC_r13_1,
	2,	/* Elements count */
	&asn_SPC_MIMO_CA_ParametersPerBoBC_r13_specs_1	/* Additional specs */
};

