/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "RadioResourceConfigDedicatedSCell-r10.h"

static asn_TYPE_member_t asn_MBR_ext1_4[] = {
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigDedicatedSCell_r10__ext1, mac_MainConfigSCell_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MAC_MainConfigSCell_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mac-MainConfigSCell-r11"
		},
};
static int asn_MAP_ext1_oms_4[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext1_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* mac-MainConfigSCell-r11 at 5929 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_4 = {
	sizeof(struct RadioResourceConfigDedicatedSCell_r10__ext1),
	offsetof(struct RadioResourceConfigDedicatedSCell_r10__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_4,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_4 = {
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
	asn_DEF_ext1_tags_4,
	sizeof(asn_DEF_ext1_tags_4)
		/sizeof(asn_DEF_ext1_tags_4[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_4,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_4)
		/sizeof(asn_DEF_ext1_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext1_4,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_6[] = {
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigDedicatedSCell_r10__ext2, naics_Info_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NAICS_AssistanceInfo_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"naics-Info-r12"
		},
};
static int asn_MAP_ext2_oms_6[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext2_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* naics-Info-r12 at 5931 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_6 = {
	sizeof(struct RadioResourceConfigDedicatedSCell_r10__ext2),
	offsetof(struct RadioResourceConfigDedicatedSCell_r10__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_6,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_6 = {
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
	asn_DEF_ext2_tags_6,
	sizeof(asn_DEF_ext2_tags_6)
		/sizeof(asn_DEF_ext2_tags_6[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_6,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_6)
		/sizeof(asn_DEF_ext2_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext2_6,
	1,	/* Elements count */
	&asn_SPC_ext2_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_8[] = {
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigDedicatedSCell_r10__ext3, neighCellsCRS_InfoSCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NeighCellsCRS_Info_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"neighCellsCRS-InfoSCell-r13"
		},
};
static int asn_MAP_ext3_oms_8[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext3_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* neighCellsCRS-InfoSCell-r13 at 5933 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_8 = {
	sizeof(struct RadioResourceConfigDedicatedSCell_r10__ext3),
	offsetof(struct RadioResourceConfigDedicatedSCell_r10__ext3, _asn_ctx),
	asn_MAP_ext3_tag2el_8,
	1,	/* Count of tags in the map */
	asn_MAP_ext3_oms_8,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext3_8 = {
	"ext3",
	"ext3",
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
	asn_DEF_ext3_tags_8,
	sizeof(asn_DEF_ext3_tags_8)
		/sizeof(asn_DEF_ext3_tags_8[0]) - 1, /* 1 */
	asn_DEF_ext3_tags_8,	/* Same as above */
	sizeof(asn_DEF_ext3_tags_8)
		/sizeof(asn_DEF_ext3_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext3_8,
	1,	/* Elements count */
	&asn_SPC_ext3_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RadioResourceConfigDedicatedSCell_r10_1[] = {
	{ ATF_POINTER, 4, offsetof(struct RadioResourceConfigDedicatedSCell_r10, physicalConfigDedicatedSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysicalConfigDedicatedSCell_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physicalConfigDedicatedSCell-r10"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioResourceConfigDedicatedSCell_r10, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ext1_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext1"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigDedicatedSCell_r10, ext2),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext2_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext2"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigDedicatedSCell_r10, ext3),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_ext3_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext3"
		},
};
static int asn_MAP_RadioResourceConfigDedicatedSCell_r10_oms_1[] = { 0, 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_RadioResourceConfigDedicatedSCell_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RadioResourceConfigDedicatedSCell_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physicalConfigDedicatedSCell-r10 at 5927 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ext1 at 5929 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ext2 at 5931 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext3 at 5933 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigDedicatedSCell_r10_specs_1 = {
	sizeof(struct RadioResourceConfigDedicatedSCell_r10),
	offsetof(struct RadioResourceConfigDedicatedSCell_r10, _asn_ctx),
	asn_MAP_RadioResourceConfigDedicatedSCell_r10_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_RadioResourceConfigDedicatedSCell_r10_oms_1,	/* Optional members */
	1, 3,	/* Root/Additions */
	0,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigDedicatedSCell_r10 = {
	"RadioResourceConfigDedicatedSCell-r10",
	"RadioResourceConfigDedicatedSCell-r10",
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
	asn_DEF_RadioResourceConfigDedicatedSCell_r10_tags_1,
	sizeof(asn_DEF_RadioResourceConfigDedicatedSCell_r10_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigDedicatedSCell_r10_tags_1[0]), /* 1 */
	asn_DEF_RadioResourceConfigDedicatedSCell_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioResourceConfigDedicatedSCell_r10_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigDedicatedSCell_r10_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RadioResourceConfigDedicatedSCell_r10_1,
	4,	/* Elements count */
	&asn_SPC_RadioResourceConfigDedicatedSCell_r10_specs_1	/* Additional specs */
};

