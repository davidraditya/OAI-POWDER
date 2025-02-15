/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-InterNodeDefinitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_UERadioAccessCapabilityInformation_NB_IEs_H_
#define	_UERadioAccessCapabilityInformation_NB_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UERadioAccessCapabilityInformation-NB-IEs */
typedef struct UERadioAccessCapabilityInformation_NB_IEs {
	OCTET_STRING_t	 ue_RadioAccessCapabilityInfo_r13;
	struct UERadioAccessCapabilityInformation_NB_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UERadioAccessCapabilityInformation_NB_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UERadioAccessCapabilityInformation_NB_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _UERadioAccessCapabilityInformation_NB_IEs_H_ */
#include <asn_internal.h>
