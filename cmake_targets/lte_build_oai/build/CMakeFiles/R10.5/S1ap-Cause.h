/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/opt/oai/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_Cause_H_
#define	_S1ap_Cause_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap-CauseRadioNetwork.h"
#include "S1ap-CauseTransport.h"
#include "S1ap-CauseNas.h"
#include "S1ap-CauseProtocol.h"
#include "S1ap-CauseMisc.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_Cause_PR {
	S1ap_Cause_PR_NOTHING,	/* No components present */
	S1ap_Cause_PR_radioNetwork,
	S1ap_Cause_PR_transport,
	S1ap_Cause_PR_nas,
	S1ap_Cause_PR_protocol,
	S1ap_Cause_PR_misc,
	/* Extensions may appear below */
	
} S1ap_Cause_PR;

/* S1ap-Cause */
typedef struct S1ap_Cause {
	S1ap_Cause_PR present;
	union S1ap_Cause_u {
		S1ap_CauseRadioNetwork_t	 radioNetwork;
		S1ap_CauseTransport_t	 transport;
		S1ap_CauseNas_t	 nas;
		S1ap_CauseProtocol_t	 protocol;
		S1ap_CauseMisc_t	 misc;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_Cause_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_Cause;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_Cause_H_ */
#include <asn_internal.h>
