/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_BandCombinationParameters_v1430_H_
#define	_BandCombinationParameters_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BandParameters_v1430;

/* BandCombinationParameters-v1430 */
typedef struct BandCombinationParameters_v1430 {
	struct BandCombinationParameters_v1430__bandParameterList_v1430 {
		A_SEQUENCE_OF(struct BandParameters_v1430) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *bandParameterList_v1430;
	BIT_STRING_t	*v2x_SupportedTxBandCombListPerBC_r14	/* OPTIONAL */;
	BIT_STRING_t	*v2x_SupportedRxBandCombListPerBC_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandCombinationParameters_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandCombinationParameters_v1430;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BandParameters-v1430.h"

#endif	/* _BandCombinationParameters_v1430_H_ */
#include <asn_internal.h>
