/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/opt/oai/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_Transmission_Bandwidth_H_
#define	_X2ap_Transmission_Bandwidth_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2ap_Transmission_Bandwidth {
	X2ap_Transmission_Bandwidth_bw6	= 0,
	X2ap_Transmission_Bandwidth_bw15	= 1,
	X2ap_Transmission_Bandwidth_bw25	= 2,
	X2ap_Transmission_Bandwidth_bw50	= 3,
	X2ap_Transmission_Bandwidth_bw75	= 4,
	X2ap_Transmission_Bandwidth_bw100	= 5
	/*
	 * Enumeration is extensible
	 */
} e_X2ap_Transmission_Bandwidth;

/* X2ap-Transmission-Bandwidth */
typedef long	 X2ap_Transmission_Bandwidth_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_Transmission_Bandwidth;
asn_struct_free_f X2ap_Transmission_Bandwidth_free;
asn_struct_print_f X2ap_Transmission_Bandwidth_print;
asn_constr_check_f X2ap_Transmission_Bandwidth_constraint;
ber_type_decoder_f X2ap_Transmission_Bandwidth_decode_ber;
der_type_encoder_f X2ap_Transmission_Bandwidth_encode_der;
xer_type_decoder_f X2ap_Transmission_Bandwidth_decode_xer;
xer_type_encoder_f X2ap_Transmission_Bandwidth_encode_xer;
per_type_decoder_f X2ap_Transmission_Bandwidth_decode_uper;
per_type_encoder_f X2ap_Transmission_Bandwidth_encode_uper;
per_type_decoder_f X2ap_Transmission_Bandwidth_decode_aper;
per_type_encoder_f X2ap_Transmission_Bandwidth_encode_aper;
type_compare_f     X2ap_Transmission_Bandwidth_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _X2ap_Transmission_Bandwidth_H_ */
#include <asn_internal.h>
