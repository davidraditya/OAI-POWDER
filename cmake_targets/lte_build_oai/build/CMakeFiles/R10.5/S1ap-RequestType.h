/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/opt/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_RequestType_H_
#define	_S1ap_RequestType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap-EventType.h"
#include "S1ap-ReportArea.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1ap_IE_Extensions;

/* S1ap-RequestType */
typedef struct S1ap_RequestType {
	S1ap_EventType_t	 eventType;
	S1ap_ReportArea_t	 reportArea;
	struct S1ap_IE_Extensions	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_RequestType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_RequestType;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "S1ap-IE-Extensions.h"

#endif	/* _S1ap_RequestType_H_ */
#include <asn_internal.h>
