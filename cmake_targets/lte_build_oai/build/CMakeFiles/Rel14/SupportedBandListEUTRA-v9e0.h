/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SupportedBandListEUTRA_v9e0_H_
#define	_SupportedBandListEUTRA_v9e0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SupportedBandEUTRA_v9e0;

/* SupportedBandListEUTRA-v9e0 */
typedef struct SupportedBandListEUTRA_v9e0 {
	A_SEQUENCE_OF(struct SupportedBandEUTRA_v9e0) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedBandListEUTRA_v9e0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandListEUTRA_v9e0;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SupportedBandEUTRA-v9e0.h"

#endif	/* _SupportedBandListEUTRA_v9e0_H_ */
#include <asn_internal.h>
