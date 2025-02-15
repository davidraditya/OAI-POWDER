/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_PhysicalConfigDedicated_NB_r13_H_
#define	_PhysicalConfigDedicated_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhysicalConfigDedicated_NB_r13__ext1__twoHARQ_ProcessesConfig_r14 {
	PhysicalConfigDedicated_NB_r13__ext1__twoHARQ_ProcessesConfig_r14_true	= 0
} e_PhysicalConfigDedicated_NB_r13__ext1__twoHARQ_ProcessesConfig_r14;

/* Forward declarations */
struct CarrierConfigDedicated_NB_r13;
struct NPDCCH_ConfigDedicated_NB_r13;
struct NPUSCH_ConfigDedicated_NB_r13;
struct UplinkPowerControlDedicated_NB_r13;

/* PhysicalConfigDedicated-NB-r13 */
typedef struct PhysicalConfigDedicated_NB_r13 {
	struct CarrierConfigDedicated_NB_r13	*carrierConfigDedicated_r13	/* OPTIONAL */;
	struct NPDCCH_ConfigDedicated_NB_r13	*npdcch_ConfigDedicated_r13	/* OPTIONAL */;
	struct NPUSCH_ConfigDedicated_NB_r13	*npusch_ConfigDedicated_r13	/* OPTIONAL */;
	struct UplinkPowerControlDedicated_NB_r13	*uplinkPowerControlDedicated_r13	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct PhysicalConfigDedicated_NB_r13__ext1 {
		long	*twoHARQ_ProcessesConfig_r14	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalConfigDedicated_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_twoHARQ_ProcessesConfig_r14_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalConfigDedicated_NB_r13;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CarrierConfigDedicated-NB-r13.h"
#include "NPDCCH-ConfigDedicated-NB-r13.h"
#include "NPUSCH-ConfigDedicated-NB-r13.h"
#include "UplinkPowerControlDedicated-NB-r13.h"

#endif	/* _PhysicalConfigDedicated_NB_r13_H_ */
#include <asn_internal.h>
