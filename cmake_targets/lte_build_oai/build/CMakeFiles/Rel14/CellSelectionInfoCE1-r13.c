/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "CellSelectionInfoCE1-r13.h"

static asn_TYPE_member_t asn_MBR_CellSelectionInfoCE1_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellSelectionInfoCE1_r13, q_RxLevMinCE1_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_RxLevMin,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"q-RxLevMinCE1-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct CellSelectionInfoCE1_r13, q_QualMinRSRQ_CE1_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_QualMin_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"q-QualMinRSRQ-CE1-r13"
		},
};
static int asn_MAP_CellSelectionInfoCE1_r13_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_CellSelectionInfoCE1_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CellSelectionInfoCE1_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* q-RxLevMinCE1-r13 at 6883 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* q-QualMinRSRQ-CE1-r13 at 6884 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CellSelectionInfoCE1_r13_specs_1 = {
	sizeof(struct CellSelectionInfoCE1_r13),
	offsetof(struct CellSelectionInfoCE1_r13, _asn_ctx),
	asn_MAP_CellSelectionInfoCE1_r13_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_CellSelectionInfoCE1_r13_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CellSelectionInfoCE1_r13 = {
	"CellSelectionInfoCE1-r13",
	"CellSelectionInfoCE1-r13",
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
	asn_DEF_CellSelectionInfoCE1_r13_tags_1,
	sizeof(asn_DEF_CellSelectionInfoCE1_r13_tags_1)
		/sizeof(asn_DEF_CellSelectionInfoCE1_r13_tags_1[0]), /* 1 */
	asn_DEF_CellSelectionInfoCE1_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellSelectionInfoCE1_r13_tags_1)
		/sizeof(asn_DEF_CellSelectionInfoCE1_r13_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CellSelectionInfoCE1_r13_1,
	2,	/* Elements count */
	&asn_SPC_CellSelectionInfoCE1_r13_specs_1	/* Additional specs */
};

