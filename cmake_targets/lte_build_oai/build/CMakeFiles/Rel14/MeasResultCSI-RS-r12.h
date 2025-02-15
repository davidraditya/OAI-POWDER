/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_MeasResultCSI_RS_r12_H_
#define	_MeasResultCSI_RS_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasCSI-RS-Id-r12.h"
#include "CSI-RSRP-Range-r12.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultCSI-RS-r12 */
typedef struct MeasResultCSI_RS_r12 {
	MeasCSI_RS_Id_r12_t	 measCSI_RS_Id_r12;
	CSI_RSRP_Range_r12_t	 csi_RSRP_Result_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultCSI_RS_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultCSI_RS_r12;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultCSI_RS_r12_H_ */
#include <asn_internal.h>
