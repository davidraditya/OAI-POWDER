/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "RRCConnectionSetupComplete-NB.h"

static asn_per_constraints_t asn_PER_type_criticalExtensions_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static ber_tlv_tag_t asn_DEF_criticalExtensionsFuture_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_criticalExtensionsFuture_specs_5 = {
	sizeof(struct RRCConnectionSetupComplete_NB__criticalExtensions__criticalExtensionsFuture),
	offsetof(struct RRCConnectionSetupComplete_NB__criticalExtensions__criticalExtensionsFuture, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_criticalExtensionsFuture_5 = {
	"criticalExtensionsFuture",
	"criticalExtensionsFuture",
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
	asn_DEF_criticalExtensionsFuture_tags_5,
	sizeof(asn_DEF_criticalExtensionsFuture_tags_5)
		/sizeof(asn_DEF_criticalExtensionsFuture_tags_5[0]) - 1, /* 1 */
	asn_DEF_criticalExtensionsFuture_tags_5,	/* Same as above */
	sizeof(asn_DEF_criticalExtensionsFuture_tags_5)
		/sizeof(asn_DEF_criticalExtensionsFuture_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_criticalExtensionsFuture_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_criticalExtensions_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetupComplete_NB__criticalExtensions, choice.rrcConnectionSetupComplete_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionSetupComplete_NB_r13_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrcConnectionSetupComplete-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetupComplete_NB__criticalExtensions, choice.criticalExtensionsFuture),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_criticalExtensionsFuture_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"criticalExtensionsFuture"
		},
};
static asn_TYPE_tag2member_t asn_MAP_criticalExtensions_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcConnectionSetupComplete-r13 at 11593 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* criticalExtensionsFuture at 11594 */
};
static asn_CHOICE_specifics_t asn_SPC_criticalExtensions_specs_3 = {
	sizeof(struct RRCConnectionSetupComplete_NB__criticalExtensions),
	offsetof(struct RRCConnectionSetupComplete_NB__criticalExtensions, _asn_ctx),
	offsetof(struct RRCConnectionSetupComplete_NB__criticalExtensions, present),
	sizeof(((struct RRCConnectionSetupComplete_NB__criticalExtensions *)0)->present),
	asn_MAP_criticalExtensions_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_criticalExtensions_3 = {
	"criticalExtensions",
	"criticalExtensions",
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
	&asn_PER_type_criticalExtensions_constr_3,
	asn_MBR_criticalExtensions_3,
	2,	/* Elements count */
	&asn_SPC_criticalExtensions_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRCConnectionSetupComplete_NB_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetupComplete_NB, rrc_TransactionIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TransactionIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrc-TransactionIdentifier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetupComplete_NB, criticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_criticalExtensions_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"criticalExtensions"
		},
};
static ber_tlv_tag_t asn_DEF_RRCConnectionSetupComplete_NB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RRCConnectionSetupComplete_NB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrc-TransactionIdentifier at 11591 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* criticalExtensions at 11593 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionSetupComplete_NB_specs_1 = {
	sizeof(struct RRCConnectionSetupComplete_NB),
	offsetof(struct RRCConnectionSetupComplete_NB, _asn_ctx),
	asn_MAP_RRCConnectionSetupComplete_NB_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetupComplete_NB = {
	"RRCConnectionSetupComplete-NB",
	"RRCConnectionSetupComplete-NB",
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
	asn_DEF_RRCConnectionSetupComplete_NB_tags_1,
	sizeof(asn_DEF_RRCConnectionSetupComplete_NB_tags_1)
		/sizeof(asn_DEF_RRCConnectionSetupComplete_NB_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionSetupComplete_NB_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionSetupComplete_NB_tags_1)
		/sizeof(asn_DEF_RRCConnectionSetupComplete_NB_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RRCConnectionSetupComplete_NB_1,
	2,	/* Elements count */
	&asn_SPC_RRCConnectionSetupComplete_NB_specs_1	/* Additional specs */
};

