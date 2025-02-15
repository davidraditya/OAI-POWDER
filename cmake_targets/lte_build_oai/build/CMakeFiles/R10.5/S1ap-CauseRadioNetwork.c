/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/opt/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "S1ap-CauseRadioNetwork.h"

int
S1ap_CauseRadioNetwork_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
S1ap_CauseRadioNetwork_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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

void
S1ap_CauseRadioNetwork_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	S1ap_CauseRadioNetwork_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
S1ap_CauseRadioNetwork_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	S1ap_CauseRadioNetwork_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
S1ap_CauseRadioNetwork_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	S1ap_CauseRadioNetwork_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
S1ap_CauseRadioNetwork_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	S1ap_CauseRadioNetwork_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
S1ap_CauseRadioNetwork_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	S1ap_CauseRadioNetwork_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
S1ap_CauseRadioNetwork_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	S1ap_CauseRadioNetwork_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
S1ap_CauseRadioNetwork_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	S1ap_CauseRadioNetwork_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
S1ap_CauseRadioNetwork_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	S1ap_CauseRadioNetwork_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

asn_enc_rval_t
S1ap_CauseRadioNetwork_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	S1ap_CauseRadioNetwork_1_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

asn_comp_rval_t * 
S1ap_CauseRadioNetwork_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	S1ap_CauseRadioNetwork_1_inherit_TYPE_descriptor(td1);
	S1ap_CauseRadioNetwork_1_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

