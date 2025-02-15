/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_PRACH_Config_v1430_H_
#define	_PRACH_Config_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PRACH-Config-v1430 */
typedef struct PRACH_Config_v1430 {
	long	 rootSequenceIndexHighSpeed_r14;
	long	 zeroCorrelationZoneConfigHighSpeed_r14;
	long	 prach_ConfigIndexHighSpeed_r14;
	long	 prach_FreqOffsetHighSpeed_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PRACH_Config_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PRACH_Config_v1430;

#ifdef __cplusplus
}
#endif

#endif	/* _PRACH_Config_v1430_H_ */
#include <asn_internal.h>
