/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "InterFreqCarrierFreqInfo-NB-r13.h"

static int
memb_delta_RxLevMin_v1350_constraint_11(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -8 && value <= -1)) {
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
powerClass14dBm_Offset_r14_14_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
powerClass14dBm_Offset_r14_14_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
powerClass14dBm_Offset_r14_14_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	powerClass14dBm_Offset_r14_14_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
powerClass14dBm_Offset_r14_14_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	powerClass14dBm_Offset_r14_14_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
powerClass14dBm_Offset_r14_14_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	powerClass14dBm_Offset_r14_14_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
powerClass14dBm_Offset_r14_14_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	powerClass14dBm_Offset_r14_14_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
powerClass14dBm_Offset_r14_14_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	powerClass14dBm_Offset_r14_14_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
powerClass14dBm_Offset_r14_14_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	powerClass14dBm_Offset_r14_14_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
powerClass14dBm_Offset_r14_14_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	powerClass14dBm_Offset_r14_14_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
powerClass14dBm_Offset_r14_14_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	powerClass14dBm_Offset_r14_14_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
powerClass14dBm_Offset_r14_14_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	powerClass14dBm_Offset_r14_14_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
powerClass14dBm_Offset_r14_14_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	powerClass14dBm_Offset_r14_14_inherit_TYPE_descriptor(td1);
	powerClass14dBm_Offset_r14_14_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
powerClass14dBm_Offset_r14_14_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	powerClass14dBm_Offset_r14_14_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
ce_AuthorisationOffset_r14_21_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
ce_AuthorisationOffset_r14_21_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
ce_AuthorisationOffset_r14_21_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	ce_AuthorisationOffset_r14_21_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
ce_AuthorisationOffset_r14_21_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	ce_AuthorisationOffset_r14_21_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
ce_AuthorisationOffset_r14_21_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	ce_AuthorisationOffset_r14_21_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
ce_AuthorisationOffset_r14_21_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ce_AuthorisationOffset_r14_21_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
ce_AuthorisationOffset_r14_21_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	ce_AuthorisationOffset_r14_21_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
ce_AuthorisationOffset_r14_21_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ce_AuthorisationOffset_r14_21_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
ce_AuthorisationOffset_r14_21_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ce_AuthorisationOffset_r14_21_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
ce_AuthorisationOffset_r14_21_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ce_AuthorisationOffset_r14_21_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
ce_AuthorisationOffset_r14_21_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ce_AuthorisationOffset_r14_21_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
ce_AuthorisationOffset_r14_21_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	ce_AuthorisationOffset_r14_21_inherit_TYPE_descriptor(td1);
	ce_AuthorisationOffset_r14_21_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
ce_AuthorisationOffset_r14_21_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ce_AuthorisationOffset_r14_21_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_memb_delta_RxLevMin_v1350_constr_12 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3, -8, -1 }	/* (-8..-1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_powerClass14dBm_Offset_r14_constr_14 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ce_AuthorisationOffset_r14_constr_21 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static int asn_DFL_6_set_15(int set_value, void **sptr) {
	Q_OffsetRange_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 15 */
		*st = 15;
		return 0;
	} else {
		/* Test default value 15 */
		return (*st == 15);
	}
}
static asn_TYPE_member_t asn_MBR_ext1_11[] = {
	{ ATF_POINTER, 1, offsetof(struct InterFreqCarrierFreqInfo_NB_r13__ext1, delta_RxLevMin_v1350),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_delta_RxLevMin_v1350_constraint_11,
		&asn_PER_memb_delta_RxLevMin_v1350_constr_12,
		0,
		"delta-RxLevMin-v1350"
		},
};
static int asn_MAP_ext1_oms_11[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext1_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* delta-RxLevMin-v1350 at 11870 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_11 = {
	sizeof(struct InterFreqCarrierFreqInfo_NB_r13__ext1),
	offsetof(struct InterFreqCarrierFreqInfo_NB_r13__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_11,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_11 = {
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
	asn_DEF_ext1_tags_11,
	sizeof(asn_DEF_ext1_tags_11)
		/sizeof(asn_DEF_ext1_tags_11[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_11,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_11)
		/sizeof(asn_DEF_ext1_tags_11[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext1_11,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_11	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_powerClass14dBm_Offset_r14_value2enum_14[] = {
	{ 0,	4,	"dB-6" },
	{ 1,	4,	"dB-3" },
	{ 2,	3,	"dB3" },
	{ 3,	3,	"dB6" },
	{ 4,	3,	"dB9" },
	{ 5,	4,	"dB12" }
};
static unsigned int asn_MAP_powerClass14dBm_Offset_r14_enum2value_14[] = {
	1,	/* dB-3(1) */
	0,	/* dB-6(0) */
	5,	/* dB12(5) */
	2,	/* dB3(2) */
	3,	/* dB6(3) */
	4	/* dB9(4) */
};
static asn_INTEGER_specifics_t asn_SPC_powerClass14dBm_Offset_r14_specs_14 = {
	asn_MAP_powerClass14dBm_Offset_r14_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_powerClass14dBm_Offset_r14_enum2value_14,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_powerClass14dBm_Offset_r14_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_powerClass14dBm_Offset_r14_14 = {
	"powerClass14dBm-Offset-r14",
	"powerClass14dBm-Offset-r14",
	powerClass14dBm_Offset_r14_14_free,
	powerClass14dBm_Offset_r14_14_print,
	powerClass14dBm_Offset_r14_14_constraint,
	powerClass14dBm_Offset_r14_14_decode_ber,
	powerClass14dBm_Offset_r14_14_encode_der,
	powerClass14dBm_Offset_r14_14_decode_xer,
	powerClass14dBm_Offset_r14_14_encode_xer,
	powerClass14dBm_Offset_r14_14_decode_uper,
	powerClass14dBm_Offset_r14_14_encode_uper,
	powerClass14dBm_Offset_r14_14_decode_aper,
	powerClass14dBm_Offset_r14_14_encode_aper,
	powerClass14dBm_Offset_r14_14_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_powerClass14dBm_Offset_r14_tags_14,
	sizeof(asn_DEF_powerClass14dBm_Offset_r14_tags_14)
		/sizeof(asn_DEF_powerClass14dBm_Offset_r14_tags_14[0]) - 1, /* 1 */
	asn_DEF_powerClass14dBm_Offset_r14_tags_14,	/* Same as above */
	sizeof(asn_DEF_powerClass14dBm_Offset_r14_tags_14)
		/sizeof(asn_DEF_powerClass14dBm_Offset_r14_tags_14[0]), /* 2 */
	&asn_PER_type_powerClass14dBm_Offset_r14_constr_14,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_powerClass14dBm_Offset_r14_specs_14	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_ce_AuthorisationOffset_r14_value2enum_21[] = {
	{ 0,	3,	"dB5" },
	{ 1,	4,	"dB10" },
	{ 2,	4,	"dB15" },
	{ 3,	4,	"dB20" },
	{ 4,	4,	"dB25" },
	{ 5,	4,	"dB30" },
	{ 6,	4,	"dB35" }
};
static unsigned int asn_MAP_ce_AuthorisationOffset_r14_enum2value_21[] = {
	1,	/* dB10(1) */
	2,	/* dB15(2) */
	3,	/* dB20(3) */
	4,	/* dB25(4) */
	5,	/* dB30(5) */
	6,	/* dB35(6) */
	0	/* dB5(0) */
};
static asn_INTEGER_specifics_t asn_SPC_ce_AuthorisationOffset_r14_specs_21 = {
	asn_MAP_ce_AuthorisationOffset_r14_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_ce_AuthorisationOffset_r14_enum2value_21,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_ce_AuthorisationOffset_r14_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ce_AuthorisationOffset_r14_21 = {
	"ce-AuthorisationOffset-r14",
	"ce-AuthorisationOffset-r14",
	ce_AuthorisationOffset_r14_21_free,
	ce_AuthorisationOffset_r14_21_print,
	ce_AuthorisationOffset_r14_21_constraint,
	ce_AuthorisationOffset_r14_21_decode_ber,
	ce_AuthorisationOffset_r14_21_encode_der,
	ce_AuthorisationOffset_r14_21_decode_xer,
	ce_AuthorisationOffset_r14_21_encode_xer,
	ce_AuthorisationOffset_r14_21_decode_uper,
	ce_AuthorisationOffset_r14_21_encode_uper,
	ce_AuthorisationOffset_r14_21_decode_aper,
	ce_AuthorisationOffset_r14_21_encode_aper,
	ce_AuthorisationOffset_r14_21_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ce_AuthorisationOffset_r14_tags_21,
	sizeof(asn_DEF_ce_AuthorisationOffset_r14_tags_21)
		/sizeof(asn_DEF_ce_AuthorisationOffset_r14_tags_21[0]) - 1, /* 1 */
	asn_DEF_ce_AuthorisationOffset_r14_tags_21,	/* Same as above */
	sizeof(asn_DEF_ce_AuthorisationOffset_r14_tags_21)
		/sizeof(asn_DEF_ce_AuthorisationOffset_r14_tags_21[0]), /* 2 */
	&asn_PER_type_ce_AuthorisationOffset_r14_constr_21,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ce_AuthorisationOffset_r14_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_13[] = {
	{ ATF_POINTER, 2, offsetof(struct InterFreqCarrierFreqInfo_NB_r13__ext2, powerClass14dBm_Offset_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_powerClass14dBm_Offset_r14_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"powerClass14dBm-Offset-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct InterFreqCarrierFreqInfo_NB_r13__ext2, ce_AuthorisationOffset_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ce_AuthorisationOffset_r14_21,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ce-AuthorisationOffset-r14"
		},
};
static int asn_MAP_ext2_oms_13[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_ext2_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* powerClass14dBm-Offset-r14 at 11872 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ce-AuthorisationOffset-r14 at 11874 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_13 = {
	sizeof(struct InterFreqCarrierFreqInfo_NB_r13__ext2),
	offsetof(struct InterFreqCarrierFreqInfo_NB_r13__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_13,
	2,	/* Count of tags in the map */
	asn_MAP_ext2_oms_13,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_13 = {
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
	asn_DEF_ext2_tags_13,
	sizeof(asn_DEF_ext2_tags_13)
		/sizeof(asn_DEF_ext2_tags_13[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_13,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_13)
		/sizeof(asn_DEF_ext2_tags_13[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext2_13,
	2,	/* Elements count */
	&asn_SPC_ext2_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_InterFreqCarrierFreqInfo_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqCarrierFreqInfo_NB_r13, dl_CarrierFreq_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreq_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CarrierFreq-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqCarrierFreqInfo_NB_r13, q_RxLevMin_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_RxLevMin,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"q-RxLevMin-r13"
		},
	{ ATF_POINTER, 8, offsetof(struct InterFreqCarrierFreqInfo_NB_r13, q_QualMin_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_QualMin_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"q-QualMin-r13"
		},
	{ ATF_POINTER, 7, offsetof(struct InterFreqCarrierFreqInfo_NB_r13, p_Max_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"p-Max-r13"
		},
	{ ATF_POINTER, 6, offsetof(struct InterFreqCarrierFreqInfo_NB_r13, q_OffsetFreq_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_OffsetRange,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_6_set_15,	/* DEFAULT 15 */
		"q-OffsetFreq-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct InterFreqCarrierFreqInfo_NB_r13, interFreqNeighCellList_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqNeighCellList_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"interFreqNeighCellList-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct InterFreqCarrierFreqInfo_NB_r13, interFreqBlackCellList_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqBlackCellList_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"interFreqBlackCellList-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct InterFreqCarrierFreqInfo_NB_r13, multiBandInfoList_r13),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiBandInfoList_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"multiBandInfoList-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct InterFreqCarrierFreqInfo_NB_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_ext1_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext1"
		},
	{ ATF_POINTER, 1, offsetof(struct InterFreqCarrierFreqInfo_NB_r13, ext2),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_ext2_13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext2"
		},
};
static int asn_MAP_InterFreqCarrierFreqInfo_NB_r13_oms_1[] = { 2, 3, 4, 5, 6, 7, 8, 9 };
static ber_tlv_tag_t asn_DEF_InterFreqCarrierFreqInfo_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_InterFreqCarrierFreqInfo_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-CarrierFreq-r13 at 11861 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* q-RxLevMin-r13 at 11862 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* q-QualMin-r13 at 11863 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* p-Max-r13 at 11864 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* q-OffsetFreq-r13 at 11865 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* interFreqNeighCellList-r13 at 11866 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* interFreqBlackCellList-r13 at 11867 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* multiBandInfoList-r13 at 11868 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* ext1 at 11870 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* ext2 at 11873 */
};
static asn_SEQUENCE_specifics_t asn_SPC_InterFreqCarrierFreqInfo_NB_r13_specs_1 = {
	sizeof(struct InterFreqCarrierFreqInfo_NB_r13),
	offsetof(struct InterFreqCarrierFreqInfo_NB_r13, _asn_ctx),
	asn_MAP_InterFreqCarrierFreqInfo_NB_r13_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_InterFreqCarrierFreqInfo_NB_r13_oms_1,	/* Optional members */
	6, 2,	/* Root/Additions */
	7,	/* Start extensions */
	11	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqInfo_NB_r13 = {
	"InterFreqCarrierFreqInfo-NB-r13",
	"InterFreqCarrierFreqInfo-NB-r13",
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
	asn_DEF_InterFreqCarrierFreqInfo_NB_r13_tags_1,
	sizeof(asn_DEF_InterFreqCarrierFreqInfo_NB_r13_tags_1)
		/sizeof(asn_DEF_InterFreqCarrierFreqInfo_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_InterFreqCarrierFreqInfo_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_InterFreqCarrierFreqInfo_NB_r13_tags_1)
		/sizeof(asn_DEF_InterFreqCarrierFreqInfo_NB_r13_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_InterFreqCarrierFreqInfo_NB_r13_1,
	10,	/* Elements count */
	&asn_SPC_InterFreqCarrierFreqInfo_NB_r13_specs_1	/* Additional specs */
};