asn_dec_rval_t
S1ap_CauseRadioNetwork_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	S1ap_CauseRadioNetwork_1_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_S1ap_CauseRadioNetwork_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  6,  6,  0,  35 }	/* (0..35,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_S1ap_CauseRadioNetwork_value2enum_1[] = {
	{ 0,	11,	"unspecified" },
	{ 1,	22,	"tx2relocoverall-expiry" },
	{ 2,	19,	"successful-handover" },
	{ 3,	38,	"release-due-to-eutran-generated-reason" },
	{ 4,	18,	"handover-cancelled" },
	{ 5,	16,	"partial-handover" },
	{ 6,	45,	"ho-failure-in-target-EPC-eNB-or-target-system" },
	{ 7,	21,	"ho-target-not-allowed" },
	{ 8,	22,	"tS1relocoverall-expiry" },
	{ 9,	19,	"tS1relocprep-expiry" },
	{ 10,	18,	"cell-not-available" },
	{ 11,	16,	"unknown-targetID" },
	{ 12,	43,	"no-radio-resources-available-in-target-cell" },
	{ 13,	22,	"unknown-mme-ue-s1ap-id" },
	{ 14,	22,	"unknown-enb-ue-s1ap-id" },
	{ 15,	23,	"unknown-pair-ue-s1ap-id" },
	{ 16,	35,	"handover-desirable-for-radio-reason" },
	{ 17,	22,	"time-critical-handover" },
	{ 18,	30,	"resource-optimisation-handover" },
	{ 19,	27,	"reduce-load-in-serving-cell" },
	{ 20,	15,	"user-inactivity" },
	{ 21,	29,	"radio-connection-with-ue-lost" },
	{ 22,	27,	"load-balancing-tau-required" },
	{ 23,	21,	"cs-fallback-triggered" },
	{ 24,	31,	"ue-not-available-for-ps-service" },
	{ 25,	29,	"radio-resources-not-available" },
	{ 26,	36,	"failure-in-radio-interface-procedure" },
	{ 27,	28,	"invals1ap-id-qos-combination" },
	{ 28,	20,	"interrat-redirection" },
	{ 29,	32,	"interaction-with-other-procedure" },
	{ 30,	16,	"unknown-E-RAB-ID" },
	{ 31,	27,	"multiple-E-RAB-ID-instances" },
	{ 32,	63,	"encryption-and-or-integrity-protection-algorithms-not-supported" },
	{ 33,	34,	"s1-intra-system-handover-triggered" },
	{ 34,	34,	"s1-inter-system-handover-triggered" },
	{ 35,	21,	"x2-handover-triggered" },
	{ 36,	25,	"redirection-towards-1xRTT" },
	{ 37,	23,	"not-supported-QCI-value" },
	{ 38,	19,	"invals1ap-id-CSG-Id" }
	/* This list is extensible */
};
static unsigned int asn_MAP_S1ap_CauseRadioNetwork_enum2value_1[] = {
	10,	/* cell-not-available(10) */
	23,	/* cs-fallback-triggered(23) */
	32,	/* encryption-and-or-integrity-protection-algorithms-not-supported(32) */
	26,	/* failure-in-radio-interface-procedure(26) */
	4,	/* handover-cancelled(4) */
	16,	/* handover-desirable-for-radio-reason(16) */
	6,	/* ho-failure-in-target-EPC-eNB-or-target-system(6) */
	7,	/* ho-target-not-allowed(7) */
	29,	/* interaction-with-other-procedure(29) */
	28,	/* interrat-redirection(28) */
	38,	/* invals1ap-id-CSG-Id(38) */
	27,	/* invals1ap-id-qos-combination(27) */
	22,	/* load-balancing-tau-required(22) */
	31,	/* multiple-E-RAB-ID-instances(31) */
	12,	/* no-radio-resources-available-in-target-cell(12) */
	37,	/* not-supported-QCI-value(37) */
	5,	/* partial-handover(5) */
	21,	/* radio-connection-with-ue-lost(21) */
	25,	/* radio-resources-not-available(25) */
	36,	/* redirection-towards-1xRTT(36) */
	19,	/* reduce-load-in-serving-cell(19) */
	3,	/* release-due-to-eutran-generated-reason(3) */
	18,	/* resource-optimisation-handover(18) */
	34,	/* s1-inter-system-handover-triggered(34) */
	33,	/* s1-intra-system-handover-triggered(33) */
	2,	/* successful-handover(2) */
	8,	/* tS1relocoverall-expiry(8) */
	9,	/* tS1relocprep-expiry(9) */
	17,	/* time-critical-handover(17) */
	1,	/* tx2relocoverall-expiry(1) */
	24,	/* ue-not-available-for-ps-service(24) */
	30,	/* unknown-E-RAB-ID(30) */
	14,	/* unknown-enb-ue-s1ap-id(14) */
	13,	/* unknown-mme-ue-s1ap-id(13) */
	15,	/* unknown-pair-ue-s1ap-id(15) */
	11,	/* unknown-targetID(11) */
	0,	/* unspecified(0) */
	20,	/* user-inactivity(20) */
	35	/* x2-handover-triggered(35) */
	/* This list is extensible */
};
static asn_INTEGER_specifics_t asn_SPC_S1ap_CauseRadioNetwork_specs_1 = {
	asn_MAP_S1ap_CauseRadioNetwork_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_S1ap_CauseRadioNetwork_enum2value_1,	/* N => "tag"; sorted by N */
	39,	/* Number of elements in the maps */
	37,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_S1ap_CauseRadioNetwork_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_S1ap_CauseRadioNetwork = {
	"S1ap-CauseRadioNetwork",
	"S1ap-CauseRadioNetwork",
	S1ap_CauseRadioNetwork_free,
	S1ap_CauseRadioNetwork_print,
	S1ap_CauseRadioNetwork_constraint,
	S1ap_CauseRadioNetwork_decode_ber,
	S1ap_CauseRadioNetwork_encode_der,
	S1ap_CauseRadioNetwork_decode_xer,
	S1ap_CauseRadioNetwork_encode_xer,
	S1ap_CauseRadioNetwork_decode_uper,
	S1ap_CauseRadioNetwork_encode_uper,
	S1ap_CauseRadioNetwork_decode_aper,
	S1ap_CauseRadioNetwork_encode_aper,
	S1ap_CauseRadioNetwork_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_S1ap_CauseRadioNetwork_tags_1,
	sizeof(asn_DEF_S1ap_CauseRadioNetwork_tags_1)
		/sizeof(asn_DEF_S1ap_CauseRadioNetwork_tags_1[0]), /* 1 */
	asn_DEF_S1ap_CauseRadioNetwork_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_CauseRadioNetwork_tags_1)
		/sizeof(asn_DEF_S1ap_CauseRadioNetwork_tags_1[0]), /* 1 */
	&asn_PER_type_S1ap_CauseRadioNetwork_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_S1ap_CauseRadioNetwork_specs_1	/* Additional specs */
};

