/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_UE_EUTRA_CapabilityAddXDD_Mode_v1310_H_
#define	_UE_EUTRA_CapabilityAddXDD_Mode_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhyLayerParameters_v1310;

/* UE-EUTRA-CapabilityAddXDD-Mode-v1310 */
typedef struct UE_EUTRA_CapabilityAddXDD_Mode_v1310 {
	struct PhyLayerParameters_v1310	*phyLayerParameters_v1310	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_CapabilityAddXDD_Mode_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1310;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PhyLayerParameters-v1310.h"

#endif	/* _UE_EUTRA_CapabilityAddXDD_Mode_v1310_H_ */
#include <asn_internal.h>
