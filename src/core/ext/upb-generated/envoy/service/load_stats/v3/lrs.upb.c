/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/service/load_stats/v3/lrs.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/collections/array_internal.h"
#include "upb/message/internal.h"
#include "upb/mini_table/enum_internal.h"
#include "envoy/service/load_stats/v3/lrs.upb.h"
#include "envoy/config/core/v3/base.upb.h"
#include "envoy/config/endpoint/v3/load_report.upb.h"
#include "google/protobuf/duration.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"

// Must be last.
#include "upb/port/def.inc"

static const upb_MiniTableSub envoy_service_load_stats_v3_LoadStatsRequest_submsgs[2] = {
  {.submsg = &envoy_config_core_v3_Node_msg_init},
  {.submsg = &envoy_config_endpoint_v3_ClusterStats_msg_init},
};

static const upb_MiniTableField envoy_service_load_stats_v3_LoadStatsRequest__fields[2] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), 0, 1, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_service_load_stats_v3_LoadStatsRequest_msg_init = {
  &envoy_service_load_stats_v3_LoadStatsRequest_submsgs[0],
  &envoy_service_load_stats_v3_LoadStatsRequest__fields[0],
  UPB_SIZE(16, 24), 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800000100000a, &upb_psm_1bt_maxmaxb},
    {0x001000003f010012, &upb_prm_1bt_maxmaxb},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableSub envoy_service_load_stats_v3_LoadStatsResponse_submsgs[1] = {
  {.submsg = &google_protobuf_Duration_msg_init},
};

static const upb_MiniTableField envoy_service_load_stats_v3_LoadStatsResponse__fields[4] = {
  {1, UPB_SIZE(4, 8), 0, kUpb_NoSub, 9, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), 1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 1), 0, kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(13, 2), 0, kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_service_load_stats_v3_LoadStatsResponse_msg_init = {
  &envoy_service_load_stats_v3_LoadStatsResponse_submsgs[0],
  &envoy_service_load_stats_v3_LoadStatsResponse__fields[0],
  UPB_SIZE(16, 24), 4, kUpb_ExtMode_NonExtendable, 4, UPB_FASTTABLE_MASK(56), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800003f00000a, &upb_prs_1bt},
    {0x0010000001000012, &upb_psm_1bt_maxmaxb},
    {0x000100003f000018, &upb_psb1_1bt},
    {0x000200003f000020, &upb_psb1_1bt},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTable *messages_layout[2] = {
  &envoy_service_load_stats_v3_LoadStatsRequest_msg_init,
  &envoy_service_load_stats_v3_LoadStatsResponse_msg_init,
};

const upb_MiniTableFile envoy_service_load_stats_v3_lrs_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  2,
  0,
  0,
};

#include "upb/port/undef.inc"

