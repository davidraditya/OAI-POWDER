/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_DL_ConfigCommon_NB_r14_H_
#define	_DL_ConfigCommon_NB_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DL-CarrierConfigCommon-NB-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PCCH_Config_NB_r14;

/* DL-ConfigCommon-NB-r14 */
typedef struct DL_ConfigCommon_NB_r14 {
	DL_CarrierConfigCommon_NB_r14_t	 dl_CarrierConfig_r14;
	struct PCCH_Config_NB_r14	*pcch_Config_r14	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_ConfigCommon_NB_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_ConfigCommon_NB_r14;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PCCH-Config-NB-r14.h"

#endif	/* _DL_ConfigCommon_NB_r14_H_ */
#include <asn_internal.h>
