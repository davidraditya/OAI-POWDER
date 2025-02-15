/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_MeasParameters_v1430_H_
#define	_MeasParameters_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasParameters_v1430__ceMeasurements_r14 {
	MeasParameters_v1430__ceMeasurements_r14_supported	= 0
} e_MeasParameters_v1430__ceMeasurements_r14;
typedef enum MeasParameters_v1430__ncsg_r14 {
	MeasParameters_v1430__ncsg_r14_supported	= 0
} e_MeasParameters_v1430__ncsg_r14;
typedef enum MeasParameters_v1430__shortMeasurementGap_r14 {
	MeasParameters_v1430__shortMeasurementGap_r14_supported	= 0
} e_MeasParameters_v1430__shortMeasurementGap_r14;
typedef enum MeasParameters_v1430__perServingCellMeasurementGap_r14 {
	MeasParameters_v1430__perServingCellMeasurementGap_r14_supported	= 0
} e_MeasParameters_v1430__perServingCellMeasurementGap_r14;
typedef enum MeasParameters_v1430__nonUniformGap_r14 {
	MeasParameters_v1430__nonUniformGap_r14_supported	= 0
} e_MeasParameters_v1430__nonUniformGap_r14;

/* MeasParameters-v1430 */
typedef struct MeasParameters_v1430 {
	long	*ceMeasurements_r14	/* OPTIONAL */;
	long	*ncsg_r14	/* OPTIONAL */;
	long	*shortMeasurementGap_r14	/* OPTIONAL */;
	long	*perServingCellMeasurementGap_r14	/* OPTIONAL */;
	long	*nonUniformGap_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasParameters_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ceMeasurements_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ncsg_r14_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_shortMeasurementGap_r14_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_perServingCellMeasurementGap_r14_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nonUniformGap_r14_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasParameters_v1430;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasParameters_v1430_H_ */
#include <asn_internal.h>
