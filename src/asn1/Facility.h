/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_Facility_H_
#define	_Facility_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "FacilityDesignation.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Facility_PR {
	Facility_PR_NOTHING,	/* No components present */
	Facility_PR_noFacility,
	Facility_PR_facilityDesignation
} Facility_PR;

/* Facility */
typedef struct Facility {
	Facility_PR present;
	union Facility_u {
		NULL_t	 noFacility;
		FacilityDesignation_t	 facilityDesignation;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Facility_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Facility;

#ifdef __cplusplus
}
#endif

#endif	/* _Facility_H_ */
#include "asn_internal.h"
