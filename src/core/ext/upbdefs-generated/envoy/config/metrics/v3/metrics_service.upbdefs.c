/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/metrics/v3/metrics_service.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/reflection/def.h"
#include "envoy/config/metrics/v3/metrics_service.upbdefs.h"
#include "envoy/config/metrics/v3/metrics_service.upb.h"

extern _upb_DefPool_Init envoy_config_core_v3_config_source_proto_upbdefinit;
extern _upb_DefPool_Init envoy_config_core_v3_grpc_service_proto_upbdefinit;
extern _upb_DefPool_Init google_protobuf_wrappers_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_status_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_versioning_proto_upbdefinit;
extern _upb_DefPool_Init validate_validate_proto_upbdefinit;
static const char descriptor[821] = {'\n', '-', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'm', 'e', 't', 'r', 'i', 'c', 's', '/', 'v', '3', 
'/', 'm', 'e', 't', 'r', 'i', 'c', 's', '_', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 'p', 'r', 'o', 't', 'o', '\022', '\027', 'e', 
'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'm', 'e', 't', 'r', 'i', 'c', 's', '.', 'v', '3', '\032', '(', 'e', 
'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 'r', 'e', '/', 'v', '3', '/', 'c', 'o', 'n', 'f', 'i', 
'g', '_', 's', 'o', 'u', 'r', 'c', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', '\'', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 
'f', 'i', 'g', '/', 'c', 'o', 'r', 'e', '/', 'v', '3', '/', 'g', 'r', 'p', 'c', '_', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 
'p', 'r', 'o', 't', 'o', '\032', '\036', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 'w', 'r', 
'a', 'p', 'p', 'e', 'r', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 
't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '!', 'u', 'd', 'p', 'a', '/', 
'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', 'e', 'r', 's', 'i', 'o', 'n', 'i', 'n', 'g', '.', 'p', 'r', 
'o', 't', 'o', '\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '/', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 'r', 
'o', 't', 'o', '\"', '\201', '\003', '\n', '\024', 'M', 'e', 't', 'r', 'i', 'c', 's', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 'C', 'o', 'n', 
'f', 'i', 'g', '\022', 'N', '\n', '\014', 'g', 'r', 'p', 'c', '_', 's', 'e', 'r', 'v', 'i', 'c', 'e', '\030', '\001', ' ', '\001', '(', '\013', 
'2', '!', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'G', 
'r', 'p', 'c', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 'B', '\010', '\372', 'B', '\005', '\212', '\001', '\002', '\020', '\001', 'R', '\013', 'g', 'r', 'p', 
'c', 'S', 'e', 'r', 'v', 'i', 'c', 'e', '\022', '^', '\n', '\025', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', '_', 'a', 'p', 'i', 
'_', 'v', 'e', 'r', 's', 'i', 'o', 'n', '\030', '\003', ' ', '\001', '(', '\016', '2', ' ', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 
'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'A', 'p', 'i', 'V', 'e', 'r', 's', 'i', 'o', 'n', 'B', '\010', 
'\372', 'B', '\005', '\202', '\001', '\002', '\020', '\001', 'R', '\023', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', 'A', 'p', 'i', 'V', 'e', 'r', 
's', 'i', 'o', 'n', '\022', 'U', '\n', '\031', 'r', 'e', 'p', 'o', 'r', 't', '_', 'c', 'o', 'u', 'n', 't', 'e', 'r', 's', '_', 'a', 
's', '_', 'd', 'e', 'l', 't', 'a', 's', '\030', '\002', ' ', '\001', '(', '\013', '2', '\032', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 
'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'B', 'o', 'o', 'l', 'V', 'a', 'l', 'u', 'e', 'R', '\026', 'r', 'e', 'p', 'o', 'r', 't', 
'C', 'o', 'u', 'n', 't', 'e', 'r', 's', 'A', 's', 'D', 'e', 'l', 't', 'a', 's', '\022', '-', '\n', '\023', 'e', 'm', 'i', 't', '_', 
't', 'a', 'g', 's', '_', 'a', 's', '_', 'l', 'a', 'b', 'e', 'l', 's', '\030', '\004', ' ', '\001', '(', '\010', 'R', '\020', 'e', 'm', 'i', 
't', 'T', 'a', 'g', 's', 'A', 's', 'L', 'a', 'b', 'e', 'l', 's', ':', '3', '\232', '\305', '\210', '\036', '.', '\n', ',', 'e', 'n', 'v', 
'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'm', 'e', 't', 'r', 'i', 'c', 's', '.', 'v', '2', '.', 'M', 'e', 't', 'r', 
'i', 'c', 's', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 'C', 'o', 'n', 'f', 'i', 'g', 'B', '\220', '\001', '\n', '%', 'i', 'o', '.', 'e', 
'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'm', 'e', 
't', 'r', 'i', 'c', 's', '.', 'v', '3', 'B', '\023', 'M', 'e', 't', 'r', 'i', 'c', 's', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 'P', 
'r', 'o', 't', 'o', 'P', '\001', 'Z', 'H', 'g', 'i', 't', 'h', 'u', 'b', '.', 'c', 'o', 'm', '/', 'e', 'n', 'v', 'o', 'y', 'p', 
'r', 'o', 'x', 'y', '/', 'g', 'o', '-', 'c', 'o', 'n', 't', 'r', 'o', 'l', '-', 'p', 'l', 'a', 'n', 'e', '/', 'e', 'n', 'v', 
'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'm', 'e', 't', 'r', 'i', 'c', 's', '/', 'v', '3', ';', 'm', 'e', 't', 'r', 
'i', 'c', 's', 'v', '3', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\002', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static _upb_DefPool_Init *deps[7] = {
  &envoy_config_core_v3_config_source_proto_upbdefinit,
  &envoy_config_core_v3_grpc_service_proto_upbdefinit,
  &google_protobuf_wrappers_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_annotations_versioning_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

_upb_DefPool_Init envoy_config_metrics_v3_metrics_service_proto_upbdefinit = {
  deps,
  &envoy_config_metrics_v3_metrics_service_proto_upb_file_layout,
  "envoy/config/metrics/v3/metrics_service.proto",
  UPB_STRINGVIEW_INIT(descriptor, 821)
};
