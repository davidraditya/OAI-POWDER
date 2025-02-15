/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_PDSCH_ConfigDedicated_v1130_H_
#define	_PDSCH_ConfigDedicated_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDSCH_ConfigDedicated_v1130__qcl_Operation {
	PDSCH_ConfigDedicated_v1130__qcl_Operation_typeA	= 0,
	PDSCH_ConfigDedicated_v1130__qcl_Operation_typeB	= 1
} e_PDSCH_ConfigDedicated_v1130__qcl_Operation;

/* Forward declarations */
struct DMRS_Config_r11;
struct RE_MappingQCLConfigToReleaseList_r11;
struct RE_MappingQCLConfigToAddModList_r11;

/* PDSCH-ConfigDedicated-v1130 */
typedef struct PDSCH_ConfigDedicated_v1130 {
	struct DMRS_Config_r11	*dmrs_ConfigPDSCH_r11	/* OPTIONAL */;
	long	*qcl_Operation	/* OPTIONAL */;
	struct RE_MappingQCLConfigToReleaseList_r11	*re_MappingQCLConfigToReleaseList_r11	/* OPTIONAL */;
	struct RE_MappingQCLConfigToAddModList_r11	*re_MappingQCLConfigToAddModList_r11	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_ConfigDedicated_v1130_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_qcl_Operation_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_ConfigDedicated_v1130;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DMRS-Config-r11.h"
#include "RE-MappingQCLConfigToReleaseList-r11.h"
#include "RE-MappingQCLConfigToAddModList-r11.h"

#endif	/* _PDSCH_ConfigDedicated_v1130_H_ */
#include <asn_internal.h>
