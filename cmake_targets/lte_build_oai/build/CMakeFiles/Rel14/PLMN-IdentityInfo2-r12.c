/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "PLMN-IdentityInfo2-r12.h"

static int
memb_plmn_Index_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 6)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_plmn_Index_r12_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_PLMN_IdentityInfo2_r12_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_PLMN_IdentityInfo2_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_IdentityInfo2_r12, choice.plmn_Index_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_plmn_Index_r12_constraint_1,
		&asn_PER_memb_plmn_Index_r12_constr_2,
		0,
		"plmn-Index-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_IdentityInfo2_r12, choice.plmnIdentity_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"plmnIdentity-r12"
		},
};
static asn_TYPE_tag2member_t asn_MAP_PLMN_IdentityInfo2_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-Index-r12 at 3489 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* plmnIdentity-r12 at 3491 */
};
static asn_CHOICE_specifics_t asn_SPC_PLMN_IdentityInfo2_r12_specs_1 = {
	sizeof(struct PLMN_IdentityInfo2_r12),
	offsetof(struct PLMN_IdentityInfo2_r12, _asn_ctx),
	offsetof(struct PLMN_IdentityInfo2_r12, present),
	sizeof(((struct PLMN_IdentityInfo2_r12 *)0)->present),
	asn_MAP_PLMN_IdentityInfo2_r12_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_PLMN_IdentityInfo2_r12 = {
	"PLMN-IdentityInfo2-r12",
	"PLMN-IdentityInfo2-r12",
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
	&asn_PER_type_PLMN_IdentityInfo2_r12_constr_1,
	asn_MBR_PLMN_IdentityInfo2_r12_1,
	2,	/* Elements count */
	&asn_SPC_PLMN_IdentityInfo2_r12_specs_1	/* Additional specs */
};

