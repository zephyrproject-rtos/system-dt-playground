/*
 * Copyright (c) 2017 Linaro Limited
 * Copyright (c) 2018 Linaro Limited
 * Copyright (c) 2020 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _DT_BINDINGS_H_
#define _DT_BINDINGS_H_

#define DT_SIZE_K(x) ((x) * 1024)

#ifndef NRF_DEFAULT_IRQ_PRIORITY
#define NRF_DEFAULT_IRQ_PRIORITY 1
#endif

#define I2C_BITRATE_STANDARD	100000	/* 100 Kbit/s */
#define I2C_BITRATE_FAST	400000	/* 400 Kbit/s */
#define I2C_BITRATE_FAST_PLUS	1000000 /* 1 Mbit/s */
#define I2C_BITRATE_HIGH	3400000	/* 3.4 Mbit/s */
#define I2C_BITRATE_ULTRA	5000000 /* 5 Mbit/s */

#define ARMV8M_S_FLAG	0x1
#define ARMV8M_NS_FLAG	0x2

#endif
