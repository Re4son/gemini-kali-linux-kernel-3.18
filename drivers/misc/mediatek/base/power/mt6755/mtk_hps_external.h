/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

/**
* @file    mt_hotplug_strategy_external.h
* @brief   hotplug strategy(hps) - external header file
*/

#ifndef __MT_HOTPLUG_STRATEGY_EXTERNAL_H__
#define __MT_HOTPLUG_STRATEGY_EXTERNAL_H__

#include <linux/kernel.h>
#include <linux/io.h>
#include <linux/platform_device.h>
#include <linux/kthread.h>
#include <linux/timer.h>
#include <linux/sched/rt.h>

void __attribute__((weak)) hps_dump_task_info(void)
{

}

extern void hps_dump_task_info(void);

#endif
