/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_Tx_ResourcePoolMeasList_r14_H_
#define	_Tx_ResourcePoolMeasList_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-V2X-TxPoolReportIdentity-r14.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Tx-ResourcePoolMeasList-r14 */
typedef struct Tx_ResourcePoolMeasList_r14 {
	A_SEQUENCE_OF(SL_V2X_TxPoolReportIdentity_r14_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Tx_ResourcePoolMeasList_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Tx_ResourcePoolMeasList_r14;

#ifdef __cplusplus
}
#endif

#endif	/* _Tx_ResourcePoolMeasList_r14_H_ */
#include <asn_internal.h>
