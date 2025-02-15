/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/opt/oai/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_CriticalityDiagnostics_IE_List_H_
#define	_X2ap_CriticalityDiagnostics_IE_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "X2ap-Criticality.h"
#include "X2ap-ProtocolIE-ID.h"
#include "X2ap-TypeOfError.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2ap_IE_Extensions;

struct X2ap_CriticalityDiagnostics_IE_List__Member {
		X2ap_Criticality_t	 iECriticality;
		X2ap_ProtocolIE_ID_t	 iE_ID;
		X2ap_TypeOfError_t	 typeOfError;
		struct X2ap_IE_Extensions	*iE_Extensions	/* OPTIONAL */;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	};

/* X2ap-CriticalityDiagnostics-IE-List */
typedef struct X2ap_CriticalityDiagnostics_IE_List {
	A_SEQUENCE_OF(struct X2ap_CriticalityDiagnostics_IE_List__Member
	) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2ap_CriticalityDiagnostics_IE_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_CriticalityDiagnostics_IE_List;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "X2ap-IE-Extensions.h"

#endif	/* _X2ap_CriticalityDiagnostics_IE_List_H_ */
#include <asn_internal.h>
