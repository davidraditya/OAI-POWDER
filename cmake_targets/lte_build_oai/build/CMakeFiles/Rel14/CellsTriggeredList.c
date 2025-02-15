/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "CellsTriggeredList.h"

static asn_per_constraints_t asn_PER_type_physCellIdUTRA_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_Member_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_CellsTriggeredList_constr_1 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_physCellIdUTRA_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct physCellIdUTRA, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdUTRA_FDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct physCellIdUTRA, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdUTRA_TDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static asn_TYPE_tag2member_t asn_MAP_physCellIdUTRA_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd at 12871 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd at 12873 */
};
static asn_CHOICE_specifics_t asn_SPC_physCellIdUTRA_specs_4 = {
	sizeof(struct physCellIdUTRA),
	offsetof(struct physCellIdUTRA, _asn_ctx),
	offsetof(struct physCellIdUTRA, present),
	sizeof(((struct physCellIdUTRA *)0)->present),
	asn_MAP_physCellIdUTRA_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_physCellIdUTRA_4 = {
	"physCellIdUTRA",
	"physCellIdUTRA",
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
	&asn_PER_type_physCellIdUTRA_constr_4,
	asn_MBR_physCellIdUTRA_4,
	2,	/* Elements count */
	&asn_SPC_physCellIdUTRA_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_physCellIdGERAN_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct physCellIdGERAN, carrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqGERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierFreq"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct physCellIdGERAN, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdGERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physCellId"
		},
};
static ber_tlv_tag_t asn_DEF_physCellIdGERAN_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_physCellIdGERAN_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq at 12875 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* physCellId at 12877 */
};
static asn_SEQUENCE_specifics_t asn_SPC_physCellIdGERAN_specs_7 = {
	sizeof(struct physCellIdGERAN),
	offsetof(struct physCellIdGERAN, _asn_ctx),
	asn_MAP_physCellIdGERAN_tag2el_7,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_physCellIdGERAN_7 = {
	"physCellIdGERAN",
	"physCellIdGERAN",
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
	asn_DEF_physCellIdGERAN_tags_7,
	sizeof(asn_DEF_physCellIdGERAN_tags_7)
		/sizeof(asn_DEF_physCellIdGERAN_tags_7[0]) - 1, /* 1 */
	asn_DEF_physCellIdGERAN_tags_7,	/* Same as above */
	sizeof(asn_DEF_physCellIdGERAN_tags_7)
		/sizeof(asn_DEF_physCellIdGERAN_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_physCellIdGERAN_7,
	2,	/* Elements count */
	&asn_SPC_physCellIdGERAN_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Member_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellsTriggeredList__Member, choice.physCellIdEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physCellIdEUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellsTriggeredList__Member, choice.physCellIdUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_physCellIdUTRA_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physCellIdUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellsTriggeredList__Member, choice.physCellIdGERAN),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_physCellIdGERAN_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physCellIdGERAN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellsTriggeredList__Member, choice.physCellIdCDMA2000),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdCDMA2000,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physCellIdCDMA2000"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellsTriggeredList__Member, choice.wlan_Identifiers_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WLAN_Identifiers_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"wlan-Identifiers-r13"
		},
};
static asn_TYPE_tag2member_t asn_MAP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellIdEUTRA at 12869 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* physCellIdUTRA at 12871 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* physCellIdGERAN at 12875 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* physCellIdCDMA2000 at 12878 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* wlan-Identifiers-r13 at 12880 */
};
static asn_CHOICE_specifics_t asn_SPC_Member_specs_2 = {
	sizeof(struct CellsTriggeredList__Member),
	offsetof(struct CellsTriggeredList__Member, _asn_ctx),
	offsetof(struct CellsTriggeredList__Member, present),
	sizeof(((struct CellsTriggeredList__Member *)0)->present),
	asn_MAP_Member_tag2el_2,
	5,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_2 = {
	"CHOICE",
	"CHOICE",
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
	&asn_PER_type_Member_constr_2,
	asn_MBR_Member_2,
	5,	/* Elements count */
	&asn_SPC_Member_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CellsTriggeredList_1[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Member_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_CellsTriggeredList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_CellsTriggeredList_specs_1 = {
	sizeof(struct CellsTriggeredList),
	offsetof(struct CellsTriggeredList, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
asn_TYPE_descriptor_t asn_DEF_CellsTriggeredList = {
	"CellsTriggeredList",
	"CellsTriggeredList",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	SEQUENCE_OF_decode_aper,
	SEQUENCE_OF_encode_aper,
	SEQUENCE_OF_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CellsTriggeredList_tags_1,
	sizeof(asn_DEF_CellsTriggeredList_tags_1)
		/sizeof(asn_DEF_CellsTriggeredList_tags_1[0]), /* 1 */
	asn_DEF_CellsTriggeredList_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellsTriggeredList_tags_1)
		/sizeof(asn_DEF_CellsTriggeredList_tags_1[0]), /* 1 */
	&asn_PER_type_CellsTriggeredList_constr_1,
	asn_MBR_CellsTriggeredList_1,
	1,	/* Single element */
	&asn_SPC_CellsTriggeredList_specs_1	/* Additional specs */
};

