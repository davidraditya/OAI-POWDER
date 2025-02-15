/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_RRCConnectionReestablishment_NB_r13_IEs_H_
#define	_RRCConnectionReestablishment_NB_r13_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RadioResourceConfigDedicated-NB-r13.h"
#include "NextHopChainingCount.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRCConnectionReestablishment_NB_v1430_IEs;

/* RRCConnectionReestablishment-NB-r13-IEs */
typedef struct RRCConnectionReestablishment_NB_r13_IEs {
	RadioResourceConfigDedicated_NB_r13_t	 radioResourceConfigDedicated_r13;
	NextHopChainingCount_t	 nextHopChainingCount_r13;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct RRCConnectionReestablishment_NB_v1430_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReestablishment_NB_r13_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReestablishment_NB_r13_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCConnectionReestablishment-NB-v1430-IEs.h"

#endif	/* _RRCConnectionReestablishment_NB_r13_IEs_H_ */
#include <asn_internal.h>
