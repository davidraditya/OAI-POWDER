/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/opt/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "S1ap-E-RABToBeSetupItemHOReq.h"

static asn_TYPE_member_t asn_MBR_S1ap_E_RABToBeSetupItemHOReq_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_E_RABToBeSetupItemHOReq, e_RAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_E_RAB_ID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-RAB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_E_RABToBeSetupItemHOReq, transportLayerAddress),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_TransportLayerAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"transportLayerAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_E_RABToBeSetupItemHOReq, gTP_TEID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_GTP_TEID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gTP-TEID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_E_RABToBeSetupItemHOReq, e_RABlevelQosParameters),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_E_RABLevelQoSParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-RABlevelQosParameters"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_E_RABToBeSetupItemHOReq, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_IE_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static int asn_MAP_S1ap_E_RABToBeSetupItemHOReq_oms_1[] = { 4 };
static ber_tlv_tag_t asn_DEF_S1ap_E_RABToBeSetupItemHOReq_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_S1ap_E_RABToBeSetupItemHOReq_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-RAB-ID at 483 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* transportLayerAddress at 484 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gTP-TEID at 485 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* e-RABlevelQosParameters at 486 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions at 488 */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1ap_E_RABToBeSetupItemHOReq_specs_1 = {
	sizeof(struct S1ap_E_RABToBeSetupItemHOReq),
	offsetof(struct S1ap_E_RABToBeSetupItemHOReq, _asn_ctx),
	asn_MAP_S1ap_E_RABToBeSetupItemHOReq_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_S1ap_E_RABToBeSetupItemHOReq_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABToBeSetupItemHOReq = {
	"S1ap-E-RABToBeSetupItemHOReq",
	"S1ap-E-RABToBeSetupItemHOReq",
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
	asn_DEF_S1ap_E_RABToBeSetupItemHOReq_tags_1,
	sizeof(asn_DEF_S1ap_E_RABToBeSetupItemHOReq_tags_1)
		/sizeof(asn_DEF_S1ap_E_RABToBeSetupItemHOReq_tags_1[0]), /* 1 */
	asn_DEF_S1ap_E_RABToBeSetupItemHOReq_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_E_RABToBeSetupItemHOReq_tags_1)
		/sizeof(asn_DEF_S1ap_E_RABToBeSetupItemHOReq_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_S1ap_E_RABToBeSetupItemHOReq_1,
	5,	/* Elements count */
	&asn_SPC_S1ap_E_RABToBeSetupItemHOReq_specs_1	/* Additional specs */
};

