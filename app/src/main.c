/*
 * Copyright (c) 2021 Nordic Semiconductor ASA
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/drivers/sensor.h>
#include <zephyr/logging/log.h>

int main(void)
{
    while (true)
    {
        printk("Hello from ESP32C3!\n");
        k_sleep(K_SECONDS(1));
    }
}
