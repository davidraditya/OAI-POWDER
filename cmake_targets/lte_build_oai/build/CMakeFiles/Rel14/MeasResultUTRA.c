/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "MeasResultUTRA.h"

static int
memb_locationAreaCode_constraint_5(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 16)) {
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
memb_routingAreaCode_constraint_5(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8)) {
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
primaryPLMN_Suitable_r12_17_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
primaryPLMN_Suitable_r12_17_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	td->compare        = asn_DEF_NativeEnumerated.compare;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
primaryPLMN_Suitable_r12_17_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	primaryPLMN_Suitable_r12_17_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
primaryPLMN_Suitable_r12_17_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	primaryPLMN_Suitable_r12_17_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
primaryPLMN_Suitable_r12_17_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	primaryPLMN_Suitable_r12_17_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
primaryPLMN_Suitable_r12_17_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	primaryPLMN_Suitable_r12_17_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
primaryPLMN_Suitable_r12_17_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	primaryPLMN_Suitable_r12_17_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
primaryPLMN_Suitable_r12_17_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	primaryPLMN_Suitable_r12_17_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
primaryPLMN_Suitable_r12_17_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	primaryPLMN_Suitable_r12_17_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
primaryPLMN_Suitable_r12_17_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	primaryPLMN_Suitable_r12_17_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
primaryPLMN_Suitable_r12_17_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	primaryPLMN_Suitable_r12_17_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
primaryPLMN_Suitable_r12_17_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	primaryPLMN_Suitable_r12_17_inherit_TYPE_descriptor(td1);
	primaryPLMN_Suitable_r12_17_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
primaryPLMN_Suitable_r12_17_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	primaryPLMN_Suitable_r12_17_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
memb_utra_RSCP_constraint_10(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -5 && value <= 91)) {
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
memb_utra_EcN0_constraint_10(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 49)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_physCellId_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_locationAreaCode_constr_7 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_routingAreaCode_constr_8 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_primaryPLMN_Suitable_r12_constr_17 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_utra_RSCP_constr_11 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -5,  91 }	/* (-5..91) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_utra_EcN0_constr_12 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  49 }	/* (0..49) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_physCellId_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultUTRA__physCellId, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdUTRA_FDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultUTRA__physCellId, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdUTRA_TDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static asn_TYPE_tag2member_t asn_MAP_physCellId_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd at 7753 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd at 7755 */
};
static asn_CHOICE_specifics_t asn_SPC_physCellId_specs_2 = {
	sizeof(struct MeasResultUTRA__physCellId),
	offsetof(struct MeasResultUTRA__physCellId, _asn_ctx),
	offsetof(struct MeasResultUTRA__physCellId, present),
	sizeof(((struct MeasResultUTRA__physCellId *)0)->present),
	asn_MAP_physCellId_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_physCellId_2 = {
	"physCellId",
	"physCellId",
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
	&asn_PER_type_physCellId_constr_2,
	asn_MBR_physCellId_2,
	2,	/* Elements count */
	&asn_SPC_physCellId_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cgi_Info_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultUTRA__cgi_Info, cellGlobalId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellGlobalIdUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellGlobalId"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasResultUTRA__cgi_Info, locationAreaCode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_locationAreaCode_constraint_5,
		&asn_PER_memb_locationAreaCode_constr_7,
		0,
		"locationAreaCode"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasResultUTRA__cgi_Info, routingAreaCode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_routingAreaCode_constraint_5,
		&asn_PER_memb_routingAreaCode_constr_8,
		0,
		"routingAreaCode"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultUTRA__cgi_Info, plmn_IdentityList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_IdentityList2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"plmn-IdentityList"
		},
};
static int asn_MAP_cgi_Info_oms_5[] = { 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_cgi_Info_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_cgi_Info_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellGlobalId at 7757 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* locationAreaCode at 7758 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* routingAreaCode at 7759 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* plmn-IdentityList at 7760 */
};
static asn_SEQUENCE_specifics_t asn_SPC_cgi_Info_specs_5 = {
	sizeof(struct MeasResultUTRA__cgi_Info),
	offsetof(struct MeasResultUTRA__cgi_Info, _asn_ctx),
	asn_MAP_cgi_Info_tag2el_5,
	4,	/* Count of tags in the map */
	asn_MAP_cgi_Info_oms_5,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cgi_Info_5 = {
	"cgi-Info",
	"cgi-Info",
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
	asn_DEF_cgi_Info_tags_5,
	sizeof(asn_DEF_cgi_Info_tags_5)
		/sizeof(asn_DEF_cgi_Info_tags_5[0]) - 1, /* 1 */
	asn_DEF_cgi_Info_tags_5,	/* Same as above */
	sizeof(asn_DEF_cgi_Info_tags_5)
		/sizeof(asn_DEF_cgi_Info_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_cgi_Info_5,
	4,	/* Elements count */
	&asn_SPC_cgi_Info_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_14[] = {
	{ ATF_POINTER, 1, offsetof(struct MeasResultUTRA__measResult__ext1, additionalSI_Info_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSI_Info_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"additionalSI-Info-r9"
		},
};
static int asn_MAP_ext1_oms_14[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext1_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* additionalSI-Info-r9 at 7766 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_14 = {
	sizeof(struct MeasResultUTRA__measResult__ext1),
	offsetof(struct MeasResultUTRA__measResult__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_14,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_14,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_14 = {
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
	asn_DEF_ext1_tags_14,
	sizeof(asn_DEF_ext1_tags_14)
		/sizeof(asn_DEF_ext1_tags_14[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_14,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_14)
		/sizeof(asn_DEF_ext1_tags_14[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext1_14,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_14	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_primaryPLMN_Suitable_r12_value2enum_17[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_primaryPLMN_Suitable_r12_enum2value_17[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_primaryPLMN_Suitable_r12_specs_17 = {
	asn_MAP_primaryPLMN_Suitable_r12_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_primaryPLMN_Suitable_r12_enum2value_17,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_primaryPLMN_Suitable_r12_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_primaryPLMN_Suitable_r12_17 = {
	"primaryPLMN-Suitable-r12",
	"primaryPLMN-Suitable-r12",
	primaryPLMN_Suitable_r12_17_free,
	primaryPLMN_Suitable_r12_17_print,
	primaryPLMN_Suitable_r12_17_constraint,
	primaryPLMN_Suitable_r12_17_decode_ber,
	primaryPLMN_Suitable_r12_17_encode_der,
	primaryPLMN_Suitable_r12_17_decode_xer,
	primaryPLMN_Suitable_r12_17_encode_xer,
	primaryPLMN_Suitable_r12_17_decode_uper,
	primaryPLMN_Suitable_r12_17_encode_uper,
	primaryPLMN_Suitable_r12_17_decode_aper,
	primaryPLMN_Suitable_r12_17_encode_aper,
	primaryPLMN_Suitable_r12_17_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_primaryPLMN_Suitable_r12_tags_17,
	sizeof(asn_DEF_primaryPLMN_Suitable_r12_tags_17)
		/sizeof(asn_DEF_primaryPLMN_Suitable_r12_tags_17[0]) - 1, /* 1 */
	asn_DEF_primaryPLMN_Suitable_r12_tags_17,	/* Same as above */
	sizeof(asn_DEF_primaryPLMN_Suitable_r12_tags_17)
		/sizeof(asn_DEF_primaryPLMN_Suitable_r12_tags_17[0]), /* 2 */
	&asn_PER_type_primaryPLMN_Suitable_r12_constr_17,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_primaryPLMN_Suitable_r12_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_16[] = {
	{ ATF_POINTER, 1, offsetof(struct MeasResultUTRA__measResult__ext2, primaryPLMN_Suitable_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_primaryPLMN_Suitable_r12_17,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"primaryPLMN-Suitable-r12"
		},
};
static int asn_MAP_ext2_oms_16[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext2_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* primaryPLMN-Suitable-r12 at 7768 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_16 = {
	sizeof(struct MeasResultUTRA__measResult__ext2),
	offsetof(struct MeasResultUTRA__measResult__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_16,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_16,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_16 = {
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
	asn_DEF_ext2_tags_16,
	sizeof(asn_DEF_ext2_tags_16)
		/sizeof(asn_DEF_ext2_tags_16[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_16,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_16)
		/sizeof(asn_DEF_ext2_tags_16[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext2_16,
	1,	/* Elements count */
	&asn_SPC_ext2_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_measResult_10[] = {
	{ ATF_POINTER, 4, offsetof(struct MeasResultUTRA__measResult, utra_RSCP),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_utra_RSCP_constraint_10,
		&asn_PER_memb_utra_RSCP_constr_11,
		0,
		"utra-RSCP"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasResultUTRA__measResult, utra_EcN0),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_utra_EcN0_constraint_10,
		&asn_PER_memb_utra_EcN0_constr_12,
		0,
		"utra-EcN0"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasResultUTRA__measResult, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext1_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext1"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultUTRA__measResult, ext2),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_ext2_16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext2"
		},
};
static int asn_MAP_measResult_oms_10[] = { 0, 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_measResult_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_measResult_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* utra-RSCP at 7763 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* utra-EcN0 at 7764 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ext1 at 7766 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext2 at 7768 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResult_specs_10 = {
	sizeof(struct MeasResultUTRA__measResult),
	offsetof(struct MeasResultUTRA__measResult, _asn_ctx),
	asn_MAP_measResult_tag2el_10,
	4,	/* Count of tags in the map */
	asn_MAP_measResult_oms_10,	/* Optional members */
	2, 2,	/* Root/Additions */
	1,	/* Start extensions */
	5	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResult_10 = {
	"measResult",
	"measResult",
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
	asn_DEF_measResult_tags_10,
	sizeof(asn_DEF_measResult_tags_10)
		/sizeof(asn_DEF_measResult_tags_10[0]) - 1, /* 1 */
	asn_DEF_measResult_tags_10,	/* Same as above */
	sizeof(asn_DEF_measResult_tags_10)
		/sizeof(asn_DEF_measResult_tags_10[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_measResult_10,
	4,	/* Elements count */
	&asn_SPC_measResult_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MeasResultUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultUTRA, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_physCellId_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physCellId"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultUTRA, cgi_Info),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_cgi_Info_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cgi-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultUTRA, measResult),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_measResult_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measResult"
		},
};
static int asn_MAP_MeasResultUTRA_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_MeasResultUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MeasResultUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId at 7753 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cgi-Info at 7757 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* measResult at 7763 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MeasResultUTRA_specs_1 = {
	sizeof(struct MeasResultUTRA),
	offsetof(struct MeasResultUTRA, _asn_ctx),
	asn_MAP_MeasResultUTRA_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MeasResultUTRA_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultUTRA = {
	"MeasResultUTRA",
	"MeasResultUTRA",
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
	asn_DEF_MeasResultUTRA_tags_1,
	sizeof(asn_DEF_MeasResultUTRA_tags_1)
		/sizeof(asn_DEF_MeasResultUTRA_tags_1[0]), /* 1 */
	asn_DEF_MeasResultUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultUTRA_tags_1)
		/sizeof(asn_DEF_MeasResultUTRA_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MeasResultUTRA_1,
	3,	/* Elements count */
	&asn_SPC_MeasResultUTRA_specs_1	/* Additional specs */
};

