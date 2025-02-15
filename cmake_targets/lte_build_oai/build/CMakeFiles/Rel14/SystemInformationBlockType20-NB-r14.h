/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SystemInformationBlockType20_NB_r14_H_
#define	_SystemInformationBlockType20_NB_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NPDCCH-SC-MCCH-Config-NB-r14.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <OCTET_STRING.h>
#include "DL-CarrierConfigCommon-NB-r14.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType20_NB_r14__sc_mcch_CarrierConfig_r14_PR {
	SystemInformationBlockType20_NB_r14__sc_mcch_CarrierConfig_r14_PR_NOTHING,	/* No components present */
	SystemInformationBlockType20_NB_r14__sc_mcch_CarrierConfig_r14_PR_dl_CarrierConfig_r14,
	SystemInformationBlockType20_NB_r14__sc_mcch_CarrierConfig_r14_PR_dl_CarrierIndex_r14
} SystemInformationBlockType20_NB_r14__sc_mcch_CarrierConfig_r14_PR;
typedef enum SystemInformationBlockType20_NB_r14__sc_mcch_RepetitionPeriod_r14 {
	SystemInformationBlockType20_NB_r14__sc_mcch_RepetitionPeriod_r14_rf32	= 0,
	SystemInformationBlockType20_NB_r14__sc_mcch_RepetitionPeriod_r14_rf128	= 1,
	SystemInformationBlockType20_NB_r14__sc_mcch_RepetitionPeriod_r14_rf512	= 2,
	SystemInformationBlockType20_NB_r14__sc_mcch_RepetitionPeriod_r14_rf1024	= 3,
	SystemInformationBlockType20_NB_r14__sc_mcch_RepetitionPeriod_r14_rf2048	= 4,
	SystemInformationBlockType20_NB_r14__sc_mcch_RepetitionPeriod_r14_rf4096	= 5,
	SystemInformationBlockType20_NB_r14__sc_mcch_RepetitionPeriod_r14_rf8192	= 6,
	SystemInformationBlockType20_NB_r14__sc_mcch_RepetitionPeriod_r14_rf16384	= 7
} e_SystemInformationBlockType20_NB_r14__sc_mcch_RepetitionPeriod_r14;
typedef enum SystemInformationBlockType20_NB_r14__sc_mcch_ModificationPeriod_r14 {
	SystemInformationBlockType20_NB_r14__sc_mcch_ModificationPeriod_r14_rf32	= 0,
	SystemInformationBlockType20_NB_r14__sc_mcch_ModificationPeriod_r14_rf128	= 1,
	SystemInformationBlockType20_NB_r14__sc_mcch_ModificationPeriod_r14_rf256	= 2,
	SystemInformationBlockType20_NB_r14__sc_mcch_ModificationPeriod_r14_rf512	= 3,
	SystemInformationBlockType20_NB_r14__sc_mcch_ModificationPeriod_r14_rf1024	= 4,
	SystemInformationBlockType20_NB_r14__sc_mcch_ModificationPeriod_r14_rf2048	= 5,
	SystemInformationBlockType20_NB_r14__sc_mcch_ModificationPeriod_r14_rf4096	= 6,
	SystemInformationBlockType20_NB_r14__sc_mcch_ModificationPeriod_r14_rf8192	= 7,
	SystemInformationBlockType20_NB_r14__sc_mcch_ModificationPeriod_r14_rf16384	= 8,
	SystemInformationBlockType20_NB_r14__sc_mcch_ModificationPeriod_r14_rf32768	= 9,
	SystemInformationBlockType20_NB_r14__sc_mcch_ModificationPeriod_r14_rf65536	= 10,
	SystemInformationBlockType20_NB_r14__sc_mcch_ModificationPeriod_r14_rf131072	= 11,
	SystemInformationBlockType20_NB_r14__sc_mcch_ModificationPeriod_r14_rf262144	= 12,
	SystemInformationBlockType20_NB_r14__sc_mcch_ModificationPeriod_r14_rf524288	= 13,
	SystemInformationBlockType20_NB_r14__sc_mcch_ModificationPeriod_r14_rf1048576	= 14,
	SystemInformationBlockType20_NB_r14__sc_mcch_ModificationPeriod_r14_spare1	= 15
} e_SystemInformationBlockType20_NB_r14__sc_mcch_ModificationPeriod_r14;

/* Forward declarations */
struct SC_MCCH_SchedulingInfo_NB_r14;

/* SystemInformationBlockType20-NB-r14 */
typedef struct SystemInformationBlockType20_NB_r14 {
	NPDCCH_SC_MCCH_Config_NB_r14_t	 npdcch_SC_MCCH_Config_r14;
	struct SystemInformationBlockType20_NB_r14__sc_mcch_CarrierConfig_r14 {
		SystemInformationBlockType20_NB_r14__sc_mcch_CarrierConfig_r14_PR present;
		union SystemInformationBlockType20_NB_r14__sc_mcch_CarrierConfig_r14_u {
			DL_CarrierConfigCommon_NB_r14_t	 dl_CarrierConfig_r14;
			long	 dl_CarrierIndex_r14;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} sc_mcch_CarrierConfig_r14;
	long	 sc_mcch_RepetitionPeriod_r14;
	long	 sc_mcch_Offset_r14;
	long	 sc_mcch_ModificationPeriod_r14;
	struct SC_MCCH_SchedulingInfo_NB_r14	*sc_mcch_SchedulingInfo_r14	/* OPTIONAL */;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType20_NB_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sc_mcch_RepetitionPeriod_r14_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sc_mcch_ModificationPeriod_r14_16;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType20_NB_r14;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SC-MCCH-SchedulingInfo-NB-r14.h"

#endif	/* _SystemInformationBlockType20_NB_r14_H_ */
#include <asn_internal.h>
