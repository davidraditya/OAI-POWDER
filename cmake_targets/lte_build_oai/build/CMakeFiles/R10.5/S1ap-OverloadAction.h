/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/opt/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_OverloadAction_H_
#define	_S1ap_OverloadAction_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_OverloadAction {
	S1ap_OverloadAction_reject_non_emergency_mo_dt	= 0,
	S1ap_OverloadAction_reject_rrc_cr_signalling	= 1,
	S1ap_OverloadAction_permit_emergency_sessions_and_mobile_terminated_services_only	= 2,
	/*
	 * Enumeration is extensible
	 */
	S1ap_OverloadAction_permit_high_priority_sessions_and_mobile_terminated_services_only	= 3,
	S1ap_OverloadAction_reject_delay_tolerant_access	= 4
} e_S1ap_OverloadAction;

/* S1ap-OverloadAction */
typedef long	 S1ap_OverloadAction_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_OverloadAction;
asn_struct_free_f S1ap_OverloadAction_free;
asn_struct_print_f S1ap_OverloadAction_print;
asn_constr_check_f S1ap_OverloadAction_constraint;
ber_type_decoder_f S1ap_OverloadAction_decode_ber;
der_type_encoder_f S1ap_OverloadAction_encode_der;
xer_type_decoder_f S1ap_OverloadAction_decode_xer;
xer_type_encoder_f S1ap_OverloadAction_encode_xer;
per_type_decoder_f S1ap_OverloadAction_decode_uper;
per_type_encoder_f S1ap_OverloadAction_encode_uper;
per_type_decoder_f S1ap_OverloadAction_decode_aper;
per_type_encoder_f S1ap_OverloadAction_encode_aper;
type_compare_f     S1ap_OverloadAction_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_OverloadAction_H_ */
#include <asn_internal.h>
