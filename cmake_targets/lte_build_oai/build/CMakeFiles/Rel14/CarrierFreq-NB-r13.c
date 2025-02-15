/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "CarrierFreq-NB-r13.h"

static int
carrierFreqOffset_r13_3_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
carrierFreqOffset_r13_3_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
carrierFreqOffset_r13_3_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	carrierFreqOffset_r13_3_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
carrierFreqOffset_r13_3_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	carrierFreqOffset_r13_3_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
carrierFreqOffset_r13_3_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	carrierFreqOffset_r13_3_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
carrierFreqOffset_r13_3_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	carrierFreqOffset_r13_3_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
carrierFreqOffset_r13_3_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	carrierFreqOffset_r13_3_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
carrierFreqOffset_r13_3_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	carrierFreqOffset_r13_3_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
carrierFreqOffset_r13_3_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	carrierFreqOffset_r13_3_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
carrierFreqOffset_r13_3_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	carrierFreqOffset_r13_3_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
carrierFreqOffset_r13_3_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	carrierFreqOffset_r13_3_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
carrierFreqOffset_r13_3_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	carrierFreqOffset_r13_3_inherit_TYPE_descriptor(td1);
	carrierFreqOffset_r13_3_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
carrierFreqOffset_r13_3_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	carrierFreqOffset_r13_3_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_carrierFreqOffset_r13_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  20 }	/* (0..20) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_carrierFreqOffset_r13_value2enum_3[] = {
	{ 0,	4,	"v-10" },
	{ 1,	3,	"v-9" },
	{ 2,	3,	"v-8" },
	{ 3,	3,	"v-7" },
	{ 4,	3,	"v-6" },
	{ 5,	3,	"v-5" },
	{ 6,	3,	"v-4" },
	{ 7,	3,	"v-3" },
	{ 8,	3,	"v-2" },
	{ 9,	3,	"v-1" },
	{ 10,	7,	"v-0dot5" },
	{ 11,	2,	"v0" },
	{ 12,	2,	"v1" },
	{ 13,	2,	"v2" },
	{ 14,	2,	"v3" },
	{ 15,	2,	"v4" },
	{ 16,	2,	"v5" },
	{ 17,	2,	"v6" },
	{ 18,	2,	"v7" },
	{ 19,	2,	"v8" },
	{ 20,	2,	"v9" }
};
static unsigned int asn_MAP_carrierFreqOffset_r13_enum2value_3[] = {
	10,	/* v-0dot5(10) */
	9,	/* v-1(9) */
	0,	/* v-10(0) */
	8,	/* v-2(8) */
	7,	/* v-3(7) */
	6,	/* v-4(6) */
	5,	/* v-5(5) */
	4,	/* v-6(4) */
	3,	/* v-7(3) */
	2,	/* v-8(2) */
	1,	/* v-9(1) */
	11,	/* v0(11) */
	12,	/* v1(12) */
	13,	/* v2(13) */
	14,	/* v3(14) */
	15,	/* v4(15) */
	16,	/* v5(16) */
	17,	/* v6(17) */
	18,	/* v7(18) */
	19,	/* v8(19) */
	20	/* v9(20) */
};
static asn_INTEGER_specifics_t asn_SPC_carrierFreqOffset_r13_specs_3 = {
	asn_MAP_carrierFreqOffset_r13_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_carrierFreqOffset_r13_enum2value_3,	/* N => "tag"; sorted by N */
	21,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_carrierFreqOffset_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_carrierFreqOffset_r13_3 = {
	"carrierFreqOffset-r13",
	"carrierFreqOffset-r13",
	carrierFreqOffset_r13_3_free,
	carrierFreqOffset_r13_3_print,
	carrierFreqOffset_r13_3_constraint,
	carrierFreqOffset_r13_3_decode_ber,
	carrierFreqOffset_r13_3_encode_der,
	carrierFreqOffset_r13_3_decode_xer,
	carrierFreqOffset_r13_3_encode_xer,
	carrierFreqOffset_r13_3_decode_uper,
	carrierFreqOffset_r13_3_encode_uper,
	carrierFreqOffset_r13_3_decode_aper,
	carrierFreqOffset_r13_3_encode_aper,
	carrierFreqOffset_r13_3_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_carrierFreqOffset_r13_tags_3,
	sizeof(asn_DEF_carrierFreqOffset_r13_tags_3)
		/sizeof(asn_DEF_carrierFreqOffset_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_carrierFreqOffset_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_carrierFreqOffset_r13_tags_3)
		/sizeof(asn_DEF_carrierFreqOffset_r13_tags_3[0]), /* 2 */
	&asn_PER_type_carrierFreqOffset_r13_constr_3,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_carrierFreqOffset_r13_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CarrierFreq_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreq_NB_r13, carrierFreq_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierFreq-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct CarrierFreq_NB_r13, carrierFreqOffset_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_carrierFreqOffset_r13_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierFreqOffset-r13"
		},
};
static int asn_MAP_CarrierFreq_NB_r13_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_CarrierFreq_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CarrierFreq_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq-r13 at 12115 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* carrierFreqOffset-r13 at 12117 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CarrierFreq_NB_r13_specs_1 = {
	sizeof(struct CarrierFreq_NB_r13),
	offsetof(struct CarrierFreq_NB_r13, _asn_ctx),
	asn_MAP_CarrierFreq_NB_r13_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_CarrierFreq_NB_r13_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CarrierFreq_NB_r13 = {
	"CarrierFreq-NB-r13",
	"CarrierFreq-NB-r13",
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
	asn_DEF_CarrierFreq_NB_r13_tags_1,
	sizeof(asn_DEF_CarrierFreq_NB_r13_tags_1)
		/sizeof(asn_DEF_CarrierFreq_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_CarrierFreq_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_CarrierFreq_NB_r13_tags_1)
		/sizeof(asn_DEF_CarrierFreq_NB_r13_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CarrierFreq_NB_r13_1,
	2,	/* Elements count */
	&asn_SPC_CarrierFreq_NB_r13_specs_1	/* Additional specs */
};

