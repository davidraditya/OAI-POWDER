/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_RRCConnectionResume_NB_r13_IEs_H_
#define	_RRCConnectionResume_NB_r13_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NextHopChainingCount.h"
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionResume_NB_r13_IEs__drb_ContinueROHC_r13 {
	RRCConnectionResume_NB_r13_IEs__drb_ContinueROHC_r13_true	= 0
} e_RRCConnectionResume_NB_r13_IEs__drb_ContinueROHC_r13;

/* Forward declarations */
struct RadioResourceConfigDedicated_NB_r13;

/* RRCConnectionResume-NB-r13-IEs */
typedef struct RRCConnectionResume_NB_r13_IEs {
	struct RadioResourceConfigDedicated_NB_r13	*radioResourceConfigDedicated_r13	/* OPTIONAL */;
	NextHopChainingCount_t	 nextHopChainingCount_r13;
	long	*drb_ContinueROHC_r13	/* OPTIONAL */;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct RRCConnectionResume_NB_r13_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionResume_NB_r13_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_drb_ContinueROHC_r13_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionResume_NB_r13_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RadioResourceConfigDedicated-NB-r13.h"

#endif	/* _RRCConnectionResume_NB_r13_IEs_H_ */
#include <asn_internal.h>
