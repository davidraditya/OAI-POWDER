/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_RLC_Config_v1310_H_
#define	_RLC_Config_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include "PollPDU-v1310.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RLC-Config-v1310 */
typedef struct RLC_Config_v1310 {
	BOOLEAN_t	 ul_extended_RLC_AM_SN_r13;
	BOOLEAN_t	 dl_extended_RLC_AM_SN_r13;
	PollPDU_v1310_t	*pollPDU_v1310	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_Config_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RLC_Config_v1310;

#ifdef __cplusplus
}
#endif

#endif	/* _RLC_Config_v1310_H_ */
#include <asn_internal.h>
