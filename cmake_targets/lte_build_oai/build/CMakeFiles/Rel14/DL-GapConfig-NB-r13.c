/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "DL-GapConfig-NB-r13.h"

static int
dl_GapThreshold_r13_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
dl_GapThreshold_r13_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
dl_GapThreshold_r13_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	dl_GapThreshold_r13_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
dl_GapThreshold_r13_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	dl_GapThreshold_r13_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
dl_GapThreshold_r13_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	dl_GapThreshold_r13_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
dl_GapThreshold_r13_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	dl_GapThreshold_r13_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
dl_GapThreshold_r13_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	dl_GapThreshold_r13_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
dl_GapThreshold_r13_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	dl_GapThreshold_r13_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
dl_GapThreshold_r13_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	dl_GapThreshold_r13_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
dl_GapThreshold_r13_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	dl_GapThreshold_r13_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
dl_GapThreshold_r13_2_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	dl_GapThreshold_r13_2_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
dl_GapThreshold_r13_2_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	dl_GapThreshold_r13_2_inherit_TYPE_descriptor(td1);
	dl_GapThreshold_r13_2_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
dl_GapThreshold_r13_2_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	dl_GapThreshold_r13_2_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
dl_GapPeriodicity_r13_7_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
dl_GapPeriodicity_r13_7_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
dl_GapPeriodicity_r13_7_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	dl_GapPeriodicity_r13_7_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
dl_GapPeriodicity_r13_7_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	dl_GapPeriodicity_r13_7_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
dl_GapPeriodicity_r13_7_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	dl_GapPeriodicity_r13_7_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
dl_GapPeriodicity_r13_7_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	dl_GapPeriodicity_r13_7_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
dl_GapPeriodicity_r13_7_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	dl_GapPeriodicity_r13_7_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
dl_GapPeriodicity_r13_7_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	dl_GapPeriodicity_r13_7_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
dl_GapPeriodicity_r13_7_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	dl_GapPeriodicity_r13_7_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
dl_GapPeriodicity_r13_7_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	dl_GapPeriodicity_r13_7_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
dl_GapPeriodicity_r13_7_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	dl_GapPeriodicity_r13_7_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
dl_GapPeriodicity_r13_7_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	dl_GapPeriodicity_r13_7_inherit_TYPE_descriptor(td1);
	dl_GapPeriodicity_r13_7_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
dl_GapPeriodicity_r13_7_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	dl_GapPeriodicity_r13_7_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
dl_GapDurationCoeff_r13_12_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
dl_GapDurationCoeff_r13_12_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
dl_GapDurationCoeff_r13_12_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	dl_GapDurationCoeff_r13_12_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
dl_GapDurationCoeff_r13_12_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	dl_GapDurationCoeff_r13_12_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
dl_GapDurationCoeff_r13_12_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	dl_GapDurationCoeff_r13_12_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
dl_GapDurationCoeff_r13_12_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	dl_GapDurationCoeff_r13_12_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
dl_GapDurationCoeff_r13_12_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	dl_GapDurationCoeff_r13_12_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
dl_GapDurationCoeff_r13_12_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	dl_GapDurationCoeff_r13_12_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
dl_GapDurationCoeff_r13_12_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	dl_GapDurationCoeff_r13_12_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
dl_GapDurationCoeff_r13_12_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	dl_GapDurationCoeff_r13_12_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
dl_GapDurationCoeff_r13_12_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	dl_GapDurationCoeff_r13_12_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
dl_GapDurationCoeff_r13_12_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	dl_GapDurationCoeff_r13_12_inherit_TYPE_descriptor(td1);
	dl_GapDurationCoeff_r13_12_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
