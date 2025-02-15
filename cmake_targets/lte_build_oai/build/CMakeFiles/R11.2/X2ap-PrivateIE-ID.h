/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-CommonDataTypes"
 * 	found in "/opt/oai/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-CommonDataTypes.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_PrivateIE_ID_H_
#define	_X2ap_PrivateIE_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <OBJECT_IDENTIFIER.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2ap_PrivateIE_ID_PR {
	X2ap_PrivateIE_ID_PR_NOTHING,	/* No components present */
	X2ap_PrivateIE_ID_PR_local,
	X2ap_PrivateIE_ID_PR_global
} X2ap_PrivateIE_ID_PR;

/* X2ap-PrivateIE-ID */
typedef struct X2ap_PrivateIE_ID {
	X2ap_PrivateIE_ID_PR present;
	union X2ap_PrivateIE_ID_u {
		long	 local;
		OBJECT_IDENTIFIER_t	 global;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2ap_PrivateIE_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_PrivateIE_ID;

#ifdef __cplusplus
}
#endif

#endif	/* _X2ap_PrivateIE_ID_H_ */
#include <asn_internal.h>
