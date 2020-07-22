///////////////////////////////////////
// AUTO GENERATED FILE - DO NOT EDIT //
///////////////////////////////////////

/* SPDX-License-Identifier: BSD-2-Clause-Patent
 *
 * SPDX-FileCopyrightText: 2016-2020 the prplMesh contributors (see AUTHORS.md)
 *
 * This code is subject to the terms of the BSD+Patent license.
 * See LICENSE file for more details.
 */

#ifndef _BEEROCKS_TLVF_BEEROCKS_MESSAGE_ACTION_H_
#define _BEEROCKS_TLVF_BEEROCKS_MESSAGE_ACTION_H_

#include <cstddef>
#include <stdint.h>
#include <tlvf/swap.h>

namespace beerocks_message {

enum eAction: uint8_t {
    ACTION_NONE = 0x0,
    ACTION_1905_VS = 0x1,
    ACTION_CONTROL = 0xa,
    ACTION_BACKHAUL = 0xb,
    ACTION_PLATFORM = 0xc,
    ACTION_APMANAGER = 0x14,
    ACTION_MONITOR = 0x1e,
    ACTION_DHCP = 0x28,
    ACTION_CLI = 0x32,
    ACTION_BML = 0x3c,
};

enum eActionOp_1905_VS: uint8_t {
    ACTION_TLV_VENDOR_SPECIFIC = 0xb,
};

enum eActionOp_CONTROL: uint8_t {
    ACTION_CONTROL_NONE = 0x0,
    ACTION_CONTROL_SLAVE_HANDSHAKE_REQUEST = 0x1,
    ACTION_CONTROL_SLAVE_HANDSHAKE_RESPONSE = 0x2,
    ACTION_CONTROL_SLAVE_JOINED_NOTIFICATION = 0x3,
    ACTION_CONTROL_SLAVE_JOINED_RESPONSE = 0x4,
    ACTION_CONTROL_SON_CONFIG_UPDATE = 0x5,
    ACTION_CONTROL_CONTROLLER_PING_REQUEST = 0x6,
    ACTION_CONTROL_CONTROLLER_PING_RESPONSE = 0x7,
    ACTION_CONTROL_AGENT_PING_REQUEST = 0x8,
    ACTION_CONTROL_AGENT_PING_RESPONSE = 0x9,
    ACTION_CONTROL_CHANGE_MODULE_LOGGING_LEVEL = 0xb,
    ACTION_CONTROL_ARP_QUERY_REQUEST = 0xc,
    ACTION_CONTROL_ARP_QUERY_RESPONSE = 0xd,
    ACTION_CONTROL_PLATFORM_OPERATIONAL_NOTIFICATION = 0xe,
    ACTION_CONTROL_BACKHAUL_ROAM_REQUEST = 0x1e,
    ACTION_CONTROL_BACKHAUL_DL_RSSI_REPORT_NOTIFICATION = 0x1f,
    ACTION_CONTROL_BACKHAUL_RESET = 0x20,
    ACTION_CONTROL_HOSTAP_CSA_ERROR_NOTIFICATION = 0x36,
    ACTION_CONTROL_HOSTAP_CSA_NOTIFICATION = 0x37,
    ACTION_CONTROL_HOSTAP_ACS_ERROR_NOTIFICATION = 0x38,
    ACTION_CONTROL_HOSTAP_ACS_NOTIFICATION = 0x39,
    ACTION_CONTROL_HOSTAP_DFS_CAC_COMPLETED_NOTIFICATION = 0x3a,
    ACTION_CONTROL_HOSTAP_DFS_CHANNEL_AVAILABLE_NOTIFICATION = 0x3b,
    ACTION_CONTROL_HOSTAP_STATS_MEASUREMENT_REQUEST = 0x3c,
    ACTION_CONTROL_HOSTAP_STATS_MEASUREMENT_RESPONSE = 0x3d,
    ACTION_CONTROL_HOSTAP_LOAD_MEASUREMENT_NOTIFICATION = 0x3e,
    ACTION_CONTROL_HOSTAP_SET_NEIGHBOR_11K_REQUEST = 0x3f,
    ACTION_CONTROL_HOSTAP_REMOVE_NEIGHBOR_11K_REQUEST = 0x40,
    ACTION_CONTROL_HOSTAP_SET_RESTRICTED_FAILSAFE_CHANNEL_REQUEST = 0x41,
    ACTION_CONTROL_HOSTAP_SET_RESTRICTED_FAILSAFE_CHANNEL_RESPONSE = 0x42,
    ACTION_CONTROL_HOSTAP_CHANNEL_SWITCH_ACS_START = 0x43,
    ACTION_CONTROL_HOSTAP_UPDATE_STOP_ON_FAILURE_ATTEMPTS_REQUEST = 0x44,
    ACTION_CONTROL_HOSTAP_DISABLED_BY_MASTER = 0x45,
    ACTION_CONTROL_HOSTAP_ACTIVITY_NOTIFICATION = 0x46,
    ACTION_CONTROL_HOSTAP_VAPS_LIST_UPDATE_NOTIFICATION = 0x47,
    ACTION_CONTROL_HOSTAP_AP_DISABLED_NOTIFICATION = 0x48,
    ACTION_CONTROL_HOSTAP_AP_ENABLED_NOTIFICATION = 0x49,
    ACTION_CONTROL_CLIENT_START_MONITORING_REQUEST = 0x64,
    ACTION_CONTROL_CLIENT_START_MONITORING_RESPONSE = 0x65,
    ACTION_CONTROL_CLIENT_RX_RSSI_MEASUREMENT_REQUEST = 0x67,
    ACTION_CONTROL_CLIENT_RX_RSSI_MEASUREMENT_RESPONSE = 0x68,
    ACTION_CONTROL_CLIENT_RX_RSSI_MEASUREMENT_START_NOTIFICATION = 0x69,
    ACTION_CONTROL_CLIENT_RX_RSSI_MEASUREMENT_NOTIFICATION = 0x6a,
    ACTION_CONTROL_CLIENT_NO_RESPONSE_NOTIFICATION = 0x6b,
    ACTION_CONTROL_CLIENT_NEW_IP_ADDRESS_NOTIFICATION = 0x6c,
    ACTION_CONTROL_CLIENT_DISCONNECT_REQUEST = 0x6f,
    ACTION_CONTROL_CLIENT_DISCONNECT_RESPONSE = 0x70,
    ACTION_CONTROL_CLIENT_DHCP_COMPLETE_NOTIFICATION = 0x73,
    ACTION_CONTROL_CLIENT_ARP_MONITOR_NOTIFICATION = 0x74,
    ACTION_CONTROL_CLIENT_BEACON_11K_REQUEST = 0x75,
    ACTION_CONTROL_CLIENT_BEACON_11K_RESPONSE = 0x76,
    ACTION_CONTROL_CLIENT_STATISTICS_11K_REQUEST = 0x79,
    ACTION_CONTROL_CLIENT_STATISTICS_11K_RESPONSE = 0x7a,
    ACTION_CONTROL_CLIENT_RX_RSSI_MEASUREMENT_CMD_RESPONSE = 0x7d,
    ACTION_CONTROL_CLIENT_NO_ACTIVITY_NOTIFICATION = 0x7e,
    ACTION_CONTROL_STEERING_CLIENT_SET_GROUP_REQUEST = 0x7f,
    ACTION_CONTROL_STEERING_CLIENT_SET_GROUP_RESPONSE = 0x80,
    ACTION_CONTROL_STEERING_CLIENT_SET_REQUEST = 0x81,
    ACTION_CONTROL_STEERING_CLIENT_SET_RESPONSE = 0x82,
    ACTION_CONTROL_STEERING_EVENT_CLIENT_ACTIVITY_NOTIFICATION = 0x83,
    ACTION_CONTROL_STEERING_EVENT_SNR_XING_NOTIFICATION = 0x84,
    ACTION_CONTROL_STEERING_EVENT_PROBE_REQ_NOTIFICATION = 0x85,
    ACTION_CONTROL_STEERING_EVENT_AUTH_FAIL_NOTIFICATION = 0x86,
    ACTION_CONTROL_CHANNEL_SCAN_TRIGGER_SCAN_REQUEST = 0x8c,
    ACTION_CONTROL_CHANNEL_SCAN_TRIGGER_SCAN_RESPONSE = 0x8d,
    ACTION_CONTROL_CHANNEL_SCAN_DUMP_RESULTS_REQUEST = 0x8e,
    ACTION_CONTROL_CHANNEL_SCAN_DUMP_RESULTS_RESPONSE = 0x8f,
    ACTION_CONTROL_CHANNEL_SCAN_TRIGGERED_NOTIFICATION = 0x90,
    ACTION_CONTROL_CHANNEL_SCAN_RESULTS_NOTIFICATION = 0x91,
    ACTION_CONTROL_CHANNEL_SCAN_ABORT_NOTIFICATION = 0x92,
    ACTION_CONTROL_CHANNEL_SCAN_FINISHED_NOTIFICATION = 0x93,
    ACTION_CONTROL_ENUM_END = 0x94,
};

enum eActionOp_BACKHAUL: uint8_t {
    ACTION_BACKHAUL_REGISTER_REQUEST = 0x0,
    ACTION_BACKHAUL_REGISTER_RESPONSE = 0x1,
    ACTION_BACKHAUL_ENABLE = 0x2,
    ACTION_BACKHAUL_CONNECTED_NOTIFICATION = 0x3,
    ACTION_BACKHAUL_DISCONNECTED_NOTIFICATION = 0x4,
    ACTION_BACKHAUL_ROAM_REQUEST = 0x5,
    ACTION_BACKHAUL_ROAM_RESPONSE = 0x6,
    ACTION_BACKHAUL_4ADDR_CONNECTED = 0x7,
    ACTION_BACKHAUL_DL_RSSI_REPORT_NOTIFICATION = 0x8,
    ACTION_BACKHAUL_UPDATE_STOP_ON_FAILURE_ATTEMPTS_REQUEST = 0x9,
    ACTION_BACKHAUL_RESET = 0xa,
    ACTION_BACKHAUL_BUSY_NOTIFICATION = 0xb,
    ACTION_BACKHAUL_ENABLE_APS_REQUEST = 0xc,
    ACTION_BACKHAUL_HOSTAP_VAPS_LIST_UPDATE_NOTIFICATION = 0xe,
    ACTION_BACKHAUL_CLIENT_ASSOCIATED_NOTIFICATION = 0xf,
    ACTION_BACKHAUL_CLIENT_DISCONNECTED_NOTIFICATION = 0x10,
    ACTION_BACKHAUL_START_WPS_PBC_REQUEST = 0x11,
    ACTION_BACKHAUL_CLIENT_RX_RSSI_MEASUREMENT_REQUEST = 0x28,
    ACTION_BACKHAUL_CLIENT_RX_RSSI_MEASUREMENT_RESPONSE = 0x29,
    ACTION_BACKHAUL_CLIENT_RX_RSSI_MEASUREMENT_CMD_RESPONSE = 0x2a,
    ACTION_BACKHAUL_ASSOCIATED_STA_LINK_METRICS_REQUEST = 0x2b,
    ACTION_BACKHAUL_ASSOCIATED_STA_LINK_METRICS_RESPONSE = 0x2c,
    ACTION_BACKHAUL_ENUM_END = 0x2d,
};

enum eActionOp_PLATFORM: uint8_t {
    ACTION_PLATFORM_SON_SLAVE_REGISTER_REQUEST = 0x0,
    ACTION_PLATFORM_SON_SLAVE_REGISTER_RESPONSE = 0x1,
    ACTION_PLATFORM_SETTINGS_REQUEST = 0x2,
    ACTION_PLATFORM_SETTINGS_RESPONSE = 0x3,
    ACTION_PLATFORM_ARP_MONITOR_NOTIFICATION = 0x4,
    ACTION_PLATFORM_DHCP_MONITOR_NOTIFICATION = 0x5,
    ACTION_PLATFORM_CHANGE_MODULE_LOGGING_LEVEL = 0x6,
    ACTION_PLATFORM_ARP_QUERY_REQUEST = 0x8,
    ACTION_PLATFORM_ARP_QUERY_RESPONSE = 0x9,
    ACTION_PLATFORM_ONBOARD_QUERY_REQUEST = 0xa,
    ACTION_PLATFORM_ONBOARD_QUERY_RESPONSE = 0xb,
    ACTION_PLATFORM_WIFI_CREDENTIALS_GET_REQUEST = 0xe,
    ACTION_PLATFORM_WIFI_CREDENTIALS_GET_RESPONSE = 0xf,
    ACTION_PLATFORM_ADMIN_CREDENTIALS_GET_REQUEST = 0x10,
    ACTION_PLATFORM_ADMIN_CREDENTIALS_GET_RESPONSE = 0x11,
    ACTION_PLATFORM_LOCAL_MASTER_GET_REQUEST = 0x14,
    ACTION_PLATFORM_LOCAL_MASTER_GET_RESPONSE = 0x15,
    ACTION_PLATFORM_WLAN_PARAMS_CHANGED_NOTIFICATION = 0x1a,
    ACTION_PLATFORM_ONBOARD_SET_REQUEST = 0x24,
    ACTION_PLATFORM_WPS_ONBOARDING_REQUEST = 0x25,
    ACTION_PLATFORM_GET_MASTER_SLAVE_VERSIONS_REQUEST = 0x32,
    ACTION_PLATFORM_GET_MASTER_SLAVE_VERSIONS_RESPONSE = 0x33,
    ACTION_PLATFORM_VERSION_MISMATCH_NOTIFICATION = 0x34,
    ACTION_PLATFORM_MASTER_SLAVE_VERSIONS_NOTIFICATION = 0x35,
    ACTION_PLATFORM_SON_SLAVE_BACKHAUL_CONNECTION_COMPLETE_NOTIFICATION = 0x36,
    ACTION_PLATFORM_ERROR_NOTIFICATION = 0x64,
    ACTION_PLATFORM_ENUM_END = 0x65,
};

enum eActionOp_APMANAGER: uint8_t {
    ACTION_APMANAGER_UP_NOTIFICATION = 0x0,
    ACTION_APMANAGER_CONFIGURE = 0x1,
    ACTION_APMANAGER_JOINED_NOTIFICATION = 0x2,
    ACTION_APMANAGER_ENABLE_APS_REQUEST = 0x3,
    ACTION_APMANAGER_ENABLE_APS_RESPONSE = 0x4,
    ACTION_APMANAGER_ACK = 0x5,
    ACTION_APMANAGER_HOSTAP_CHANNEL_SWITCH_ACS_START = 0xc,
    ACTION_APMANAGER_HOSTAP_CSA_ERROR_NOTIFICATION = 0xd,
    ACTION_APMANAGER_HOSTAP_CSA_NOTIFICATION = 0xe,
    ACTION_APMANAGER_HOSTAP_ACS_ERROR_NOTIFICATION = 0xf,
    ACTION_APMANAGER_HOSTAP_ACS_NOTIFICATION = 0x10,
    ACTION_APMANAGER_HOSTAP_SET_NEIGHBOR_11K_REQUEST = 0x11,
    ACTION_APMANAGER_HOSTAP_REMOVE_NEIGHBOR_11K_REQUEST = 0x12,
    ACTION_APMANAGER_HOSTAP_DFS_CAC_COMPLETED_NOTIFICATION = 0x13,
    ACTION_APMANAGER_HOSTAP_DFS_CHANNEL_AVAILABLE_NOTIFICATION = 0x14,
    ACTION_APMANAGER_HOSTAP_ADD_4ADDR_STA_UPDATE = 0x15,
    ACTION_APMANAGER_HOSTAP_DEL_4ADDR_STA_UPDATE = 0x16,
    ACTION_APMANAGER_HOSTAP_SET_RESTRICTED_FAILSAFE_CHANNEL_REQUEST = 0x17,
    ACTION_APMANAGER_HOSTAP_SET_RESTRICTED_FAILSAFE_CHANNEL_RESPONSE = 0x18,
    ACTION_APMANAGER_HOSTAP_AP_DISABLED_NOTIFICATION = 0x19,
    ACTION_APMANAGER_HOSTAP_AP_ENABLED_NOTIFICATION = 0x1a,
    ACTION_APMANAGER_HOSTAP_VAPS_LIST_UPDATE_REQUEST = 0x1b,
    ACTION_APMANAGER_HOSTAP_VAPS_LIST_UPDATE_NOTIFICATION = 0x1c,
    ACTION_APMANAGER_HOSTAP_GENERATE_CLIENT_ASSOCIATION_NOTIFICATIONS_REQUEST = 0x1d,
    ACTION_APMANAGER_CLIENT_ASSOCIATED_NOTIFICATION = 0x28,
    ACTION_APMANAGER_CLIENT_DISCONNECTED_NOTIFICATION = 0x29,
    ACTION_APMANAGER_CLIENT_DISCONNECT_REQUEST = 0x2a,
    ACTION_APMANAGER_CLIENT_DISCONNECT_RESPONSE = 0x2b,
    ACTION_APMANAGER_CLIENT_DISALLOW_REQUEST = 0x2c,
    ACTION_APMANAGER_CLIENT_ALLOW_REQUEST = 0x2d,
    ACTION_APMANAGER_CLIENT_RX_RSSI_MEASUREMENT_REQUEST = 0x2e,
    ACTION_APMANAGER_CLIENT_RX_RSSI_MEASUREMENT_RESPONSE = 0x2f,
    ACTION_APMANAGER_CLIENT_BSS_STEER_REQUEST = 0x30,
    ACTION_APMANAGER_CLIENT_BSS_STEER_RESPONSE = 0x31,
    ACTION_APMANAGER_CLIENT_RX_RSSI_MEASUREMENT_CMD_RESPONSE = 0x32,
    ACTION_APMANAGER_STEERING_CLIENT_SET_REQUEST = 0x33,
    ACTION_APMANAGER_STEERING_CLIENT_SET_RESPONSE = 0x34,
    ACTION_APMANAGER_STEERING_EVENT_PROBE_REQ_NOTIFICATION = 0x35,
    ACTION_APMANAGER_STEERING_EVENT_AUTH_FAIL_NOTIFICATION = 0x36,
    ACTION_APMANAGER_WIFI_CREDENTIALS_UPDATE_REQUEST = 0x37,
    ACTION_APMANAGER_START_WPS_PBC_REQUEST = 0x38,
    ACTION_APMANAGER_HEARTBEAT_NOTIFICATION = 0x46,
    ACTION_APMANAGER_READ_ACS_REPORT_REQUEST = 0x47,
    ACTION_APMANAGER_READ_ACS_REPORT_RESPONSE = 0x48,
    ACTION_APMANAGER_ENUM_END = 0x49,
};

enum eActionOp_MONITOR: uint8_t {
    ACTION_MONITOR_JOINED_NOTIFICATION = 0x0,
    ACTION_MONITOR_SON_CONFIG_UPDATE = 0x1,
    ACTION_MONITOR_CHANGE_MODULE_LOGGING_LEVEL = 0x2,
    ACTION_MONITOR_ERROR_NOTIFICATION = 0x3,
    ACTION_MONITOR_ERROR_NOTIFICATION_ACK = 0x4,
    ACTION_MONITOR_HEARTBEAT_NOTIFICATION = 0x5,
    ACTION_MONITOR_HOSTAP_AP_DISABLED_NOTIFICATION = 0x6,
    ACTION_MONITOR_CLIENT_START_MONITORING_REQUEST = 0x14,
    ACTION_MONITOR_CLIENT_START_MONITORING_RESPONSE = 0x15,
    ACTION_MONITOR_CLIENT_RX_RSSI_MEASUREMENT_REQUEST = 0x17,
    ACTION_MONITOR_CLIENT_DISCONNECT_REQUEST = 0x18,
    ACTION_MONITOR_CLIENT_RX_RSSI_MEASUREMENT_NOTIFICATION = 0x19,
    ACTION_MONITOR_CLIENT_RX_RSSI_MEASUREMENT_RESPONSE = 0x1a,
    ACTION_MONITOR_CLIENT_NO_RESPONSE_NOTIFICATION = 0x1b,
    ACTION_MONITOR_CLIENT_RX_RSSI_MEASUREMENT_START_NOTIFICATION = 0x1c,
    ACTION_MONITOR_CLIENT_BEACON_11K_REQUEST = 0x1d,
    ACTION_MONITOR_CLIENT_BEACON_11K_RESPONSE = 0x1e,
    ACTION_MONITOR_CLIENT_CHANNEL_LOAD_11K_REQUEST = 0x1f,
    ACTION_MONITOR_CLIENT_CHANNEL_LOAD_11K_RESPONSE = 0x20,
    ACTION_MONITOR_CLIENT_STATISTICS_11K_REQUEST = 0x21,
    ACTION_MONITOR_CLIENT_STATISTICS_11K_RESPONSE = 0x22,
    ACTION_MONITOR_CLIENT_RX_RSSI_MEASUREMENT_CMD_RESPONSE = 0x25,
    ACTION_MONITOR_CLIENT_NO_ACTIVITY_NOTIFICATION = 0x26,
    ACTION_MONITOR_CLIENT_NEW_IP_ADDRESS_NOTIFICATION = 0x27,
    ACTION_MONITOR_CLIENT_ASSOCIATED_STA_LINK_METRIC_REQUEST = 0x28,
    ACTION_MONITOR_CLIENT_ASSOCIATED_STA_LINK_METRIC_RESPONSE = 0x29,
    ACTION_MONITOR_HOSTAP_STATS_MEASUREMENT_REQUEST = 0x32,
    ACTION_MONITOR_HOSTAP_STATS_MEASUREMENT_RESPONSE = 0x33,
    ACTION_MONITOR_HOSTAP_LOAD_MEASUREMENT_NOTIFICATION = 0x34,
    ACTION_MONITOR_HOSTAP_ACTIVITY_NOTIFICATION = 0x35,
    ACTION_MONITOR_HOSTAP_STATUS_CHANGED_NOTIFICATION = 0x36,
    ACTION_MONITOR_CHANNEL_SCAN_TRIGGER_SCAN_REQUEST = 0x3c,
    ACTION_MONITOR_CHANNEL_SCAN_TRIGGER_SCAN_RESPONSE = 0x3d,
    ACTION_MONITOR_CHANNEL_SCAN_TRIGGERED_NOTIFICATION = 0x3e,
    ACTION_MONITOR_CHANNEL_SCAN_DUMP_RESULTS_REQUEST = 0x3f,
    ACTION_MONITOR_CHANNEL_SCAN_DUMP_RESULTS_RESPONSE = 0x40,
    ACTION_MONITOR_CHANNEL_SCAN_RESULTS_NOTIFICATION = 0x41,
    ACTION_MONITOR_CHANNEL_SCAN_ABORT_NOTIFICATION = 0x42,
    ACTION_MONITOR_CHANNEL_SCAN_FINISHED_NOTIFICATION = 0x43,
    ACTION_MONITOR_STEERING_CLIENT_SET_GROUP_REQUEST = 0x50,
    ACTION_MONITOR_STEERING_CLIENT_SET_GROUP_RESPONSE = 0x51,
    ACTION_MONITOR_STEERING_CLIENT_SET_REQUEST = 0x52,
    ACTION_MONITOR_STEERING_CLIENT_SET_RESPONSE = 0x53,
    ACTION_MONITOR_STEERING_EVENT_CLIENT_ACTIVITY_NOTIFICATION = 0x54,
    ACTION_MONITOR_STEERING_EVENT_SNR_XING_NOTIFICATION = 0x55,
    ACTION_MONITOR_ENUM_END = 0x56,
};

enum eActionOp_CLI: uint8_t {
    ACTION_CLI_RESPONSE_NONE = 0x0,
    ACTION_CLI_RESPONSE_STR = 0x1,
    ACTION_CLI_RESPONSE_INT = 0x2,
    ACTION_CLI_ENABLE_DEBUG = 0x3,
    ACTION_CLI_ENABLE_DIAGNOSTICS_MEASUREMENTS = 0x14,
    ACTION_CLI_SET_SLAVES_STOP_ON_FAILURE_ATTEMPTS = 0x15,
    ACTION_CLI_ENABLE_LOAD_BALANCER = 0x16,
    ACTION_CLI_DUMP_NODE_INFO = 0x1e,
    ACTION_CLI_CROSS_RX_RSSI_MEASUREMENT = 0x1f,
    ACTION_CLI_OPTIMAL_PATH_TASK = 0x21,
    ACTION_CLI_LOAD_BALANCER_TASK = 0x22,
    ACTION_CLI_IRE_NETWORK_OPTIMIZATION_TASK = 0x23,
    ACTION_CLI_BACKHAUL_SCAN_RESULTS = 0x24,
    ACTION_CLI_BACKHAUL_ROAM_REQUEST = 0x25,
    ACTION_CLI_PING_SLAVE_REQUEST = 0x26,
    ACTION_CLI_PING_ALL_SLAVES_REQUEST = 0x27,
    ACTION_CLI_CLIENT_ALLOW_REQUEST = 0x50,
    ACTION_CLI_CLIENT_DISALLOW_REQUEST = 0x51,
    ACTION_CLI_CLIENT_DISCONNECT_REQUEST = 0x52,
    ACTION_CLI_CLIENT_BSS_STEER_REQUEST = 0x53,
    ACTION_CLI_CLIENT_BEACON_11K_REQUEST = 0x56,
    ACTION_CLI_CLIENT_STATISTICS_11K_REQUEST = 0x57,
    ACTION_CLI_HOSTAP_CHANNEL_SWITCH_REQUEST = 0x7a,
    ACTION_CLI_HOSTAP_SET_NEIGHBOR_11K_REQUEST = 0x7b,
    ACTION_CLI_HOSTAP_REMOVE_NEIGHBOR_11K_REQUEST = 0x7c,
    ACTION_CLI_HOSTAP_STATS_MEASUREMENT = 0x7d,
    ACTION_CLI_ENUM_END = 0x7e,
};

enum eActionOp_BML: uint8_t {
    ACTION_BML_PING_REQUEST = 0x0,
    ACTION_BML_PING_RESPONSE = 0x1,
    ACTION_BML_NW_MAP_REQUEST = 0x2,
    ACTION_BML_NW_MAP_RESPONSE = 0x3,
    ACTION_BML_REGISTER_TO_NW_MAP_UPDATES_REQUEST = 0xa,
    ACTION_BML_REGISTER_TO_NW_MAP_UPDATES_RESPONSE = 0xb,
    ACTION_BML_UNREGISTER_FROM_NW_MAP_UPDATES_REQUEST = 0xc,
    ACTION_BML_UNREGISTER_FROM_NW_MAP_UPDATES_RESPONSE = 0xd,
    ACTION_BML_REGISTER_TO_STATS_UPDATES_REQUEST = 0xe,
    ACTION_BML_REGISTER_TO_STATS_UPDATES_RESPONSE = 0xf,
    ACTION_BML_UNREGISTER_FROM_STATS_UPDATES_REQUEST = 0x10,
    ACTION_BML_UNREGISTER_FROM_STATS_UPDATES_RESPONSE = 0x11,
    ACTION_BML_REGISTER_TO_EVENTS_UPDATES_REQUEST = 0x12,
    ACTION_BML_REGISTER_TO_EVENTS_UPDATES_RESPONSE = 0x13,
    ACTION_BML_UNREGISTER_FROM_EVENTS_UPDATES_REQUEST = 0x14,
    ACTION_BML_UNREGISTER_FROM_EVENTS_UPDATES_RESPONSE = 0x15,
    ACTION_BML_NW_MAP_UPDATE = 0x1e,
    ACTION_BML_STATS_UPDATE = 0x1f,
    ACTION_BML_EVENTS_UPDATE = 0x20,
    ACTION_BML_SET_LEGACY_CLIENT_ROAMING_REQUEST = 0x38,
    ACTION_BML_SET_LEGACY_CLIENT_ROAMING_RESPONSE = 0x39,
    ACTION_BML_GET_LEGACY_CLIENT_ROAMING_REQUEST = 0x3a,
    ACTION_BML_GET_LEGACY_CLIENT_ROAMING_RESPONSE = 0x3b,
    ACTION_BML_SET_CLIENT_ROAMING_REQUEST = 0x3c,
    ACTION_BML_SET_CLIENT_ROAMING_RESPONSE = 0x3d,
    ACTION_BML_GET_CLIENT_ROAMING_REQUEST = 0x3e,
    ACTION_BML_GET_CLIENT_ROAMING_RESPONSE = 0x3f,
    ACTION_BML_SET_CLIENT_BAND_STEERING_REQUEST = 0x40,
    ACTION_BML_SET_CLIENT_BAND_STEERING_RESPONSE = 0x41,
    ACTION_BML_GET_CLIENT_BAND_STEERING_REQUEST = 0x42,
    ACTION_BML_GET_CLIENT_BAND_STEERING_RESPONSE = 0x43,
    ACTION_BML_SET_IRE_ROAMING_REQUEST = 0x44,
    ACTION_BML_SET_IRE_ROAMING_RESPONSE = 0x45,
    ACTION_BML_GET_IRE_ROAMING_REQUEST = 0x46,
    ACTION_BML_GET_IRE_ROAMING_RESPONSE = 0x47,
    ACTION_BML_SET_LOAD_BALANCER_REQUEST = 0x48,
    ACTION_BML_SET_LOAD_BALANCER_RESPONSE = 0x49,
    ACTION_BML_GET_LOAD_BALANCER_REQUEST = 0x4a,
    ACTION_BML_GET_LOAD_BALANCER_RESPONSE = 0x4b,
    ACTION_BML_SET_SERVICE_FAIRNESS_REQUEST = 0x4c,
    ACTION_BML_SET_SERVICE_FAIRNESS_RESPONSE = 0x4d,
    ACTION_BML_GET_SERVICE_FAIRNESS_REQUEST = 0x4e,
    ACTION_BML_GET_SERVICE_FAIRNESS_RESPONSE = 0x4f,
    ACTION_BML_SET_CLIENT_ROAMING_PREFER_SIGNAL_STRENGTH_REQUEST = 0x50,
    ACTION_BML_SET_CLIENT_ROAMING_PREFER_SIGNAL_STRENGTH_RESPONSE = 0x51,
    ACTION_BML_GET_CLIENT_ROAMING_PREFER_SIGNAL_STRENGTH_REQUEST = 0x52,
    ACTION_BML_GET_CLIENT_ROAMING_PREFER_SIGNAL_STRENGTH_RESPONSE = 0x53,
    ACTION_BML_SET_DFS_REENTRY_REQUEST = 0x54,
    ACTION_BML_SET_DFS_REENTRY_RESPONSE = 0x55,
    ACTION_BML_GET_DFS_REENTRY_REQUEST = 0x56,
    ACTION_BML_GET_DFS_REENTRY_RESPONSE = 0x57,
    ACTION_BML_SET_RESTRICTED_CHANNELS_REQUEST = 0x5c,
    ACTION_BML_SET_RESTRICTED_CHANNELS_RESPONSE = 0x5d,
    ACTION_BML_GET_RESTRICTED_CHANNELS_REQUEST = 0x5e,
    ACTION_BML_GET_RESTRICTED_CHANNELS_RESPONSE = 0x5f,
    ACTION_BML_SET_CERTIFICATION_MODE_REQUEST = 0x60,
    ACTION_BML_SET_CERTIFICATION_MODE_RESPONSE = 0x61,
    ACTION_BML_GET_CERTIFICATION_MODE_REQUEST = 0x62,
    ACTION_BML_GET_CERTIFICATION_MODE_RESPONSE = 0x63,
    ACTION_BML_WIFI_CREDENTIALS_SET_REQUEST = 0x6e,
    ACTION_BML_WIFI_CREDENTIALS_SET_RESPONSE = 0x6f,
    ACTION_BML_WIFI_CREDENTIALS_UPDATE_REQUEST = 0x70,
    ACTION_BML_WIFI_CREDENTIALS_UPDATE_RESPONSE = 0x71,
    ACTION_BML_WIFI_CREDENTIALS_CLEAR_REQUEST = 0x72,
    ACTION_BML_WIFI_CREDENTIALS_CLEAR_RESPONSE = 0x73,
    ACTION_BML_CHANGE_MODULE_LOGGING_LEVEL_REQUEST = 0x8c,
    ACTION_BML_CHANGE_MODULE_LOGGING_LEVEL_RESPONSE = 0x8d,
    ACTION_BML_SET_VAP_LIST_CREDENTIALS_REQUEST = 0x96,
    ACTION_BML_SET_VAP_LIST_CREDENTIALS_RESPONSE = 0x97,
    ACTION_BML_GET_VAP_LIST_CREDENTIALS_REQUEST = 0x98,
    ACTION_BML_GET_VAP_LIST_CREDENTIALS_RESPONSE = 0x99,
    ACTION_BML_STEERING_SET_GROUP_REQUEST = 0xa3,
    ACTION_BML_STEERING_SET_GROUP_RESPONSE = 0xa4,
    ACTION_BML_STEERING_CLIENT_SET_REQUEST = 0xa5,
    ACTION_BML_STEERING_CLIENT_SET_RESPONSE = 0xa6,
    ACTION_BML_STEERING_EVENT_REGISTER_UNREGISTER_REQUEST = 0xa7,
    ACTION_BML_STEERING_EVENT_REGISTER_UNREGISTER_RESPONSE = 0xa8,
    ACTION_BML_STEERING_CLIENT_DISCONNECT_REQUEST = 0xa9,
    ACTION_BML_STEERING_CLIENT_DISCONNECT_RESPONSE = 0xaa,
    ACTION_BML_STEERING_CLIENT_MEASURE_REQUEST = 0xab,
    ACTION_BML_STEERING_CLIENT_MEASURE_RESPONSE = 0xac,
    ACTION_BML_STEERING_EVENT_PROBE_REQ_NOTIFICATION = 0xb2,
    ACTION_BML_STEERING_EVENT_CLIENT_CONNECT_NOTIFICATION = 0xb3,
    ACTION_BML_STEERING_EVENT_CLIENT_DISCONNECT_NOTIFICATION = 0xb4,
    ACTION_BML_STEERING_EVENT_CLIENT_ACTIVITY_NOTIFICATION = 0xb5,
    ACTION_BML_STEERING_EVENT_SNR_XING_NOTIFICATION = 0xb6,
    ACTION_BML_STEERING_EVENT_SNR_NOTIFICATION = 0xb7,
    ACTION_BML_STEERING_EVENT_AUTH_FAIL_NOTIFICATION = 0xb8,
    ACTION_BML_STEERING_EVENTS_UPDATE = 0xb9,
    ACTION_BML_TRIGGER_CHANNEL_SELECTION_REQUEST = 0xbe,
    ACTION_BML_TRIGGER_TOPOLOGY_QUERY = 0xbf,
    ACTION_BML_TOPOLOGY_RESPONSE = 0xc0,
    ACTION_BML_REGISTER_TOPOLOGY_QUERY = 0xc1,
    ACTION_BML_UNREGISTER_TOPOLOGY_QUERY = 0xc2,
    ACTION_BML_CHANNEL_SCAN_SET_CONTINUOUS_PARAMS_REQUEST = 0xc8,
    ACTION_BML_CHANNEL_SCAN_SET_CONTINUOUS_PARAMS_RESPONSE = 0xc9,
    ACTION_BML_CHANNEL_SCAN_GET_CONTINUOUS_PARAMS_REQUEST = 0xca,
    ACTION_BML_CHANNEL_SCAN_GET_CONTINUOUS_PARAMS_RESPONSE = 0xcb,
    ACTION_BML_CHANNEL_SCAN_SET_CONTINUOUS_ENABLE_REQUEST = 0xcc,
    ACTION_BML_CHANNEL_SCAN_SET_CONTINUOUS_ENABLE_RESPONSE = 0xcd,
    ACTION_BML_CHANNEL_SCAN_GET_CONTINUOUS_ENABLE_REQUEST = 0xce,
    ACTION_BML_CHANNEL_SCAN_GET_CONTINUOUS_ENABLE_RESPONSE = 0xcf,
    ACTION_BML_CHANNEL_SCAN_START_SCAN_REQUEST = 0xd0,
    ACTION_BML_CHANNEL_SCAN_START_SCAN_RESPONSE = 0xd1,
    ACTION_BML_CHANNEL_SCAN_GET_RESULTS_REQUEST = 0xd2,
    ACTION_BML_CHANNEL_SCAN_GET_RESULTS_RESPONSE = 0xd3,
    ACTION_BML_CHANNEL_SCAN_DUMP_RESULTS_REQUEST = 0xd4,
    ACTION_BML_CHANNEL_SCAN_DUMP_RESULTS_RESPONSE = 0xd5,
    ACTION_BML_CLIENT_GET_CLIENT_LIST_REQUEST = 0xd7,
    ACTION_BML_CLIENT_GET_CLIENT_LIST_RESPONSE = 0xd8,
    ACTION_BML_CLIENT_SET_CLIENT_REQUEST = 0xd9,
    ACTION_BML_CLIENT_SET_CLIENT_RESPONSE = 0xda,
    ACTION_BML_CLIENT_GET_CLIENT_REQUEST = 0xdb,
    ACTION_BML_CLIENT_GET_CLIENT_RESPONSE = 0xdc,
    ACTION_BML_ENUM_END = 0xe1,
};


}; // close namespace: beerocks_message

#endif //_BEEROCKS/TLVF_BEEROCKS_MESSAGE_ACTION_H_
