/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ACSE-1"
 * 	found in "atn-ulcs.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_Association_information_H_
#define	_Association_information_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "EXTERNALt.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Association-information */
typedef struct Association_information {
	NULL_t	*spare	/* OPTIONAL */;
	EXTERNALt_t	 data;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Association_information_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Association_information;

#ifdef __cplusplus
}
#endif

#endif	/* _Association_information_H_ */
#include "asn_internal.h"
