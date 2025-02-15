/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "MeasObjectEUTRA.h"

static int
setup_23_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
setup_23_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
setup_23_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	setup_23_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
setup_23_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	setup_23_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
setup_23_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	setup_23_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
setup_23_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	setup_23_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
setup_23_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	setup_23_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
setup_23_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	setup_23_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
setup_23_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	setup_23_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
setup_23_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	setup_23_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
setup_23_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	setup_23_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
setup_23_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	setup_23_inherit_TYPE_descriptor(td1);
	setup_23_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
setup_23_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	setup_23_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_setup_constr_23 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_t312_r12_constr_21 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
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
static asn_TYPE_member_t asn_MBR_ext1_13[] = {
	{ ATF_POINTER, 2, offsetof(struct MeasObjectEUTRA__ext1, measCycleSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasCycleSCell_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measCycleSCell-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasObjectEUTRA__ext1, measSubframePatternConfigNeigh_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MeasSubframePatternConfigNeigh_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measSubframePatternConfigNeigh-r10"
		},
};
static int asn_MAP_ext1_oms_13[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_ext1_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measCycleSCell-r10 at 7435 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measSubframePatternConfigNeigh-r10 at 7436 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_13 = {
	sizeof(struct MeasObjectEUTRA__ext1),
	offsetof(struct MeasObjectEUTRA__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_13,
	2,	/* Count of tags in the map */
	asn_MAP_ext1_oms_13,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_13 = {
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
	asn_DEF_ext1_tags_13,
	sizeof(asn_DEF_ext1_tags_13)
		/sizeof(asn_DEF_ext1_tags_13[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_13,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_13)
		/sizeof(asn_DEF_ext1_tags_13[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext1_13,
	2,	/* Elements count */
	&asn_SPC_ext1_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_16[] = {
	{ ATF_POINTER, 1, offsetof(struct MeasObjectEUTRA__ext2, widebandRSRQ_Meas_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"widebandRSRQ-Meas-r11"
		},
};
static int asn_MAP_ext2_oms_16[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext2_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* widebandRSRQ-Meas-r11 at 7438 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_16 = {
	sizeof(struct MeasObjectEUTRA__ext2),
	offsetof(struct MeasObjectEUTRA__ext2, _asn_ctx),
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

static asn_INTEGER_enum_map_t asn_MAP_setup_value2enum_23[] = {
	{ 0,	3,	"ms0" },
	{ 1,	4,	"ms50" },
	{ 2,	5,	"ms100" },
	{ 3,	5,	"ms200" },
	{ 4,	5,	"ms300" },
	{ 5,	5,	"ms400" },
	{ 6,	5,	"ms500" },
	{ 7,	6,	"ms1000" }
};
static unsigned int asn_MAP_setup_enum2value_23[] = {
	0,	/* ms0(0) */
	2,	/* ms100(2) */
	7,	/* ms1000(7) */
	3,	/* ms200(3) */
	4,	/* ms300(4) */
	5,	/* ms400(5) */
	1,	/* ms50(1) */
	6	/* ms500(6) */
};
static asn_INTEGER_specifics_t asn_SPC_setup_specs_23 = {
	asn_MAP_setup_value2enum_23,	/* "tag" => N; sorted by tag */
	asn_MAP_setup_enum2value_23,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_setup_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_23 = {
	"setup",
	"setup",
	setup_23_free,
	setup_23_print,
	setup_23_constraint,
	setup_23_decode_ber,
	setup_23_encode_der,
	setup_23_decode_xer,
	setup_23_encode_xer,
	setup_23_decode_uper,
	setup_23_encode_uper,
	setup_23_decode_aper,
	setup_23_encode_aper,
	setup_23_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_setup_tags_23,
	sizeof(asn_DEF_setup_tags_23)
		/sizeof(asn_DEF_setup_tags_23[0]) - 1, /* 1 */
	asn_DEF_setup_tags_23,	/* Same as above */
	sizeof(asn_DEF_setup_tags_23)
		/sizeof(asn_DEF_setup_tags_23[0]), /* 2 */
	&asn_PER_type_setup_constr_23,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_setup_specs_23	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_t312_r12_21[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA__ext3__t312_r12, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA__ext3__t312_r12, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_setup_23,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static asn_TYPE_tag2member_t asn_MAP_t312_r12_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release at 7443 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup at 7444 */
};
static asn_CHOICE_specifics_t asn_SPC_t312_r12_specs_21 = {
	sizeof(struct MeasObjectEUTRA__ext3__t312_r12),
	offsetof(struct MeasObjectEUTRA__ext3__t312_r12, _asn_ctx),
	offsetof(struct MeasObjectEUTRA__ext3__t312_r12, present),
	sizeof(((struct MeasObjectEUTRA__ext3__t312_r12 *)0)->present),
	asn_MAP_t312_r12_tag2el_21,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t312_r12_21 = {
	"t312-r12",
	"t312-r12",
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
	&asn_PER_type_t312_r12_constr_21,
	asn_MBR_t312_r12_21,
	2,	/* Elements count */
	&asn_SPC_t312_r12_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_18[] = {
	{ ATF_POINTER, 5, offsetof(struct MeasObjectEUTRA__ext3, altTTT_CellsToRemoveList_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndexList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"altTTT-CellsToRemoveList-r12"
		},
	{ ATF_POINTER, 4, offsetof(struct MeasObjectEUTRA__ext3, altTTT_CellsToAddModList_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AltTTT_CellsToAddModList_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"altTTT-CellsToAddModList-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasObjectEUTRA__ext3, t312_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_t312_r12_21,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t312-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasObjectEUTRA__ext3, reducedMeasPerformance_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reducedMeasPerformance-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasObjectEUTRA__ext3, measDS_Config_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MeasDS_Config_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measDS-Config-r12"
		},
};
static int asn_MAP_ext3_oms_18[] = { 0, 1, 2, 3, 4 };
static ber_tlv_tag_t asn_DEF_ext3_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* altTTT-CellsToRemoveList-r12 at 7440 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* altTTT-CellsToAddModList-r12 at 7441 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* t312-r12 at 7443 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* reducedMeasPerformance-r12 at 7447 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* measDS-Config-r12 at 7448 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_18 = {
	sizeof(struct MeasObjectEUTRA__ext3),
	offsetof(struct MeasObjectEUTRA__ext3, _asn_ctx),
	asn_MAP_ext3_tag2el_18,
	5,	/* Count of tags in the map */
	asn_MAP_ext3_oms_18,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext3_18 = {
	"ext3",
	"ext3",
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
	asn_DEF_ext3_tags_18,
	sizeof(asn_DEF_ext3_tags_18)
		/sizeof(asn_DEF_ext3_tags_18[0]) - 1, /* 1 */
	asn_DEF_ext3_tags_18,	/* Same as above */
	sizeof(asn_DEF_ext3_tags_18)
		/sizeof(asn_DEF_ext3_tags_18[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext3_18,
	5,	/* Elements count */
	&asn_SPC_ext3_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext4_34[] = {
	{ ATF_POINTER, 4, offsetof(struct MeasObjectEUTRA__ext4, whiteCellsToRemoveList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndexList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"whiteCellsToRemoveList-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasObjectEUTRA__ext4, whiteCellsToAddModList_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WhiteCellsToAddModList_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"whiteCellsToAddModList-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasObjectEUTRA__ext4, rmtc_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RMTC_Config_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rmtc-Config-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasObjectEUTRA__ext4, carrierFreq_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_v9e0,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierFreq-r13"
		},
};
static int asn_MAP_ext4_oms_34[] = { 0, 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_ext4_tags_34[] = {
	(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext4_tag2el_34[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* whiteCellsToRemoveList-r13 at 7451 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* whiteCellsToAddModList-r13 at 7452 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rmtc-Config-r13 at 7453 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* carrierFreq-r13 at 7454 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext4_specs_34 = {
	sizeof(struct MeasObjectEUTRA__ext4),
	offsetof(struct MeasObjectEUTRA__ext4, _asn_ctx),
	asn_MAP_ext4_tag2el_34,
	4,	/* Count of tags in the map */
	asn_MAP_ext4_oms_34,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext4_34 = {
	"ext4",
	"ext4",
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
	asn_DEF_ext4_tags_34,
	sizeof(asn_DEF_ext4_tags_34)
		/sizeof(asn_DEF_ext4_tags_34[0]) - 1, /* 1 */
	asn_DEF_ext4_tags_34,	/* Same as above */
	sizeof(asn_DEF_ext4_tags_34)
		/sizeof(asn_DEF_ext4_tags_34[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext4_34,
	4,	/* Elements count */
	&asn_SPC_ext4_specs_34	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext5_39[] = {
	{ ATF_POINTER, 3, offsetof(struct MeasObjectEUTRA__ext5, tx_ResourcePoolToRemoveList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Tx_ResourcePoolMeasList_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tx-ResourcePoolToRemoveList-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasObjectEUTRA__ext5, tx_ResourcePoolToAddList_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Tx_ResourcePoolMeasList_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tx-ResourcePoolToAddList-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasObjectEUTRA__ext5, fembms_MixedCarrier_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fembms-MixedCarrier-r14"
		},
};
static int asn_MAP_ext5_oms_39[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_ext5_tags_39[] = {
	(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext5_tag2el_39[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tx-ResourcePoolToRemoveList-r14 at 7457 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tx-ResourcePoolToAddList-r14 at 7458 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* fembms-MixedCarrier-r14 at 7459 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext5_specs_39 = {
	sizeof(struct MeasObjectEUTRA__ext5),
	offsetof(struct MeasObjectEUTRA__ext5, _asn_ctx),
	asn_MAP_ext5_tag2el_39,
	3,	/* Count of tags in the map */
	asn_MAP_ext5_oms_39,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext5_39 = {
	"ext5",
	"ext5",
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
	asn_DEF_ext5_tags_39,
	sizeof(asn_DEF_ext5_tags_39)
		/sizeof(asn_DEF_ext5_tags_39[0]) - 1, /* 1 */
	asn_DEF_ext5_tags_39,	/* Same as above */
	sizeof(asn_DEF_ext5_tags_39)
		/sizeof(asn_DEF_ext5_tags_39[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext5_39,
	3,	/* Elements count */
	&asn_SPC_ext5_specs_39	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MeasObjectEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA, carrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierFreq"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA, allowedMeasBandwidth),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AllowedMeasBandwidth,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"allowedMeasBandwidth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA, presenceAntennaPort1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PresenceAntennaPort1,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"presenceAntennaPort1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA, neighCellConfig),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NeighCellConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"neighCellConfig"
		},
	{ ATF_POINTER, 11, offsetof(struct MeasObjectEUTRA, offsetFreq),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_OffsetRange,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_6_set_15,	/* DEFAULT 15 */
		"offsetFreq"
		},
	{ ATF_POINTER, 10, offsetof(struct MeasObjectEUTRA, cellsToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndexList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellsToRemoveList"
		},
	{ ATF_POINTER, 9, offsetof(struct MeasObjectEUTRA, cellsToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellsToAddModList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellsToAddModList"
		},
	{ ATF_POINTER, 8, offsetof(struct MeasObjectEUTRA, blackCellsToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndexList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"blackCellsToRemoveList"
		},
	{ ATF_POINTER, 7, offsetof(struct MeasObjectEUTRA, blackCellsToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BlackCellsToAddModList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"blackCellsToAddModList"
		},
	{ ATF_POINTER, 6, offsetof(struct MeasObjectEUTRA, cellForWhichToReportCGI),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellForWhichToReportCGI"
		},
	{ ATF_POINTER, 5, offsetof(struct MeasObjectEUTRA, ext1),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_ext1_13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext1"
		},
	{ ATF_POINTER, 4, offsetof(struct MeasObjectEUTRA, ext2),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		0,
		&asn_DEF_ext2_16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext2"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasObjectEUTRA, ext3),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		0,
		&asn_DEF_ext3_18,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext3"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasObjectEUTRA, ext4),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		0,
		&asn_DEF_ext4_34,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext4"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasObjectEUTRA, ext5),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		0,
		&asn_DEF_ext5_39,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext5"
		},
};
static int asn_MAP_MeasObjectEUTRA_oms_1[] = { 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
static ber_tlv_tag_t asn_DEF_MeasObjectEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MeasObjectEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq at 7422 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* allowedMeasBandwidth at 7423 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* presenceAntennaPort1 at 7424 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* neighCellConfig at 7425 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* offsetFreq at 7426 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* cellsToRemoveList at 7428 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* cellsToAddModList at 7429 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* blackCellsToRemoveList at 7431 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* blackCellsToAddModList at 7432 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* cellForWhichToReportCGI at 7433 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* ext1 at 7435 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ext2 at 7438 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* ext3 at 7440 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* ext4 at 7451 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 } /* ext5 at 7457 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MeasObjectEUTRA_specs_1 = {
	sizeof(struct MeasObjectEUTRA),
	offsetof(struct MeasObjectEUTRA, _asn_ctx),
	asn_MAP_MeasObjectEUTRA_tag2el_1,
	15,	/* Count of tags in the map */
	asn_MAP_MeasObjectEUTRA_oms_1,	/* Optional members */
	6, 5,	/* Root/Additions */
	9,	/* Start extensions */
	16	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MeasObjectEUTRA = {
	"MeasObjectEUTRA",
	"MeasObjectEUTRA",
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
	asn_DEF_MeasObjectEUTRA_tags_1,
	sizeof(asn_DEF_MeasObjectEUTRA_tags_1)
		/sizeof(asn_DEF_MeasObjectEUTRA_tags_1[0]), /* 1 */
	asn_DEF_MeasObjectEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasObjectEUTRA_tags_1)
		/sizeof(asn_DEF_MeasObjectEUTRA_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MeasObjectEUTRA_1,
	15,	/* Elements count */
	&asn_SPC_MeasObjectEUTRA_specs_1	/* Additional specs */
};

