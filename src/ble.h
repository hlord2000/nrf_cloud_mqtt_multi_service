/*
 * Copyright (c) 2018 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

#ifndef _BLE_H_
#define _BLE_H_
#include <zephyr/kernel.h>

#include <zephyr/bluetooth/bluetooth.h>
#include <zephyr/bluetooth/gatt.h>
#include <zephyr/bluetooth/uuid.h>
#include <bluetooth/gatt_dm.h>
#include <bluetooth/scan.h>
#include <bluetooth/services/nus.h>
#include <bluetooth/services/nus_client.h>

#include <dk_buttons_and_leds.h>
#include <zephyr/sys/byteorder.h>

#include <net/nrf_cloud.h>
#include <stdio.h>
#include <zephyr/logging/log.h>


typedef void (*on_ble_data_received)(const uint8_t *data, uint16_t length);

void ble_init(on_ble_data_received received_cb);

uint32_t ble_send_data(const uint8_t *data, uint16_t length);

#endif /* _BLE_H_ */
