/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SL_PSSCH_TxConfig_r14_H_
#define	_SL_PSSCH_TxConfig_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-TypeTxSync-r14.h"
#include <NativeEnumerated.h>
#include "SL-PSSCH-TxParameters-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_PSSCH_TxConfig_r14__thresUE_Speed_r14 {
	SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph60	= 0,
	SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph80	= 1,
	SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph100	= 2,
	SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph120	= 3,
	SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph140	= 4,
	SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph160	= 5,
	SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph180	= 6,
	SL_PSSCH_TxConfig_r14__thresUE_Speed_r14_kmph200	= 7
} e_SL_PSSCH_TxConfig_r14__thresUE_Speed_r14;

/* SL-PSSCH-TxConfig-r14 */
typedef struct SL_PSSCH_TxConfig_r14 {
	SL_TypeTxSync_r14_t	*typeTxSync_r14	/* OPTIONAL */;
	long	 thresUE_Speed_r14;
	SL_PSSCH_TxParameters_r14_t	 parametersAboveThres_r14;
	SL_PSSCH_TxParameters_r14_t	 parametersBelowThres_r14;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_PSSCH_TxConfig_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_thresUE_Speed_r14_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_PSSCH_TxConfig_r14;

#ifdef __cplusplus
}
#endif

#endif	/* _SL_PSSCH_TxConfig_r14_H_ */
#include <asn_internal.h>
