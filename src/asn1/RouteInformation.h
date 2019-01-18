/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_RouteInformation_H_
#define	_RouteInformation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PublishedIdentifier.h"
#include "LatitudeLongitude.h"
#include "PlaceBearingPlaceBearing.h"
#include "PlaceBearingDistance.h"
#include "ATSRouteDesignator.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RouteInformation_PR {
	RouteInformation_PR_NOTHING,	/* No components present */
	RouteInformation_PR_publishedIdentifier,
	RouteInformation_PR_latitudeLongitude,
	RouteInformation_PR_placeBearingPlaceBearing,
	RouteInformation_PR_placeBearingDistance,
	RouteInformation_PR_aTSRouteDesignator
} RouteInformation_PR;

/* RouteInformation */
typedef struct RouteInformation {
	RouteInformation_PR present;
	union RouteInformation_u {
		PublishedIdentifier_t	 publishedIdentifier;
		LatitudeLongitude_t	 latitudeLongitude;
		PlaceBearingPlaceBearing_t	 placeBearingPlaceBearing;
		PlaceBearingDistance_t	 placeBearingDistance;
		ATSRouteDesignator_t	 aTSRouteDesignator;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RouteInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RouteInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _RouteInformation_H_ */
#include "asn_internal.h"