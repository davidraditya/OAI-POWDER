/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_EPDCCH_SetConfigToReleaseList_r11_H_
#define	_EPDCCH_SetConfigToReleaseList_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EPDCCH-SetConfigId-r11.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EPDCCH-SetConfigToReleaseList-r11 */
typedef struct EPDCCH_SetConfigToReleaseList_r11 {
	A_SEQUENCE_OF(EPDCCH_SetConfigId_r11_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EPDCCH_SetConfigToReleaseList_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EPDCCH_SetConfigToReleaseList_r11;

#ifdef __cplusplus
}
#endif

#endif	/* _EPDCCH_SetConfigToReleaseList_r11_H_ */
#include <asn_internal.h>
