/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_FreqPriorityEUTRA_v1310_H_
#define	_FreqPriorityEUTRA_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellReselectionSubPriority-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FreqPriorityEUTRA-v1310 */
typedef struct FreqPriorityEUTRA_v1310 {
	CellReselectionSubPriority_r13_t	*cellReselectionSubPriority_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FreqPriorityEUTRA_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FreqPriorityEUTRA_v1310;

#ifdef __cplusplus
}
#endif

#endif	/* _FreqPriorityEUTRA_v1310_H_ */
#include <asn_internal.h>
