/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/opt/oai/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "X2ap-TraceActivation.h"

static asn_TYPE_member_t asn_MBR_X2ap_TraceActivation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_TraceActivation, eUTRANTraceID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_EUTRANTraceID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eUTRANTraceID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_TraceActivation, interfacesToTrace),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_InterfacesToTrace,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"interfacesToTrace"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_TraceActivation, traceDepth),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_TraceDepth,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"traceDepth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_TraceActivation, traceCollectionEntityIPAddress),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_TraceCollectionEntityIPAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"traceCollectionEntityIPAddress"
		},
	{ ATF_POINTER, 1, offsetof(struct X2ap_TraceActivation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_IE_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static int asn_MAP_X2ap_TraceActivation_oms_1[] = { 4 };
static ber_tlv_tag_t asn_DEF_X2ap_TraceActivation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_X2ap_TraceActivation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eUTRANTraceID at 1282 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* interfacesToTrace at 1283 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* traceDepth at 1284 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* traceCollectionEntityIPAddress at 1285 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions at 1287 */
};
static asn_SEQUENCE_specifics_t asn_SPC_X2ap_TraceActivation_specs_1 = {
	sizeof(struct X2ap_TraceActivation),
	offsetof(struct X2ap_TraceActivation, _asn_ctx),
	asn_MAP_X2ap_TraceActivation_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_X2ap_TraceActivation_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_X2ap_TraceActivation = {
	"X2ap-TraceActivation",
	"X2ap-TraceActivation",
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
	asn_DEF_X2ap_TraceActivation_tags_1,
	sizeof(asn_DEF_X2ap_TraceActivation_tags_1)
		/sizeof(asn_DEF_X2ap_TraceActivation_tags_1[0]), /* 1 */
	asn_DEF_X2ap_TraceActivation_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2ap_TraceActivation_tags_1)
		/sizeof(asn_DEF_X2ap_TraceActivation_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_X2ap_TraceActivation_1,
	5,	/* Elements count */
	&asn_SPC_X2ap_TraceActivation_specs_1	/* Additional specs */
};

