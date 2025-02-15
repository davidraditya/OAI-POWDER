/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "RadioResourceConfigDedicatedPSCell-r12.h"

static asn_TYPE_member_t asn_MBR_ext1_6[] = {
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigDedicatedPSCell_r12__ext1, neighCellsCRS_InfoPSCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NeighCellsCRS_Info_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"neighCellsCRS-InfoPSCell-r13"
		},
};
static int asn_MAP_ext1_oms_6[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext1_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* neighCellsCRS-InfoPSCell-r13 at 5912 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_6 = {
	sizeof(struct RadioResourceConfigDedicatedPSCell_r12__ext1),
	offsetof(struct RadioResourceConfigDedicatedPSCell_r12__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_6,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_6 = {
	"ext1",
	"ext1",
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
	asn_DEF_ext1_tags_6,
	sizeof(asn_DEF_ext1_tags_6)
		/sizeof(asn_DEF_ext1_tags_6[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_6,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_6)
		/sizeof(asn_DEF_ext1_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext1_6,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_8[] = {
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigDedicatedPSCell_r12__ext2, sps_Config_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SPS_Config_v1430,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sps-Config-v1430"
		},
};
static int asn_MAP_ext2_oms_8[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext2_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sps-Config-v1430 at 5914 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_8 = {
	sizeof(struct RadioResourceConfigDedicatedPSCell_r12__ext2),
	offsetof(struct RadioResourceConfigDedicatedPSCell_r12__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_8,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_8,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_8 = {
	"ext2",
	"ext2",
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
	asn_DEF_ext2_tags_8,
	sizeof(asn_DEF_ext2_tags_8)
		/sizeof(asn_DEF_ext2_tags_8[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_8,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_8)
		/sizeof(asn_DEF_ext2_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext2_8,
	1,	/* Elements count */
	&asn_SPC_ext2_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RadioResourceConfigDedicatedPSCell_r12_1[] = {
	{ ATF_POINTER, 5, offsetof(struct RadioResourceConfigDedicatedPSCell_r12, physicalConfigDedicatedPSCell_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysicalConfigDedicated,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physicalConfigDedicatedPSCell-r12"
		},
	{ ATF_POINTER, 4, offsetof(struct RadioResourceConfigDedicatedPSCell_r12, sps_Config_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SPS_Config,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sps-Config-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioResourceConfigDedicatedPSCell_r12, naics_Info_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NAICS_AssistanceInfo_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"naics-Info-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigDedicatedPSCell_r12, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_ext1_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext1"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigDedicatedPSCell_r12, ext2),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_ext2_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext2"
		},
};
static int asn_MAP_RadioResourceConfigDedicatedPSCell_r12_oms_1[] = { 0, 1, 2, 3, 4 };
static ber_tlv_tag_t asn_DEF_RadioResourceConfigDedicatedPSCell_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RadioResourceConfigDedicatedPSCell_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physicalConfigDedicatedPSCell-r12 at 5908 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sps-Config-r12 at 5909 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* naics-Info-r12 at 5910 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ext1 at 5912 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ext2 at 5914 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigDedicatedPSCell_r12_specs_1 = {
	sizeof(struct RadioResourceConfigDedicatedPSCell_r12),
	offsetof(struct RadioResourceConfigDedicatedPSCell_r12, _asn_ctx),
	asn_MAP_RadioResourceConfigDedicatedPSCell_r12_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_RadioResourceConfigDedicatedPSCell_r12_oms_1,	/* Optional members */
	3, 2,	/* Root/Additions */
	2,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigDedicatedPSCell_r12 = {
	"RadioResourceConfigDedicatedPSCell-r12",
	"RadioResourceConfigDedicatedPSCell-r12",
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
	asn_DEF_RadioResourceConfigDedicatedPSCell_r12_tags_1,
	sizeof(asn_DEF_RadioResourceConfigDedicatedPSCell_r12_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigDedicatedPSCell_r12_tags_1[0]), /* 1 */
	asn_DEF_RadioResourceConfigDedicatedPSCell_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioResourceConfigDedicatedPSCell_r12_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigDedicatedPSCell_r12_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RadioResourceConfigDedicatedPSCell_r12_1,
	5,	/* Elements count */
	&asn_SPC_RadioResourceConfigDedicatedPSCell_r12_specs_1	/* Additional specs */
};

