/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "SCellToAddMod-r10.h"

static int
memb_srs_SwitchFromServCellIndex_r14_constraint_13(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_srs_SwitchFromServCellIndex_r14_constr_14 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_cellIdentification_r10_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SCellToAddMod_r10__cellIdentification_r10, physCellId_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physCellId-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SCellToAddMod_r10__cellIdentification_r10, dl_CarrierFreq_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CarrierFreq-r10"
		},
};
static ber_tlv_tag_t asn_DEF_cellIdentification_r10_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_cellIdentification_r10_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId-r10 at 999 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dl-CarrierFreq-r10 at 1001 */
};
static asn_SEQUENCE_specifics_t asn_SPC_cellIdentification_r10_specs_3 = {
	sizeof(struct SCellToAddMod_r10__cellIdentification_r10),
	offsetof(struct SCellToAddMod_r10__cellIdentification_r10, _asn_ctx),
	asn_MAP_cellIdentification_r10_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellIdentification_r10_3 = {
	"cellIdentification-r10",
	"cellIdentification-r10",
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
	asn_DEF_cellIdentification_r10_tags_3,
	sizeof(asn_DEF_cellIdentification_r10_tags_3)
		/sizeof(asn_DEF_cellIdentification_r10_tags_3[0]) - 1, /* 1 */
	asn_DEF_cellIdentification_r10_tags_3,	/* Same as above */
	sizeof(asn_DEF_cellIdentification_r10_tags_3)
		/sizeof(asn_DEF_cellIdentification_r10_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_cellIdentification_r10_3,
	2,	/* Elements count */
	&asn_SPC_cellIdentification_r10_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_9[] = {
	{ ATF_POINTER, 1, offsetof(struct SCellToAddMod_r10__ext1, dl_CarrierFreq_v1090),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_v9e0,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CarrierFreq-v1090"
		},
};
static int asn_MAP_ext1_oms_9[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext1_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* dl-CarrierFreq-v1090 at 1005 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_9 = {
	sizeof(struct SCellToAddMod_r10__ext1),
	offsetof(struct SCellToAddMod_r10__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_9,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_9,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_9 = {
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
	asn_DEF_ext1_tags_9,
	sizeof(asn_DEF_ext1_tags_9)
		/sizeof(asn_DEF_ext1_tags_9[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_9,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_9)
		/sizeof(asn_DEF_ext1_tags_9[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext1_9,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_11[] = {
	{ ATF_POINTER, 1, offsetof(struct SCellToAddMod_r10__ext2, antennaInfoDedicatedSCell_v10i0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoDedicated_v10i0,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"antennaInfoDedicatedSCell-v10i0"
		},
};
static int asn_MAP_ext2_oms_11[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext2_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* antennaInfoDedicatedSCell-v10i0 at 1007 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_11 = {
	sizeof(struct SCellToAddMod_r10__ext2),
	offsetof(struct SCellToAddMod_r10__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_11,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_11 = {
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
	asn_DEF_ext2_tags_11,
	sizeof(asn_DEF_ext2_tags_11)
		/sizeof(asn_DEF_ext2_tags_11[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_11,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_11)
		/sizeof(asn_DEF_ext2_tags_11[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext2_11,
	1,	/* Elements count */
	&asn_SPC_ext2_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_13[] = {
	{ ATF_POINTER, 1, offsetof(struct SCellToAddMod_r10__ext3, srs_SwitchFromServCellIndex_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_srs_SwitchFromServCellIndex_r14_constraint_13,
		&asn_PER_memb_srs_SwitchFromServCellIndex_r14_constr_14,
		0,
		"srs-SwitchFromServCellIndex-r14"
		},
};
static int asn_MAP_ext3_oms_13[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext3_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* srs-SwitchFromServCellIndex-r14 at 1009 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_13 = {
	sizeof(struct SCellToAddMod_r10__ext3),
	offsetof(struct SCellToAddMod_r10__ext3, _asn_ctx),
	asn_MAP_ext3_tag2el_13,
	1,	/* Count of tags in the map */
	asn_MAP_ext3_oms_13,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext3_13 = {
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
	asn_DEF_ext3_tags_13,
	sizeof(asn_DEF_ext3_tags_13)
		/sizeof(asn_DEF_ext3_tags_13[0]) - 1, /* 1 */
	asn_DEF_ext3_tags_13,	/* Same as above */
	sizeof(asn_DEF_ext3_tags_13)
		/sizeof(asn_DEF_ext3_tags_13[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext3_13,
	1,	/* Elements count */
	&asn_SPC_ext3_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SCellToAddMod_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SCellToAddMod_r10, sCellIndex_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellIndex_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sCellIndex-r10"
		},
	{ ATF_POINTER, 6, offsetof(struct SCellToAddMod_r10, cellIdentification_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_cellIdentification_r10_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellIdentification-r10"
		},
	{ ATF_POINTER, 5, offsetof(struct SCellToAddMod_r10, radioResourceConfigCommonSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigCommonSCell_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"radioResourceConfigCommonSCell-r10"
		},
	{ ATF_POINTER, 4, offsetof(struct SCellToAddMod_r10, radioResourceConfigDedicatedSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigDedicatedSCell_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"radioResourceConfigDedicatedSCell-r10"
		},
	{ ATF_POINTER, 3, offsetof(struct SCellToAddMod_r10, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_ext1_9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext1"
		},
	{ ATF_POINTER, 2, offsetof(struct SCellToAddMod_r10, ext2),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_ext2_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext2"
		},
	{ ATF_POINTER, 1, offsetof(struct SCellToAddMod_r10, ext3),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_ext3_13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext3"
		},
};
static int asn_MAP_SCellToAddMod_r10_oms_1[] = { 1, 2, 3, 4, 5, 6 };
static ber_tlv_tag_t asn_DEF_SCellToAddMod_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SCellToAddMod_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sCellIndex-r10 at 997 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellIdentification-r10 at 999 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* radioResourceConfigCommonSCell-r10 at 1002 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* radioResourceConfigDedicatedSCell-r10 at 1003 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ext1 at 1005 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ext2 at 1007 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ext3 at 1009 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SCellToAddMod_r10_specs_1 = {
	sizeof(struct SCellToAddMod_r10),
	offsetof(struct SCellToAddMod_r10, _asn_ctx),
	asn_MAP_SCellToAddMod_r10_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_SCellToAddMod_r10_oms_1,	/* Optional members */
	3, 3,	/* Root/Additions */
	3,	/* Start extensions */
	8	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SCellToAddMod_r10 = {
	"SCellToAddMod-r10",
	"SCellToAddMod-r10",
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
	asn_DEF_SCellToAddMod_r10_tags_1,
	sizeof(asn_DEF_SCellToAddMod_r10_tags_1)
		/sizeof(asn_DEF_SCellToAddMod_r10_tags_1[0]), /* 1 */
	asn_DEF_SCellToAddMod_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_SCellToAddMod_r10_tags_1)
		/sizeof(asn_DEF_SCellToAddMod_r10_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SCellToAddMod_r10_1,
	7,	/* Elements count */
	&asn_SPC_SCellToAddMod_r10_specs_1	/* Additional specs */
};

