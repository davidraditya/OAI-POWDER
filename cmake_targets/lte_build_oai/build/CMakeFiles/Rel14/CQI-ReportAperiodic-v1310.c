/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "CQI-ReportAperiodic-v1310.h"

static int
memb_trigger1_r13_constraint_4(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_trigger2_r13_constraint_4(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_trigger3_r13_constraint_4(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_trigger4_r13_constraint_4(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_trigger5_r13_constraint_4(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_trigger6_r13_constraint_4(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_trigger1_SubframeSetIndicator_r13_constraint_13(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_trigger2_SubframeSetIndicator_r13_constraint_13(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_trigger3_SubframeSetIndicator_r13_constraint_13(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_trigger4_SubframeSetIndicator_r13_constraint_13(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_trigger5_SubframeSetIndicator_r13_constraint_13(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_trigger6_SubframeSetIndicator_r13_constraint_13(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_trigger1_r13_constr_5 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_trigger2_r13_constr_6 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_trigger3_r13_constr_7 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_trigger4_r13_constr_8 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_trigger5_r13_constr_9 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_trigger6_r13_constr_10 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_trigger1_SubframeSetIndicator_r13_constr_14 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_trigger2_SubframeSetIndicator_r13_constr_15 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_trigger3_SubframeSetIndicator_r13_constr_16 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_trigger4_SubframeSetIndicator_r13_constr_17 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_trigger5_SubframeSetIndicator_r13_constr_18 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_trigger6_SubframeSetIndicator_r13_constr_19 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_aperiodicCSI_Trigger2_r13_constr_11 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_CQI_ReportAperiodic_v1310_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_aperiodicCSI_Trigger_v1310_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger_v1310, trigger1_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_trigger1_r13_constraint_4,
		&asn_PER_memb_trigger1_r13_constr_5,
		0,
		"trigger1-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger_v1310, trigger2_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_trigger2_r13_constraint_4,
		&asn_PER_memb_trigger2_r13_constr_6,
		0,
		"trigger2-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger_v1310, trigger3_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_trigger3_r13_constraint_4,
		&asn_PER_memb_trigger3_r13_constr_7,
		0,
		"trigger3-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger_v1310, trigger4_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_trigger4_r13_constraint_4,
		&asn_PER_memb_trigger4_r13_constr_8,
		0,
		"trigger4-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger_v1310, trigger5_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_trigger5_r13_constraint_4,
		&asn_PER_memb_trigger5_r13_constr_9,
		0,
		"trigger5-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger_v1310, trigger6_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_trigger6_r13_constraint_4,
		&asn_PER_memb_trigger6_r13_constr_10,
		0,
		"trigger6-r13"
		},
};
static ber_tlv_tag_t asn_DEF_aperiodicCSI_Trigger_v1310_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_aperiodicCSI_Trigger_v1310_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* trigger1-r13 at 3850 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trigger2-r13 at 3851 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* trigger3-r13 at 3852 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* trigger4-r13 at 3853 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* trigger5-r13 at 3854 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* trigger6-r13 at 3855 */
};
static asn_SEQUENCE_specifics_t asn_SPC_aperiodicCSI_Trigger_v1310_specs_4 = {
	sizeof(struct CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger_v1310),
	offsetof(struct CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger_v1310, _asn_ctx),
	asn_MAP_aperiodicCSI_Trigger_v1310_tag2el_4,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_aperiodicCSI_Trigger_v1310_4 = {
	"aperiodicCSI-Trigger-v1310",
	"aperiodicCSI-Trigger-v1310",
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
	asn_DEF_aperiodicCSI_Trigger_v1310_tags_4,
	sizeof(asn_DEF_aperiodicCSI_Trigger_v1310_tags_4)
		/sizeof(asn_DEF_aperiodicCSI_Trigger_v1310_tags_4[0]) - 1, /* 1 */
	asn_DEF_aperiodicCSI_Trigger_v1310_tags_4,	/* Same as above */
	sizeof(asn_DEF_aperiodicCSI_Trigger_v1310_tags_4)
		/sizeof(asn_DEF_aperiodicCSI_Trigger_v1310_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_aperiodicCSI_Trigger_v1310_4,
	6,	/* Elements count */
	&asn_SPC_aperiodicCSI_Trigger_v1310_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13__setup, trigger1_SubframeSetIndicator_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_trigger1_SubframeSetIndicator_r13_constraint_13,
		&asn_PER_memb_trigger1_SubframeSetIndicator_r13_constr_14,
		0,
		"trigger1-SubframeSetIndicator-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13__setup, trigger2_SubframeSetIndicator_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_trigger2_SubframeSetIndicator_r13_constraint_13,
		&asn_PER_memb_trigger2_SubframeSetIndicator_r13_constr_15,
		0,
		"trigger2-SubframeSetIndicator-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13__setup, trigger3_SubframeSetIndicator_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_trigger3_SubframeSetIndicator_r13_constraint_13,
		&asn_PER_memb_trigger3_SubframeSetIndicator_r13_constr_16,
		0,
		"trigger3-SubframeSetIndicator-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13__setup, trigger4_SubframeSetIndicator_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_trigger4_SubframeSetIndicator_r13_constraint_13,
		&asn_PER_memb_trigger4_SubframeSetIndicator_r13_constr_17,
		0,
		"trigger4-SubframeSetIndicator-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13__setup, trigger5_SubframeSetIndicator_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_trigger5_SubframeSetIndicator_r13_constraint_13,
		&asn_PER_memb_trigger5_SubframeSetIndicator_r13_constr_18,
		0,
		"trigger5-SubframeSetIndicator-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13__setup, trigger6_SubframeSetIndicator_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_trigger6_SubframeSetIndicator_r13_constraint_13,
		&asn_PER_memb_trigger6_SubframeSetIndicator_r13_constr_19,
		0,
		"trigger6-SubframeSetIndicator-r13"
		},
};
static ber_tlv_tag_t asn_DEF_setup_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_setup_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* trigger1-SubframeSetIndicator-r13 at 3860 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trigger2-SubframeSetIndicator-r13 at 3861 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* trigger3-SubframeSetIndicator-r13 at 3862 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* trigger4-SubframeSetIndicator-r13 at 3863 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* trigger5-SubframeSetIndicator-r13 at 3864 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* trigger6-SubframeSetIndicator-r13 at 3865 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_13 = {
	sizeof(struct CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13__setup),
	offsetof(struct CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13__setup, _asn_ctx),
	asn_MAP_setup_tag2el_13,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_13 = {
	"setup",
	"setup",
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
	asn_DEF_setup_tags_13,
	sizeof(asn_DEF_setup_tags_13)
		/sizeof(asn_DEF_setup_tags_13[0]) - 1, /* 1 */
	asn_DEF_setup_tags_13,	/* Same as above */
	sizeof(asn_DEF_setup_tags_13)
		/sizeof(asn_DEF_setup_tags_13[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_setup_13,
	6,	/* Elements count */
	&asn_SPC_setup_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_aperiodicCSI_Trigger2_r13_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static asn_TYPE_tag2member_t asn_MAP_aperiodicCSI_Trigger2_r13_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release at 3858 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup at 3860 */
};
static asn_CHOICE_specifics_t asn_SPC_aperiodicCSI_Trigger2_r13_specs_11 = {
	sizeof(struct CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13),
	offsetof(struct CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13, _asn_ctx),
	offsetof(struct CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13, present),
	sizeof(((struct CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13 *)0)->present),
	asn_MAP_aperiodicCSI_Trigger2_r13_tag2el_11,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_aperiodicCSI_Trigger2_r13_11 = {
	"aperiodicCSI-Trigger2-r13",
	"aperiodicCSI-Trigger2-r13",
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
	&asn_PER_type_aperiodicCSI_Trigger2_r13_constr_11,
	asn_MBR_aperiodicCSI_Trigger2_r13_11,
	2,	/* Elements count */
	&asn_SPC_aperiodicCSI_Trigger2_r13_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_POINTER, 2, offsetof(struct CQI_ReportAperiodic_v1310__setup, aperiodicCSI_Trigger_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_aperiodicCSI_Trigger_v1310_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"aperiodicCSI-Trigger-v1310"
		},
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportAperiodic_v1310__setup, aperiodicCSI_Trigger2_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_aperiodicCSI_Trigger2_r13_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"aperiodicCSI-Trigger2-r13"
		},
};
static int asn_MAP_setup_oms_3[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* aperiodicCSI-Trigger-v1310 at 3850 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* aperiodicCSI-Trigger2-r13 at 3858 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct CQI_ReportAperiodic_v1310__setup),
	offsetof(struct CQI_ReportAperiodic_v1310__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
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
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_setup_3,
	2,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CQI_ReportAperiodic_v1310_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportAperiodic_v1310, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportAperiodic_v1310, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static asn_TYPE_tag2member_t asn_MAP_CQI_ReportAperiodic_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release at 3847 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup at 3856 */
};
static asn_CHOICE_specifics_t asn_SPC_CQI_ReportAperiodic_v1310_specs_1 = {
	sizeof(struct CQI_ReportAperiodic_v1310),
	offsetof(struct CQI_ReportAperiodic_v1310, _asn_ctx),
	offsetof(struct CQI_ReportAperiodic_v1310, present),
	sizeof(((struct CQI_ReportAperiodic_v1310 *)0)->present),
	asn_MAP_CQI_ReportAperiodic_v1310_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_CQI_ReportAperiodic_v1310 = {
	"CQI-ReportAperiodic-v1310",
	"CQI-ReportAperiodic-v1310",
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
	&asn_PER_type_CQI_ReportAperiodic_v1310_constr_1,
	asn_MBR_CQI_ReportAperiodic_v1310_1,
	2,	/* Elements count */
	&asn_SPC_CQI_ReportAperiodic_v1310_specs_1	/* Additional specs */
};

