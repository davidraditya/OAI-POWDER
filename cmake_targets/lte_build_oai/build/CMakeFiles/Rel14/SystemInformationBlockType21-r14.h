/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SystemInformationBlockType21_r14_H_
#define	_SystemInformationBlockType21_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_V2X_ConfigCommon_r14;

/* SystemInformationBlockType21-r14 */
typedef struct SystemInformationBlockType21_r14 {
	struct SL_V2X_ConfigCommon_r14	*sl_V2X_ConfigCommon_r14	/* OPTIONAL */;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType21_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType21_r14;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SL-V2X-ConfigCommon-r14.h"

#endif	/* _SystemInformationBlockType21_r14_H_ */
#include <asn_internal.h>
