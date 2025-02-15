/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SupportedBand_NB_r13_H_
#define	_SupportedBand_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicator-NB-r13.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SupportedBand_NB_r13__powerClassNB_20dBm_r13 {
	SupportedBand_NB_r13__powerClassNB_20dBm_r13_supported	= 0
} e_SupportedBand_NB_r13__powerClassNB_20dBm_r13;

/* SupportedBand-NB-r13 */
typedef struct SupportedBand_NB_r13 {
	FreqBandIndicator_NB_r13_t	 band_r13;
	long	*powerClassNB_20dBm_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedBand_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_powerClassNB_20dBm_r13_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBand_NB_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedBand_NB_r13_H_ */
#include <asn_internal.h>
