/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief TIM1 定时器 TIMING 例程，通过标准接口实现
 *
 * - 实验现象：
 *   1. LED0 以 5Hz 的频率翻转。(计数周期是10Hz，led翻转周期为10/2=5Hz)
 *
 * \par 源代码
 * \snippet demo_hc32l17x_std_tim1_timing.c src_hc32l17x_std_tim1_timing
 *
 * \internal
 * \par Modification history
 * - 1.00 19-09-23  zp, first implementation
 * \endinternal
 */

/**
 * \addtogroup demo_if_hc32l17x_std_tim1_timing
 * \copydoc demo_hc32l17x_std_tim1_timing.c
 */

/** [src_hc32l17x_std_tim1_timing] */

#include "ametal.h"
#include "am_vdebug.h"
#include "demo_std_entries.h"
#include "am_hc32l17x_inst_init.h"
#include "demo_aml17x_core_entries.h"

/**
 * \brief 例程入口
 */
void demo_hc32l17x_core_std_tim1_timing_entry (void)
{
    AM_DBG_INFO("demo aml17x_core std tim1 timing!\r\n");

    demo_std_timer_timing_entry(am_hc32_tim1_timing_inst_init(), 0);
}
/** [src_hc32l17x_std_tim1_timing] */

/* end of file */
