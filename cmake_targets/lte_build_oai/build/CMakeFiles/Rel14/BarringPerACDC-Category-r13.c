/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "BarringPerACDC-Category-r13.h"

static int
ac_BarringFactor_r13_4_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
ac_BarringFactor_r13_4_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
ac_BarringFactor_r13_4_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	ac_BarringFactor_r13_4_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
ac_BarringFactor_r13_4_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	ac_BarringFactor_r13_4_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
ac_BarringFactor_r13_4_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	ac_BarringFactor_r13_4_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
ac_BarringFactor_r13_4_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ac_BarringFactor_r13_4_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
ac_BarringFactor_r13_4_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	ac_BarringFactor_r13_4_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
ac_BarringFactor_r13_4_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ac_BarringFactor_r13_4_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
ac_BarringFactor_r13_4_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ac_BarringFactor_r13_4_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
ac_BarringFactor_r13_4_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ac_BarringFactor_r13_4_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
ac_BarringFactor_r13_4_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ac_BarringFactor_r13_4_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
ac_BarringFactor_r13_4_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	ac_BarringFactor_r13_4_inherit_TYPE_descriptor(td1);
	ac_BarringFactor_r13_4_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
ac_BarringFactor_r13_4_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ac_BarringFactor_r13_4_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
ac_BarringTime_r13_21_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
ac_BarringTime_r13_21_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
ac_BarringTime_r13_21_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	ac_BarringTime_r13_21_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
ac_BarringTime_r13_21_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	ac_BarringTime_r13_21_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
ac_BarringTime_r13_21_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	ac_BarringTime_r13_21_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
ac_BarringTime_r13_21_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ac_BarringTime_r13_21_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
ac_BarringTime_r13_21_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	ac_BarringTime_r13_21_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
ac_BarringTime_r13_21_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ac_BarringTime_r13_21_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
ac_BarringTime_r13_21_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ac_BarringTime_r13_21_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
ac_BarringTime_r13_21_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ac_BarringTime_r13_21_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
ac_BarringTime_r13_21_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ac_BarringTime_r13_21_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
ac_BarringTime_r13_21_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	ac_BarringTime_r13_21_inherit_TYPE_descriptor(td1);
	ac_BarringTime_r13_21_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
