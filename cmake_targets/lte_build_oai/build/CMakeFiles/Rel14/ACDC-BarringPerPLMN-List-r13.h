/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_ACDC_BarringPerPLMN_List_r13_H_
#define	_ACDC_BarringPerPLMN_List_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ACDC_BarringPerPLMN_r13;

/* ACDC-BarringPerPLMN-List-r13 */
typedef struct ACDC_BarringPerPLMN_List_r13 {
	A_SEQUENCE_OF(struct ACDC_BarringPerPLMN_r13) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ACDC_BarringPerPLMN_List_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ACDC_BarringPerPLMN_List_r13;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ACDC-BarringPerPLMN-r13.h"

#endif	/* _ACDC_BarringPerPLMN_List_r13_H_ */
#include <asn_internal.h>
