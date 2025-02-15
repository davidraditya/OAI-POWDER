/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SchedulingRequestConfigSCell_r13_H_
#define	_SchedulingRequestConfigSCell_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SchedulingRequestConfigSCell_r13_PR {
	SchedulingRequestConfigSCell_r13_PR_NOTHING,	/* No components present */
	SchedulingRequestConfigSCell_r13_PR_release,
	SchedulingRequestConfigSCell_r13_PR_setup
} SchedulingRequestConfigSCell_r13_PR;
typedef enum SchedulingRequestConfigSCell_r13__setup__dsr_TransMax_r13 {
	SchedulingRequestConfigSCell_r13__setup__dsr_TransMax_r13_n4	= 0,
	SchedulingRequestConfigSCell_r13__setup__dsr_TransMax_r13_n8	= 1,
	SchedulingRequestConfigSCell_r13__setup__dsr_TransMax_r13_n16	= 2,
	SchedulingRequestConfigSCell_r13__setup__dsr_TransMax_r13_n32	= 3,
	SchedulingRequestConfigSCell_r13__setup__dsr_TransMax_r13_n64	= 4,
	SchedulingRequestConfigSCell_r13__setup__dsr_TransMax_r13_spare3	= 5,
	SchedulingRequestConfigSCell_r13__setup__dsr_TransMax_r13_spare2	= 6,
	SchedulingRequestConfigSCell_r13__setup__dsr_TransMax_r13_spare1	= 7
} e_SchedulingRequestConfigSCell_r13__setup__dsr_TransMax_r13;

/* SchedulingRequestConfigSCell-r13 */
typedef struct SchedulingRequestConfigSCell_r13 {
	SchedulingRequestConfigSCell_r13_PR present;
	union SchedulingRequestConfigSCell_r13_u {
		NULL_t	 release;
		struct SchedulingRequestConfigSCell_r13__setup {
			long	 sr_PUCCH_ResourceIndex_r13;
			long	*sr_PUCCH_ResourceIndexP1_r13	/* OPTIONAL */;
			long	 sr_ConfigIndex_r13;
			long	 dsr_TransMax_r13;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SchedulingRequestConfigSCell_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dsr_TransMax_r13_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SchedulingRequestConfigSCell_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _SchedulingRequestConfigSCell_r13_H_ */
#include <asn_internal.h>