ac_BarringTime_r13_21_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ac_BarringTime_r13_21_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
memb_acdc_Category_r13_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_ac_BarringFactor_r13_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ac_BarringTime_r13_constr_21 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_acdc_Category_r13_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_ac_BarringFactor_r13_value2enum_4[] = {
	{ 0,	3,	"p00" },
	{ 1,	3,	"p05" },
	{ 2,	3,	"p10" },
	{ 3,	3,	"p15" },
	{ 4,	3,	"p20" },
	{ 5,	3,	"p25" },
	{ 6,	3,	"p30" },
	{ 7,	3,	"p40" },
	{ 8,	3,	"p50" },
	{ 9,	3,	"p60" },
	{ 10,	3,	"p70" },
	{ 11,	3,	"p75" },
	{ 12,	3,	"p80" },
	{ 13,	3,	"p85" },
	{ 14,	3,	"p90" },
	{ 15,	3,	"p95" }
};
static unsigned int asn_MAP_ac_BarringFactor_r13_enum2value_4[] = {
	0,	/* p00(0) */
	1,	/* p05(1) */
	2,	/* p10(2) */
	3,	/* p15(3) */
	4,	/* p20(4) */
	5,	/* p25(5) */
	6,	/* p30(6) */
	7,	/* p40(7) */
	8,	/* p50(8) */
	9,	/* p60(9) */
	10,	/* p70(10) */
	11,	/* p75(11) */
	12,	/* p80(12) */
	13,	/* p85(13) */
	14,	/* p90(14) */
	15	/* p95(15) */
};
static asn_INTEGER_specifics_t asn_SPC_ac_BarringFactor_r13_specs_4 = {
	asn_MAP_ac_BarringFactor_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_ac_BarringFactor_r13_enum2value_4,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_ac_BarringFactor_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ac_BarringFactor_r13_4 = {
	"ac-BarringFactor-r13",
	"ac-BarringFactor-r13",
	ac_BarringFactor_r13_4_free,
	ac_BarringFactor_r13_4_print,
	ac_BarringFactor_r13_4_constraint,
	ac_BarringFactor_r13_4_decode_ber,
	ac_BarringFactor_r13_4_encode_der,
	ac_BarringFactor_r13_4_decode_xer,
	ac_BarringFactor_r13_4_encode_xer,
	ac_BarringFactor_r13_4_decode_uper,
	ac_BarringFactor_r13_4_encode_uper,
	ac_BarringFactor_r13_4_decode_aper,
	ac_BarringFactor_r13_4_encode_aper,
	ac_BarringFactor_r13_4_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ac_BarringFactor_r13_tags_4,
	sizeof(asn_DEF_ac_BarringFactor_r13_tags_4)
		/sizeof(asn_DEF_ac_BarringFactor_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_ac_BarringFactor_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_ac_BarringFactor_r13_tags_4)
		/sizeof(asn_DEF_ac_BarringFactor_r13_tags_4[0]), /* 2 */
	&asn_PER_type_ac_BarringFactor_r13_constr_4,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ac_BarringFactor_r13_specs_4	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_ac_BarringTime_r13_value2enum_21[] = {
	{ 0,	2,	"s4" },
	{ 1,	2,	"s8" },
	{ 2,	3,	"s16" },
	{ 3,	3,	"s32" },
	{ 4,	3,	"s64" },
	{ 5,	4,	"s128" },
	{ 6,	4,	"s256" },
	{ 7,	4,	"s512" }
};
static unsigned int asn_MAP_ac_BarringTime_r13_enum2value_21[] = {
	5,	/* s128(5) */
	2,	/* s16(2) */
	6,	/* s256(6) */
	3,	/* s32(3) */
	0,	/* s4(0) */
	7,	/* s512(7) */
	4,	/* s64(4) */
	1	/* s8(1) */
};
static asn_INTEGER_specifics_t asn_SPC_ac_BarringTime_r13_specs_21 = {
	asn_MAP_ac_BarringTime_r13_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_ac_BarringTime_r13_enum2value_21,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_ac_BarringTime_r13_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ac_BarringTime_r13_21 = {
	"ac-BarringTime-r13",
	"ac-BarringTime-r13",
	ac_BarringTime_r13_21_free,
	ac_BarringTime_r13_21_print,
	ac_BarringTime_r13_21_constraint,
	ac_BarringTime_r13_21_decode_ber,
	ac_BarringTime_r13_21_encode_der,
	ac_BarringTime_r13_21_decode_xer,
	ac_BarringTime_r13_21_encode_xer,
	ac_BarringTime_r13_21_decode_uper,
	ac_BarringTime_r13_21_encode_uper,
	ac_BarringTime_r13_21_decode_aper,
	ac_BarringTime_r13_21_encode_aper,
	ac_BarringTime_r13_21_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ac_BarringTime_r13_tags_21,
	sizeof(asn_DEF_ac_BarringTime_r13_tags_21)
		/sizeof(asn_DEF_ac_BarringTime_r13_tags_21[0]) - 1, /* 1 */
	asn_DEF_ac_BarringTime_r13_tags_21,	/* Same as above */
	sizeof(asn_DEF_ac_BarringTime_r13_tags_21)
		/sizeof(asn_DEF_ac_BarringTime_r13_tags_21[0]), /* 2 */
	&asn_PER_type_ac_BarringTime_r13_constr_21,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ac_BarringTime_r13_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_acdc_BarringConfig_r13_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BarringPerACDC_Category_r13__acdc_BarringConfig_r13, ac_BarringFactor_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ac_BarringFactor_r13_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ac-BarringFactor-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BarringPerACDC_Category_r13__acdc_BarringConfig_r13, ac_BarringTime_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ac_BarringTime_r13_21,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ac-BarringTime-r13"
		},
};
static ber_tlv_tag_t asn_DEF_acdc_BarringConfig_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_acdc_BarringConfig_r13_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ac-BarringFactor-r13 at 2714 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ac-BarringTime-r13 at 2716 */
};
static asn_SEQUENCE_specifics_t asn_SPC_acdc_BarringConfig_r13_specs_3 = {
	sizeof(struct BarringPerACDC_Category_r13__acdc_BarringConfig_r13),
	offsetof(struct BarringPerACDC_Category_r13__acdc_BarringConfig_r13, _asn_ctx),
	asn_MAP_acdc_BarringConfig_r13_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_acdc_BarringConfig_r13_3 = {
	"acdc-BarringConfig-r13",
	"acdc-BarringConfig-r13",
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
	asn_DEF_acdc_BarringConfig_r13_tags_3,
	sizeof(asn_DEF_acdc_BarringConfig_r13_tags_3)
		/sizeof(asn_DEF_acdc_BarringConfig_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_acdc_BarringConfig_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_acdc_BarringConfig_r13_tags_3)
		/sizeof(asn_DEF_acdc_BarringConfig_r13_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_acdc_BarringConfig_r13_3,
	2,	/* Elements count */
	&asn_SPC_acdc_BarringConfig_r13_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_BarringPerACDC_Category_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BarringPerACDC_Category_r13, acdc_Category_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_acdc_Category_r13_constraint_1,
		&asn_PER_memb_acdc_Category_r13_constr_2,
		0,
		"acdc-Category-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct BarringPerACDC_Category_r13, acdc_BarringConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_acdc_BarringConfig_r13_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"acdc-BarringConfig-r13"
		},
};
static int asn_MAP_BarringPerACDC_Category_r13_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_BarringPerACDC_Category_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_BarringPerACDC_Category_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* acdc-Category-r13 at 2711 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* acdc-BarringConfig-r13 at 2715 */
};
static asn_SEQUENCE_specifics_t asn_SPC_BarringPerACDC_Category_r13_specs_1 = {
	sizeof(struct BarringPerACDC_Category_r13),
	offsetof(struct BarringPerACDC_Category_r13, _asn_ctx),
	asn_MAP_BarringPerACDC_Category_r13_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_BarringPerACDC_Category_r13_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_BarringPerACDC_Category_r13 = {
	"BarringPerACDC-Category-r13",
	"BarringPerACDC-Category-r13",
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
	asn_DEF_BarringPerACDC_Category_r13_tags_1,
	sizeof(asn_DEF_BarringPerACDC_Category_r13_tags_1)
		/sizeof(asn_DEF_BarringPerACDC_Category_r13_tags_1[0]), /* 1 */
	asn_DEF_BarringPerACDC_Category_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_BarringPerACDC_Category_r13_tags_1)
		/sizeof(asn_DEF_BarringPerACDC_Category_r13_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_BarringPerACDC_Category_r13_1,
	2,	/* Elements count */
	&asn_SPC_BarringPerACDC_Category_r13_specs_1	/* Additional specs */
};

