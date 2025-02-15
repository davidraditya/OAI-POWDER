/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/opt/oai/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_RelativeNarrowbandTxPower_H_
#define	_X2ap_RelativeNarrowbandTxPower_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include "X2ap-RNTP-Threshold.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2ap_RelativeNarrowbandTxPower__numberOfCellSpecificAntennaPortsTxPower {
	X2ap_RelativeNarrowbandTxPower__numberOfCellSpecificAntennaPortsTxPower_one	= 0,
	X2ap_RelativeNarrowbandTxPower__numberOfCellSpecificAntennaPortsTxPower_two	= 1,
	X2ap_RelativeNarrowbandTxPower__numberOfCellSpecificAntennaPortsTxPower_four	= 2
	/*
	 * Enumeration is extensible
	 */
} e_X2ap_RelativeNarrowbandTxPower__numberOfCellSpecificAntennaPortsTxPower;

/* Forward declarations */
struct X2ap_IE_Extensions;

/* X2ap-RelativeNarrowbandTxPower */
typedef struct X2ap_RelativeNarrowbandTxPower {
	BIT_STRING_t	 rNTP_PerPRB;
	X2ap_RNTP_Threshold_t	 rNTP_Threshold;
	long	 numberOfCellSpecificAntennaPortsTxPower;
	long	 p_B;
	long	 pDCCH_InterferenceImpact;
	struct X2ap_IE_Extensions	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2ap_RelativeNarrowbandTxPower_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_numberOfCellSpecificAntennaPortsTxPower_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_RelativeNarrowbandTxPower;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "X2ap-IE-Extensions.h"

#endif	/* _X2ap_RelativeNarrowbandTxPower_H_ */
#include <asn_internal.h>
