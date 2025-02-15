/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/opt/oai/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_ABSInformation_H_
#define	_X2ap_ABSInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2ap-ABSInformationFDD.h"
#include "X2ap-ABSInformationTDD.h"
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2ap_ABSInformation_PR {
	X2ap_ABSInformation_PR_NOTHING,	/* No components present */
	X2ap_ABSInformation_PR_fdd,
	X2ap_ABSInformation_PR_tdd,
	X2ap_ABSInformation_PR_abs_inactive,
	/* Extensions may appear below */
	
} X2ap_ABSInformation_PR;

/* X2ap-ABSInformation */
typedef struct X2ap_ABSInformation {
	X2ap_ABSInformation_PR present;
	union X2ap_ABSInformation_u {
		X2ap_ABSInformationFDD_t	 fdd;
		X2ap_ABSInformationTDD_t	 tdd;
		NULL_t	 abs_inactive;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2ap_ABSInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_ABSInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _X2ap_ABSInformation_H_ */
#include <asn_internal.h>
