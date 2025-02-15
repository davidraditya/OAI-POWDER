/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "MeasResultWLAN-r13.h"

static int
connectedWLAN_r13_11_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
connectedWLAN_r13_11_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
connectedWLAN_r13_11_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	connectedWLAN_r13_11_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
connectedWLAN_r13_11_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	connectedWLAN_r13_11_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
connectedWLAN_r13_11_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	connectedWLAN_r13_11_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
connectedWLAN_r13_11_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	connectedWLAN_r13_11_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
connectedWLAN_r13_11_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	connectedWLAN_r13_11_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
connectedWLAN_r13_11_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	connectedWLAN_r13_11_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
connectedWLAN_r13_11_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	connectedWLAN_r13_11_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
connectedWLAN_r13_11_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	connectedWLAN_r13_11_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
connectedWLAN_r13_11_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	connectedWLAN_r13_11_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
connectedWLAN_r13_11_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	connectedWLAN_r13_11_inherit_TYPE_descriptor(td1);
	connectedWLAN_r13_11_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
connectedWLAN_r13_11_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	connectedWLAN_r13_11_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
memb_availableAdmissionCapacityWLAN_r13_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31250)) {
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
memb_channelUtilizationWLAN_r13_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
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
memb_stationCountWLAN_r13_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_connectedWLAN_r13_constr_11 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_availableAdmissionCapacityWLAN_r13_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 15,  15,  0,  31250 }	/* (0..31250) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_channelUtilizationWLAN_r13_constr_9 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_stationCountWLAN_r13_constr_10 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_connectedWLAN_r13_value2enum_11[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_connectedWLAN_r13_enum2value_11[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_connectedWLAN_r13_specs_11 = {
	asn_MAP_connectedWLAN_r13_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_connectedWLAN_r13_enum2value_11,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_connectedWLAN_r13_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_connectedWLAN_r13_11 = {
	"connectedWLAN-r13",
	"connectedWLAN-r13",
	connectedWLAN_r13_11_free,
	connectedWLAN_r13_11_print,
	connectedWLAN_r13_11_constraint,
	connectedWLAN_r13_11_decode_ber,
	connectedWLAN_r13_11_encode_der,
	connectedWLAN_r13_11_decode_xer,
	connectedWLAN_r13_11_encode_xer,
	connectedWLAN_r13_11_decode_uper,
	connectedWLAN_r13_11_encode_uper,
	connectedWLAN_r13_11_decode_aper,
	connectedWLAN_r13_11_encode_aper,
	connectedWLAN_r13_11_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_connectedWLAN_r13_tags_11,
	sizeof(asn_DEF_connectedWLAN_r13_tags_11)
		/sizeof(asn_DEF_connectedWLAN_r13_tags_11[0]) - 1, /* 1 */
	asn_DEF_connectedWLAN_r13_tags_11,	/* Same as above */
	sizeof(asn_DEF_connectedWLAN_r13_tags_11)
		/sizeof(asn_DEF_connectedWLAN_r13_tags_11[0]), /* 2 */
	&asn_PER_type_connectedWLAN_r13_constr_11,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_connectedWLAN_r13_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MeasResultWLAN_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultWLAN_r13, wlan_Identifiers_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WLAN_Identifiers_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"wlan-Identifiers-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasResultWLAN_r13, carrierInfoWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WLAN_CarrierInfo_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierInfoWLAN-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultWLAN_r13, bandWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WLAN_BandIndicator_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"bandWLAN-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultWLAN_r13, rssiWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WLAN_RSSI_Range_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rssiWLAN-r13"
		},
	{ ATF_POINTER, 6, offsetof(struct MeasResultWLAN_r13, availableAdmissionCapacityWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_availableAdmissionCapacityWLAN_r13_constraint_1,
		&asn_PER_memb_availableAdmissionCapacityWLAN_r13_constr_6,
		0,
		"availableAdmissionCapacityWLAN-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct MeasResultWLAN_r13, backhaulDL_BandwidthWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WLAN_backhaulRate_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"backhaulDL-BandwidthWLAN-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct MeasResultWLAN_r13, backhaulUL_BandwidthWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WLAN_backhaulRate_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"backhaulUL-BandwidthWLAN-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasResultWLAN_r13, channelUtilizationWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_channelUtilizationWLAN_r13_constraint_1,
		&asn_PER_memb_channelUtilizationWLAN_r13_constr_9,
		0,
		"channelUtilizationWLAN-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasResultWLAN_r13, stationCountWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_stationCountWLAN_r13_constraint_1,
		&asn_PER_memb_stationCountWLAN_r13_constr_10,
		0,
		"stationCountWLAN-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultWLAN_r13, connectedWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_connectedWLAN_r13_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"connectedWLAN-r13"
		},
};
static int asn_MAP_MeasResultWLAN_r13_oms_1[] = { 1, 2, 4, 5, 6, 7, 8, 9 };
static ber_tlv_tag_t asn_DEF_MeasResultWLAN_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MeasResultWLAN_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* wlan-Identifiers-r13 at 7810 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* carrierInfoWLAN-r13 at 7811 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* bandWLAN-r13 at 7812 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rssiWLAN-r13 at 7813 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* availableAdmissionCapacityWLAN-r13 at 7814 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* backhaulDL-BandwidthWLAN-r13 at 7815 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* backhaulUL-BandwidthWLAN-r13 at 7816 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* channelUtilizationWLAN-r13 at 7817 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* stationCountWLAN-r13 at 7818 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* connectedWLAN-r13 at 7819 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MeasResultWLAN_r13_specs_1 = {
	sizeof(struct MeasResultWLAN_r13),
	offsetof(struct MeasResultWLAN_r13, _asn_ctx),
	asn_MAP_MeasResultWLAN_r13_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_MeasResultWLAN_r13_oms_1,	/* Optional members */
	8, 0,	/* Root/Additions */
	9,	/* Start extensions */
	11	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultWLAN_r13 = {
	"MeasResultWLAN-r13",
	"MeasResultWLAN-r13",
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
	asn_DEF_MeasResultWLAN_r13_tags_1,
	sizeof(asn_DEF_MeasResultWLAN_r13_tags_1)
		/sizeof(asn_DEF_MeasResultWLAN_r13_tags_1[0]), /* 1 */
	asn_DEF_MeasResultWLAN_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultWLAN_r13_tags_1)
		/sizeof(asn_DEF_MeasResultWLAN_r13_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MeasResultWLAN_r13_1,
	10,	/* Elements count */
	&asn_SPC_MeasResultWLAN_r13_specs_1	/* Additional specs */
};

