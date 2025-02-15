/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "MeasObjectUTRA.h"

static asn_per_constraints_t asn_PER_type_cellsToAddModList_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_cellForWhichToReportCGI_constr_8 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static int asn_DFL_3_set_0(int set_value, void **sptr) {
	Q_OffsetRangeInterRAT_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		*st = 0;
		return 0;
	} else {
		/* Test default value 0 */
		return (*st == 0);
	}
}
static asn_TYPE_member_t asn_MBR_cellsToAddModList_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectUTRA__cellsToAddModList, choice.cellsToAddModListUTRA_FDD),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellsToAddModListUTRA_FDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellsToAddModListUTRA-FDD"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectUTRA__cellsToAddModList, choice.cellsToAddModListUTRA_TDD),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellsToAddModListUTRA_TDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellsToAddModListUTRA-TDD"
		},
};
static asn_TYPE_tag2member_t asn_MAP_cellsToAddModList_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellsToAddModListUTRA-FDD at 7578 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cellsToAddModListUTRA-TDD at 7580 */
};
static asn_CHOICE_specifics_t asn_SPC_cellsToAddModList_specs_5 = {
	sizeof(struct MeasObjectUTRA__cellsToAddModList),
	offsetof(struct MeasObjectUTRA__cellsToAddModList, _asn_ctx),
	offsetof(struct MeasObjectUTRA__cellsToAddModList, present),
	sizeof(((struct MeasObjectUTRA__cellsToAddModList *)0)->present),
	asn_MAP_cellsToAddModList_tag2el_5,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellsToAddModList_5 = {
	"cellsToAddModList",
	"cellsToAddModList",
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
	&asn_PER_type_cellsToAddModList_constr_5,
	asn_MBR_cellsToAddModList_5,
	2,	/* Elements count */
	&asn_SPC_cellsToAddModList_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cellForWhichToReportCGI_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectUTRA__cellForWhichToReportCGI, choice.utra_FDD),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdUTRA_FDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utra-FDD"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectUTRA__cellForWhichToReportCGI, choice.utra_TDD),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdUTRA_TDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utra-TDD"
		},
};
static asn_TYPE_tag2member_t asn_MAP_cellForWhichToReportCGI_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* utra-FDD at 7582 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* utra-TDD at 7584 */
};
static asn_CHOICE_specifics_t asn_SPC_cellForWhichToReportCGI_specs_8 = {
	sizeof(struct MeasObjectUTRA__cellForWhichToReportCGI),
	offsetof(struct MeasObjectUTRA__cellForWhichToReportCGI, _asn_ctx),
	offsetof(struct MeasObjectUTRA__cellForWhichToReportCGI, present),
	sizeof(((struct MeasObjectUTRA__cellForWhichToReportCGI *)0)->present),
	asn_MAP_cellForWhichToReportCGI_tag2el_8,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellForWhichToReportCGI_8 = {
	"cellForWhichToReportCGI",
	"cellForWhichToReportCGI",
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
	&asn_PER_type_cellForWhichToReportCGI_constr_8,
	asn_MBR_cellForWhichToReportCGI_8,
	2,	/* Elements count */
	&asn_SPC_cellForWhichToReportCGI_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_12[] = {
	{ ATF_POINTER, 1, offsetof(struct MeasObjectUTRA__ext1, csg_allowedReportingCells_v930),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSG_AllowedReportingCells_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csg-allowedReportingCells-v930"
		},
};
static int asn_MAP_ext1_oms_12[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext1_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* csg-allowedReportingCells-v930 at 7586 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_12 = {
	sizeof(struct MeasObjectUTRA__ext1),
	offsetof(struct MeasObjectUTRA__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_12,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_12,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_12 = {
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
	asn_DEF_ext1_tags_12,
	sizeof(asn_DEF_ext1_tags_12)
		/sizeof(asn_DEF_ext1_tags_12[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_12,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_12)
		/sizeof(asn_DEF_ext1_tags_12[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext1_12,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_14[] = {
	{ ATF_POINTER, 1, offsetof(struct MeasObjectUTRA__ext2, reducedMeasPerformance_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reducedMeasPerformance-r12"
		},
};
static int asn_MAP_ext2_oms_14[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext2_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* reducedMeasPerformance-r12 at 7588 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_14 = {
	sizeof(struct MeasObjectUTRA__ext2),
	offsetof(struct MeasObjectUTRA__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_14,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_14,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_14 = {
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
	asn_DEF_ext2_tags_14,
	sizeof(asn_DEF_ext2_tags_14)
		/sizeof(asn_DEF_ext2_tags_14[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_14,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_14)
		/sizeof(asn_DEF_ext2_tags_14[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext2_14,
	1,	/* Elements count */
	&asn_SPC_ext2_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MeasObjectUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectUTRA, carrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierFreq"
		},
	{ ATF_NOFLAGS, 6, offsetof(struct MeasObjectUTRA, offsetFreq),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_OffsetRangeInterRAT,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_3_set_0,	/* DEFAULT 0 */
		"offsetFreq"
		},
	{ ATF_POINTER, 5, offsetof(struct MeasObjectUTRA, cellsToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndexList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellsToRemoveList"
		},
	{ ATF_POINTER, 4, offsetof(struct MeasObjectUTRA, cellsToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_cellsToAddModList_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellsToAddModList"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasObjectUTRA, cellForWhichToReportCGI),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_cellForWhichToReportCGI_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellForWhichToReportCGI"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasObjectUTRA, ext1),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_ext1_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext1"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasObjectUTRA, ext2),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_ext2_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext2"
		},
};
static int asn_MAP_MeasObjectUTRA_oms_1[] = { 1, 2, 3, 4, 5, 6 };
static ber_tlv_tag_t asn_DEF_MeasObjectUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MeasObjectUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq at 7574 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* offsetFreq at 7575 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cellsToRemoveList at 7576 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cellsToAddModList at 7578 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* cellForWhichToReportCGI at 7582 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ext1 at 7586 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ext2 at 7588 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MeasObjectUTRA_specs_1 = {
	sizeof(struct MeasObjectUTRA),
	offsetof(struct MeasObjectUTRA, _asn_ctx),
	asn_MAP_MeasObjectUTRA_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_MeasObjectUTRA_oms_1,	/* Optional members */
	4, 2,	/* Root/Additions */
	4,	/* Start extensions */
	8	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MeasObjectUTRA = {
	"MeasObjectUTRA",
	"MeasObjectUTRA",
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
	asn_DEF_MeasObjectUTRA_tags_1,
	sizeof(asn_DEF_MeasObjectUTRA_tags_1)
		/sizeof(asn_DEF_MeasObjectUTRA_tags_1[0]), /* 1 */
	asn_DEF_MeasObjectUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasObjectUTRA_tags_1)
		/sizeof(asn_DEF_MeasObjectUTRA_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MeasObjectUTRA_1,
	7,	/* Elements count */
	&asn_SPC_MeasObjectUTRA_specs_1	/* Additional specs */
};

