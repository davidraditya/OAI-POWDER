/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_MBMSInterestIndication_r11_IEs_H_
#define	_MBMSInterestIndication_r11_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBMSInterestIndication_r11_IEs__mbms_Priority_r11 {
	MBMSInterestIndication_r11_IEs__mbms_Priority_r11_true	= 0
} e_MBMSInterestIndication_r11_IEs__mbms_Priority_r11;

/* Forward declarations */
struct CarrierFreqListMBMS_r11;
struct MBMSInterestIndication_v1310_IEs;

/* MBMSInterestIndication-r11-IEs */
typedef struct MBMSInterestIndication_r11_IEs {
	struct CarrierFreqListMBMS_r11	*mbms_FreqList_r11	/* OPTIONAL */;
	long	*mbms_Priority_r11	/* OPTIONAL */;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct MBMSInterestIndication_v1310_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMSInterestIndication_r11_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_mbms_Priority_r11_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MBMSInterestIndication_r11_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CarrierFreqListMBMS-r11.h"
#include "MBMSInterestIndication-v1310-IEs.h"

#endif	/* _MBMSInterestIndication_r11_IEs_H_ */
#include <asn_internal.h>