dl_GapDurationCoeff_r13_12_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	dl_GapDurationCoeff_r13_12_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_dl_GapThreshold_r13_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_dl_GapPeriodicity_r13_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_dl_GapDurationCoeff_r13_constr_12 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_dl_GapThreshold_r13_value2enum_2[] = {
	{ 0,	3,	"n32" },
	{ 1,	3,	"n64" },
	{ 2,	4,	"n128" },
	{ 3,	4,	"n256" }
};
static unsigned int asn_MAP_dl_GapThreshold_r13_enum2value_2[] = {
	2,	/* n128(2) */
	3,	/* n256(3) */
	0,	/* n32(0) */
	1	/* n64(1) */
};
static asn_INTEGER_specifics_t asn_SPC_dl_GapThreshold_r13_specs_2 = {
	asn_MAP_dl_GapThreshold_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_dl_GapThreshold_r13_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_dl_GapThreshold_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_GapThreshold_r13_2 = {
	"dl-GapThreshold-r13",
	"dl-GapThreshold-r13",
	dl_GapThreshold_r13_2_free,
	dl_GapThreshold_r13_2_print,
	dl_GapThreshold_r13_2_constraint,
	dl_GapThreshold_r13_2_decode_ber,
	dl_GapThreshold_r13_2_encode_der,
	dl_GapThreshold_r13_2_decode_xer,
	dl_GapThreshold_r13_2_encode_xer,
	dl_GapThreshold_r13_2_decode_uper,
	dl_GapThreshold_r13_2_encode_uper,
	dl_GapThreshold_r13_2_decode_aper,
	dl_GapThreshold_r13_2_encode_aper,
	dl_GapThreshold_r13_2_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_dl_GapThreshold_r13_tags_2,
	sizeof(asn_DEF_dl_GapThreshold_r13_tags_2)
		/sizeof(asn_DEF_dl_GapThreshold_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_dl_GapThreshold_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_dl_GapThreshold_r13_tags_2)
		/sizeof(asn_DEF_dl_GapThreshold_r13_tags_2[0]), /* 2 */
	&asn_PER_type_dl_GapThreshold_r13_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dl_GapThreshold_r13_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_dl_GapPeriodicity_r13_value2enum_7[] = {
	{ 0,	4,	"sf64" },
	{ 1,	5,	"sf128" },
	{ 2,	5,	"sf256" },
	{ 3,	5,	"sf512" }
};
static unsigned int asn_MAP_dl_GapPeriodicity_r13_enum2value_7[] = {
	1,	/* sf128(1) */
	2,	/* sf256(2) */
	3,	/* sf512(3) */
	0	/* sf64(0) */
};
static asn_INTEGER_specifics_t asn_SPC_dl_GapPeriodicity_r13_specs_7 = {
	asn_MAP_dl_GapPeriodicity_r13_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_dl_GapPeriodicity_r13_enum2value_7,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_dl_GapPeriodicity_r13_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_GapPeriodicity_r13_7 = {
	"dl-GapPeriodicity-r13",
	"dl-GapPeriodicity-r13",
	dl_GapPeriodicity_r13_7_free,
	dl_GapPeriodicity_r13_7_print,
	dl_GapPeriodicity_r13_7_constraint,
	dl_GapPeriodicity_r13_7_decode_ber,
	dl_GapPeriodicity_r13_7_encode_der,
	dl_GapPeriodicity_r13_7_decode_xer,
	dl_GapPeriodicity_r13_7_encode_xer,
	dl_GapPeriodicity_r13_7_decode_uper,
	dl_GapPeriodicity_r13_7_encode_uper,
	dl_GapPeriodicity_r13_7_decode_aper,
	dl_GapPeriodicity_r13_7_encode_aper,
	dl_GapPeriodicity_r13_7_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_dl_GapPeriodicity_r13_tags_7,
	sizeof(asn_DEF_dl_GapPeriodicity_r13_tags_7)
		/sizeof(asn_DEF_dl_GapPeriodicity_r13_tags_7[0]) - 1, /* 1 */
	asn_DEF_dl_GapPeriodicity_r13_tags_7,	/* Same as above */
	sizeof(asn_DEF_dl_GapPeriodicity_r13_tags_7)
		/sizeof(asn_DEF_dl_GapPeriodicity_r13_tags_7[0]), /* 2 */
	&asn_PER_type_dl_GapPeriodicity_r13_constr_7,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dl_GapPeriodicity_r13_specs_7	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_dl_GapDurationCoeff_r13_value2enum_12[] = {
	{ 0,	9,	"oneEighth" },
	{ 1,	9,	"oneFourth" },
	{ 2,	11,	"threeEighth" },
	{ 3,	7,	"oneHalf" }
};
static unsigned int asn_MAP_dl_GapDurationCoeff_r13_enum2value_12[] = {
	0,	/* oneEighth(0) */
	1,	/* oneFourth(1) */
	3,	/* oneHalf(3) */
	2	/* threeEighth(2) */
};
static asn_INTEGER_specifics_t asn_SPC_dl_GapDurationCoeff_r13_specs_12 = {
	asn_MAP_dl_GapDurationCoeff_r13_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_dl_GapDurationCoeff_r13_enum2value_12,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_dl_GapDurationCoeff_r13_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_GapDurationCoeff_r13_12 = {
	"dl-GapDurationCoeff-r13",
	"dl-GapDurationCoeff-r13",
	dl_GapDurationCoeff_r13_12_free,
	dl_GapDurationCoeff_r13_12_print,
	dl_GapDurationCoeff_r13_12_constraint,
	dl_GapDurationCoeff_r13_12_decode_ber,
	dl_GapDurationCoeff_r13_12_encode_der,
	dl_GapDurationCoeff_r13_12_decode_xer,
	dl_GapDurationCoeff_r13_12_encode_xer,
	dl_GapDurationCoeff_r13_12_decode_uper,
	dl_GapDurationCoeff_r13_12_encode_uper,
	dl_GapDurationCoeff_r13_12_decode_aper,
	dl_GapDurationCoeff_r13_12_encode_aper,
	dl_GapDurationCoeff_r13_12_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_dl_GapDurationCoeff_r13_tags_12,
	sizeof(asn_DEF_dl_GapDurationCoeff_r13_tags_12)
		/sizeof(asn_DEF_dl_GapDurationCoeff_r13_tags_12[0]) - 1, /* 1 */
	asn_DEF_dl_GapDurationCoeff_r13_tags_12,	/* Same as above */
	sizeof(asn_DEF_dl_GapDurationCoeff_r13_tags_12)
		/sizeof(asn_DEF_dl_GapDurationCoeff_r13_tags_12[0]), /* 2 */
	&asn_PER_type_dl_GapDurationCoeff_r13_constr_12,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dl_GapDurationCoeff_r13_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_DL_GapConfig_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_GapConfig_NB_r13, dl_GapThreshold_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dl_GapThreshold_r13_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-GapThreshold-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_GapConfig_NB_r13, dl_GapPeriodicity_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dl_GapPeriodicity_r13_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-GapPeriodicity-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_GapConfig_NB_r13, dl_GapDurationCoeff_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dl_GapDurationCoeff_r13_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-GapDurationCoeff-r13"
		},
};
static ber_tlv_tag_t asn_DEF_DL_GapConfig_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DL_GapConfig_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-GapThreshold-r13 at 12160 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-GapPeriodicity-r13 at 12161 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* dl-GapDurationCoeff-r13 at 12162 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DL_GapConfig_NB_r13_specs_1 = {
	sizeof(struct DL_GapConfig_NB_r13),
	offsetof(struct DL_GapConfig_NB_r13, _asn_ctx),
	asn_MAP_DL_GapConfig_NB_r13_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DL_GapConfig_NB_r13 = {
	"DL-GapConfig-NB-r13",
	"DL-GapConfig-NB-r13",
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
	asn_DEF_DL_GapConfig_NB_r13_tags_1,
	sizeof(asn_DEF_DL_GapConfig_NB_r13_tags_1)
		/sizeof(asn_DEF_DL_GapConfig_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_DL_GapConfig_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_GapConfig_NB_r13_tags_1)
		/sizeof(asn_DEF_DL_GapConfig_NB_r13_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DL_GapConfig_NB_r13_1,
	3,	/* Elements count */
	&asn_SPC_DL_GapConfig_NB_r13_specs_1	/* Additional specs */
};

