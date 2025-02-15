/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/opt/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "S1ap-SecurityContext.h"

static int
memb_nextHopChainingCount_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_nextHopChainingCount_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_S1ap_SecurityContext_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_SecurityContext, nextHopChainingCount),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_nextHopChainingCount_constraint_1,
		&asn_PER_memb_nextHopChainingCount_constr_2,
		0,
		"nextHopChainingCount"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_SecurityContext, nextHopParameter),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_SecurityKey,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nextHopParameter"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_SecurityContext, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_IE_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static int asn_MAP_S1ap_SecurityContext_oms_1[] = { 2 };
static ber_tlv_tag_t asn_DEF_S1ap_SecurityContext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_S1ap_SecurityContext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nextHopChainingCount at 1051 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nextHopParameter at 1052 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions at 1054 */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1ap_SecurityContext_specs_1 = {
	sizeof(struct S1ap_SecurityContext),
	offsetof(struct S1ap_SecurityContext, _asn_ctx),
	asn_MAP_S1ap_SecurityContext_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_S1ap_SecurityContext_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_SecurityContext = {
	"S1ap-SecurityContext",
	"S1ap-SecurityContext",
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
	asn_DEF_S1ap_SecurityContext_tags_1,
	sizeof(asn_DEF_S1ap_SecurityContext_tags_1)
		/sizeof(asn_DEF_S1ap_SecurityContext_tags_1[0]), /* 1 */
	asn_DEF_S1ap_SecurityContext_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_SecurityContext_tags_1)
		/sizeof(asn_DEF_S1ap_SecurityContext_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_S1ap_SecurityContext_1,
	3,	/* Elements count */
	&asn_SPC_S1ap_SecurityContext_specs_1	/* Additional specs */
};

