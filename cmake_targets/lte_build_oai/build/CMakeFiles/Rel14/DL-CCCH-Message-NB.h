/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_DL_CCCH_Message_NB_H_
#define	_DL_CCCH_Message_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DL-CCCH-MessageType-NB.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-CCCH-Message-NB */
typedef struct DL_CCCH_Message_NB {
	DL_CCCH_MessageType_NB_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_CCCH_Message_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_CCCH_Message_NB;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_CCCH_Message_NB_H_ */
#include <asn_internal.h>
