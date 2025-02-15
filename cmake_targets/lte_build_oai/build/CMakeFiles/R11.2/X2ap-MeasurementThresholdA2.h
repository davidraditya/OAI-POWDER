/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/opt/oai/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_MeasurementThresholdA2_H_
#define	_X2ap_MeasurementThresholdA2_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2ap-Threshold-RSRP.h"
#include "X2ap-Threshold-RSRQ.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2ap_MeasurementThresholdA2_PR {
	X2ap_MeasurementThresholdA2_PR_NOTHING,	/* No components present */
	X2ap_MeasurementThresholdA2_PR_threshold_RSRP,
	X2ap_MeasurementThresholdA2_PR_threshold_RSRQ,
	/* Extensions may appear below */
	
} X2ap_MeasurementThresholdA2_PR;

/* X2ap-MeasurementThresholdA2 */
typedef struct X2ap_MeasurementThresholdA2 {
	X2ap_MeasurementThresholdA2_PR present;
	union X2ap_MeasurementThresholdA2_u {
		X2ap_Threshold_RSRP_t	 threshold_RSRP;
		X2ap_Threshold_RSRQ_t	 threshold_RSRQ;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2ap_MeasurementThresholdA2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_MeasurementThresholdA2;

#ifdef __cplusplus
}
#endif

#endif	/* _X2ap_MeasurementThresholdA2_H_ */
#include <asn_internal.h>
