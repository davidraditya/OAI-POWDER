/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/opt/oai/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_MBMS_Service_Area_Identity_List_H_
#define	_X2ap_MBMS_Service_Area_Identity_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2ap-MBMS-Service-Area-Identity.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* X2ap-MBMS-Service-Area-Identity-List */
typedef struct X2ap_MBMS_Service_Area_Identity_List {
	A_SEQUENCE_OF(X2ap_MBMS_Service_Area_Identity_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2ap_MBMS_Service_Area_Identity_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_MBMS_Service_Area_Identity_List;

#ifdef __cplusplus
}
#endif

#endif	/* _X2ap_MBMS_Service_Area_Identity_List_H_ */
#include <asn_internal.h>
