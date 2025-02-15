/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU"
 * 	found in "/opt/oai/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-PDU.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_IE_H_
#define	_X2ap_IE_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2ap-ProtocolIE-ID.h"
#include "X2ap-Criticality.h"
#include <ANY.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* X2ap-IE */
typedef struct X2ap_IE {
	X2ap_ProtocolIE_ID_t	 id;
	X2ap_Criticality_t	 criticality;
	ANY_t	 value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2ap_IE_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_IE;

#ifdef __cplusplus
}
#endif

#endif	/* _X2ap_IE_H_ */
#include <asn_internal.h>
