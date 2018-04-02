/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_RouteClearance_H_
#define	_RouteClearance_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AirportDeparture.h"
#include "AirportDestination.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Runway;
struct ProcedureName;
struct RouteInformationAdditional;
struct RouteInformation;

/* RouteClearance */
typedef struct RouteClearance {
	AirportDeparture_t	*airportDeparture	/* OPTIONAL */;
	AirportDestination_t	*airportDestination	/* OPTIONAL */;
	struct Runway	*runwayDeparture	/* OPTIONAL */;
	struct ProcedureName	*procedureDeparture	/* OPTIONAL */;
	struct Runway	*runwayArrival	/* OPTIONAL */;
	struct ProcedureName	*procedureApproach	/* OPTIONAL */;
	struct ProcedureName	*procedureArrival	/* OPTIONAL */;
	struct RouteClearance__routeInformations {
		A_SEQUENCE_OF(struct RouteInformation) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *routeInformations;
	struct RouteInformationAdditional	*routeInformationAdditional	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RouteClearance_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RouteClearance;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Runway.h"
#include "ProcedureName.h"
#include "RouteInformationAdditional.h"
#include "RouteInformation.h"

#endif	/* _RouteClearance_H_ */
#include <asn_internal.h>
