/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "SRB-ToAddMod-NB-r13.h"

static asn_per_constraints_t asn_PER_type_rlc_Config_r13_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_logicalChannelConfig_r13_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_rlc_Config_r13_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SRB_ToAddMod_NB_r13__rlc_Config_r13, choice.explicitValue),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLC_Config_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"explicitValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRB_ToAddMod_NB_r13__rlc_Config_r13, choice.defaultValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultValue"
		},
};
static asn_TYPE_tag2member_t asn_MAP_rlc_Config_r13_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicitValue at 12424 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultValue at 12425 */
};
static asn_CHOICE_specifics_t asn_SPC_rlc_Config_r13_specs_2 = {
	sizeof(struct SRB_ToAddMod_NB_r13__rlc_Config_r13),
	offsetof(struct SRB_ToAddMod_NB_r13__rlc_Config_r13, _asn_ctx),
	offsetof(struct SRB_ToAddMod_NB_r13__rlc_Config_r13, present),
	sizeof(((struct SRB_ToAddMod_NB_r13__rlc_Config_r13 *)0)->present),
	asn_MAP_rlc_Config_r13_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rlc_Config_r13_2 = {
	"rlc-Config-r13",
	"rlc-Config-r13",
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
	&asn_PER_type_rlc_Config_r13_constr_2,
	asn_MBR_rlc_Config_r13_2,
	2,	/* Elements count */
	&asn_SPC_rlc_Config_r13_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_logicalChannelConfig_r13_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SRB_ToAddMod_NB_r13__logicalChannelConfig_r13, choice.explicitValue),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogicalChannelConfig_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"explicitValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRB_ToAddMod_NB_r13__logicalChannelConfig_r13, choice.defaultValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultValue"
		},
};
static asn_TYPE_tag2member_t asn_MAP_logicalChannelConfig_r13_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicitValue at 12428 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultValue at 12429 */
};
static asn_CHOICE_specifics_t asn_SPC_logicalChannelConfig_r13_specs_5 = {
	sizeof(struct SRB_ToAddMod_NB_r13__logicalChannelConfig_r13),
	offsetof(struct SRB_ToAddMod_NB_r13__logicalChannelConfig_r13, _asn_ctx),
	offsetof(struct SRB_ToAddMod_NB_r13__logicalChannelConfig_r13, present),
	sizeof(((struct SRB_ToAddMod_NB_r13__logicalChannelConfig_r13 *)0)->present),
	asn_MAP_logicalChannelConfig_r13_tag2el_5,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_logicalChannelConfig_r13_5 = {
	"logicalChannelConfig-r13",
	"logicalChannelConfig-r13",
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
	&asn_PER_type_logicalChannelConfig_r13_constr_5,
	asn_MBR_logicalChannelConfig_r13_5,
	2,	/* Elements count */
	&asn_SPC_logicalChannelConfig_r13_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_9[] = {
	{ ATF_POINTER, 1, offsetof(struct SRB_ToAddMod_NB_r13__ext1, rlc_Config_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Config_NB_v1430,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rlc-Config-v1430"
		},
};
static int asn_MAP_ext1_oms_9[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext1_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rlc-Config-v1430 at 12432 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_9 = {
	sizeof(struct SRB_ToAddMod_NB_r13__ext1),
	offsetof(struct SRB_ToAddMod_NB_r13__ext1, _asn_ctx),
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

static asn_TYPE_member_t asn_MBR_SRB_ToAddMod_NB_r13_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SRB_ToAddMod_NB_r13, rlc_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_rlc_Config_r13_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rlc-Config-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct SRB_ToAddMod_NB_r13, logicalChannelConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_logicalChannelConfig_r13_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"logicalChannelConfig-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SRB_ToAddMod_NB_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext1_9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext1"
		},
};
static int asn_MAP_SRB_ToAddMod_NB_r13_oms_1[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_SRB_ToAddMod_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SRB_ToAddMod_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rlc-Config-r13 at 12424 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* logicalChannelConfig-r13 at 12428 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ext1 at 12432 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SRB_ToAddMod_NB_r13_specs_1 = {
	sizeof(struct SRB_ToAddMod_NB_r13),
	offsetof(struct SRB_ToAddMod_NB_r13, _asn_ctx),
	asn_MAP_SRB_ToAddMod_NB_r13_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SRB_ToAddMod_NB_r13_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	1,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SRB_ToAddMod_NB_r13 = {
	"SRB-ToAddMod-NB-r13",
	"SRB-ToAddMod-NB-r13",
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
	asn_DEF_SRB_ToAddMod_NB_r13_tags_1,
	sizeof(asn_DEF_SRB_ToAddMod_NB_r13_tags_1)
		/sizeof(asn_DEF_SRB_ToAddMod_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_SRB_ToAddMod_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_SRB_ToAddMod_NB_r13_tags_1)
		/sizeof(asn_DEF_SRB_ToAddMod_NB_r13_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SRB_ToAddMod_NB_r13_1,
	3,	/* Elements count */
	&asn_SPC_SRB_ToAddMod_NB_r13_specs_1	/* Additional specs */
};

