/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_InterFreqBlackCellList_NB_r13_H_
#define	_InterFreqBlackCellList_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellId.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* InterFreqBlackCellList-NB-r13 */
typedef struct InterFreqBlackCellList_NB_r13 {
	A_SEQUENCE_OF(PhysCellId_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqBlackCellList_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqBlackCellList_NB_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqBlackCellList_NB_r13_H_ */
#include <asn_internal.h>
