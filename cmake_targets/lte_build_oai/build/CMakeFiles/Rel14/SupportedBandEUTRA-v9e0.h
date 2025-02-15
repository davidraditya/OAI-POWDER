/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SupportedBandEUTRA_v9e0_H_
#define	_SupportedBandEUTRA_v9e0_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicator-v9e0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SupportedBandEUTRA-v9e0 */
typedef struct SupportedBandEUTRA_v9e0 {
	FreqBandIndicator_v9e0_t	*bandEUTRA_v9e0	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedBandEUTRA_v9e0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandEUTRA_v9e0;

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedBandEUTRA_v9e0_H_ */
#include <asn_internal.h>
