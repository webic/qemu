/*
 * STM32 MCU - EXTI (system configuration controller) emulation.
 *
 * Copyright (c) 2016 Liviu Ionescu.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#include <hw/cortexm/stm32/syscfg.h>
#include <hw/cortexm/stm32/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

/*
 * This file implements the STM32 SYSCFG, used in F4, F0 devices.
 */

// ----- Generated code -------------------------------------------------------
//
// STM32F051R8
// DO NOT EDIT! Automatically generated!
static void stm32f0x1_syscfg_create_objects(Object *obj, JSON_Object *svd,
        const char *name)
{
    STM32SYSCFGState *state = STM32_SYSCFG_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers.
    state->u.f0.reg.cfgr1 = cm_object_get_child_by_name(obj, "CFGR1");
    state->u.f0.reg.exticr1 = cm_object_get_child_by_name(obj, "EXTICR1");
    state->u.f0.reg.exticr2 = cm_object_get_child_by_name(obj, "EXTICR2");
    state->u.f0.reg.exticr3 = cm_object_get_child_by_name(obj, "EXTICR3");
    state->u.f0.reg.exticr4 = cm_object_get_child_by_name(obj, "EXTICR4");
    state->u.f0.reg.cfgr2 = cm_object_get_child_by_name(obj, "CFGR2");

    // CFGR1 bitfields.
    state->u.f0.fld.cfgr1.mem_mode = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "MEM_MODE");
    state->u.f0.fld.cfgr1.adc_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "ADC_DMA_RMP");
    state->u.f0.fld.cfgr1.usart1_tx_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "USART1_TX_DMA_RMP");
    state->u.f0.fld.cfgr1.usart1_rx_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "USART1_RX_DMA_RMP");
    state->u.f0.fld.cfgr1.tim16_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "TIM16_DMA_RMP");
    state->u.f0.fld.cfgr1.tim17_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "TIM17_DMA_RMP");
    state->u.f0.fld.cfgr1.i2c_pb6_fm = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "I2C_PB6_FM");
    state->u.f0.fld.cfgr1.i2c_pb7_fm = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "I2C_PB7_FM");
    state->u.f0.fld.cfgr1.i2c_pb8_fm = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "I2C_PB8_FM");
    state->u.f0.fld.cfgr1.i2c_pb9_fm = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "I2C_PB9_FM");
    state->u.f0.fld.cfgr1.i2c1_fm_plus = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "I2C1_FM_plus");
    state->u.f0.fld.cfgr1.i2c2_fm_plus = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "I2C2_FM_plus");
    state->u.f0.fld.cfgr1.spi2_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "SPI2_DMA_RMP");
    state->u.f0.fld.cfgr1.usart2_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "USART2_DMA_RMP");
    state->u.f0.fld.cfgr1.usart3_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "USART3_DMA_RMP");
    state->u.f0.fld.cfgr1.i2c1_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "I2C1_DMA_RMP");
    state->u.f0.fld.cfgr1.tim1_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "TIM1_DMA_RMP");
    state->u.f0.fld.cfgr1.tim2_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "TIM2_DMA_RMP");
    state->u.f0.fld.cfgr1.tim3_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "TIM3_DMA_RMP");

    // EXTICR1 bitfields.
    state->u.f0.fld.exticr1.exti0 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr1, "EXTI0");
    state->u.f0.fld.exticr1.exti1 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr1, "EXTI1");
    state->u.f0.fld.exticr1.exti2 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr1, "EXTI2");
    state->u.f0.fld.exticr1.exti3 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr1, "EXTI3");

    // EXTICR2 bitfields.
    state->u.f0.fld.exticr2.exti4 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr2, "EXTI4");
    state->u.f0.fld.exticr2.exti5 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr2, "EXTI5");
    state->u.f0.fld.exticr2.exti6 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr2, "EXTI6");
    state->u.f0.fld.exticr2.exti7 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr2, "EXTI7");

    // EXTICR3 bitfields.
    state->u.f0.fld.exticr3.exti8 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr3, "EXTI8");
    state->u.f0.fld.exticr3.exti9 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr3, "EXTI9");
    state->u.f0.fld.exticr3.exti10 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr3, "EXTI10");
    state->u.f0.fld.exticr3.exti11 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr3, "EXTI11");

    // EXTICR4 bitfields.
    state->u.f0.fld.exticr4.exti12 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr4, "EXTI12");
    state->u.f0.fld.exticr4.exti13 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr4, "EXTI13");
    state->u.f0.fld.exticr4.exti14 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr4, "EXTI14");
    state->u.f0.fld.exticr4.exti15 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr4, "EXTI15");

    // CFGR2 bitfields.
    state->u.f0.fld.cfgr2.locup_lock = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr2, "LOCUP_LOCK");
    state->u.f0.fld.cfgr2.sram_parity_lock = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr2, "SRAM_PARITY_LOCK");
    state->u.f0.fld.cfgr2.pvd_lock = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr2, "PVD_LOCK");
    state->u.f0.fld.cfgr2.sram_pef = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr2, "SRAM_PEF");
}

// ----------------------------------------------------------------------------

// STM32F051R8
// DO NOT EDIT! Automatically generated!
static void stm32f0x2_syscfg_create_objects(Object *obj, JSON_Object *svd,
        const char *name)
{
    STM32SYSCFGState *state = STM32_SYSCFG_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers.
    state->u.f0.reg.cfgr1 = cm_object_get_child_by_name(obj, "CFGR1");
    state->u.f0.reg.exticr1 = cm_object_get_child_by_name(obj, "EXTICR1");
    state->u.f0.reg.exticr2 = cm_object_get_child_by_name(obj, "EXTICR2");
    state->u.f0.reg.exticr3 = cm_object_get_child_by_name(obj, "EXTICR3");
    state->u.f0.reg.exticr4 = cm_object_get_child_by_name(obj, "EXTICR4");
    state->u.f0.reg.cfgr2 = cm_object_get_child_by_name(obj, "CFGR2");
    // CFGR1bitfields.
    state->u.f0.fld.cfgr1.mem_mode = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "MEM_MODE");
    state->u.f0.fld.cfgr1.adc_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "ADC_DMA_RMP");
    state->u.f0.fld.cfgr1.usart1_tx_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "USART1_TX_DMA_RMP");
    state->u.f0.fld.cfgr1.usart1_rx_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "USART1_RX_DMA_RMP");
    state->u.f0.fld.cfgr1.tim16_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "TIM16_DMA_RMP");
    state->u.f0.fld.cfgr1.tim17_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "TIM17_DMA_RMP");
    state->u.f0.fld.cfgr1.i2c_pb6_fm = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "I2C_PB6_FM");
    state->u.f0.fld.cfgr1.i2c_pb7_fm = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "I2C_PB7_FM");
    state->u.f0.fld.cfgr1.i2c_pb8_fm = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "I2C_PB8_FM");
    state->u.f0.fld.cfgr1.i2c_pb9_fm = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "I2C_PB9_FM");
    state->u.f0.fld.cfgr1.i2c1_fm_plus = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "I2C1_FM_plus");
    state->u.f0.fld.cfgr1.i2c2_fm_plus = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "I2C2_FM_plus");
    state->u.f0.fld.cfgr1.spi2_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "SPI2_DMA_RMP");
    state->u.f0.fld.cfgr1.usart2_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "USART2_DMA_RMP");
    state->u.f0.fld.cfgr1.usart3_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "USART3_DMA_RMP");
    state->u.f0.fld.cfgr1.i2c1_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "I2C1_DMA_RMP");
    state->u.f0.fld.cfgr1.tim1_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "TIM1_DMA_RMP");
    state->u.f0.fld.cfgr1.tim2_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "TIM2_DMA_RMP");
    state->u.f0.fld.cfgr1.tim3_dma_rmp = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr1, "TIM3_DMA_RMP");
    // EXTICR1bitfields.
    state->u.f0.fld.exticr1.exti0 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr1, "EXTI0");
    state->u.f0.fld.exticr1.exti1 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr1, "EXTI1");
    state->u.f0.fld.exticr1.exti2 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr1, "EXTI2");
    state->u.f0.fld.exticr1.exti3 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr1, "EXTI3");
    // EXTICR2bitfields.
    state->u.f0.fld.exticr2.exti4 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr2, "EXTI4");
    state->u.f0.fld.exticr2.exti5 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr2, "EXTI5");
    state->u.f0.fld.exticr2.exti6 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr2, "EXTI6");
    state->u.f0.fld.exticr2.exti7 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr2, "EXTI7");
    // EXTICR3bitfields.
    state->u.f0.fld.exticr3.exti8 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr3, "EXTI8");
    state->u.f0.fld.exticr3.exti9 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr3, "EXTI9");
    state->u.f0.fld.exticr3.exti10 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr3, "EXTI10");
    state->u.f0.fld.exticr3.exti11 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr3, "EXTI11");
    // EXTICR4bitfields.
    state->u.f0.fld.exticr4.exti12 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr4, "EXTI12");
    state->u.f0.fld.exticr4.exti13 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr4, "EXTI13");
    state->u.f0.fld.exticr4.exti14 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr4, "EXTI14");
    state->u.f0.fld.exticr4.exti15 = cm_object_get_child_by_name(
            state->u.f0.reg.exticr4, "EXTI15");
    // CFGR2bitfields.
    state->u.f0.fld.cfgr2.locup_lock = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr2, "LOCUP_LOCK");
    state->u.f0.fld.cfgr2.sram_parity_lock = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr2, "SRAM_PARITY_LOCK");
    state->u.f0.fld.cfgr2.pvd_lock = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr2, "PVD_LOCK");
    state->u.f0.fld.cfgr2.sram_pef = cm_object_get_child_by_name(
            state->u.f0.reg.cfgr2, "SRAM_PEF");
}

// ----------------------------------------------------------------------------

// STM32F407VG, STM32F407ZG, STM32F405RG
// DO NOT EDIT! Automatically generated!
static void stm32f40x_syscfg_create_objects(Object *obj, JSON_Object *svd,
        const char *name)
{
    STM32SYSCFGState *state = STM32_SYSCFG_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers.
    state->u.f4.reg.memrm = cm_object_get_child_by_name(obj, "MEMRM");
    state->u.f4.reg.pmc = cm_object_get_child_by_name(obj, "PMC");
    state->u.f4.reg.exticr1 = cm_object_get_child_by_name(obj, "EXTICR1");
    state->u.f4.reg.exticr2 = cm_object_get_child_by_name(obj, "EXTICR2");
    state->u.f4.reg.exticr3 = cm_object_get_child_by_name(obj, "EXTICR3");
    state->u.f4.reg.exticr4 = cm_object_get_child_by_name(obj, "EXTICR4");
    state->u.f4.reg.cmpcr = cm_object_get_child_by_name(obj, "CMPCR");

    // MEMRM bitfields.
    state->u.f4.fld.memrm.mem_mode = cm_object_get_child_by_name(
            state->u.f4.reg.memrm, "MEM_MODE");

    // PMC bitfields.
    state->u.f4.fld.pmc.mii_rmii_sel = cm_object_get_child_by_name(
            state->u.f4.reg.pmc, "MII_RMII_SEL");

    // EXTICR1 bitfields.
    state->u.f4.fld.exticr1.exti0 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr1, "EXTI0");
    state->u.f4.fld.exticr1.exti1 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr1, "EXTI1");
    state->u.f4.fld.exticr1.exti2 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr1, "EXTI2");
    state->u.f4.fld.exticr1.exti3 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr1, "EXTI3");

    // EXTICR2 bitfields.
    state->u.f4.fld.exticr2.exti4 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr2, "EXTI4");
    state->u.f4.fld.exticr2.exti5 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr2, "EXTI5");
    state->u.f4.fld.exticr2.exti6 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr2, "EXTI6");
    state->u.f4.fld.exticr2.exti7 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr2, "EXTI7");

    // EXTICR3 bitfields.
    state->u.f4.fld.exticr3.exti8 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr3, "EXTI8");
    state->u.f4.fld.exticr3.exti9 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr3, "EXTI9");
    state->u.f4.fld.exticr3.exti10 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr3, "EXTI10");
    state->u.f4.fld.exticr3.exti11 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr3, "EXTI11");

    // EXTICR4 bitfields.
    state->u.f4.fld.exticr4.exti12 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr4, "EXTI12");
    state->u.f4.fld.exticr4.exti13 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr4, "EXTI13");
    state->u.f4.fld.exticr4.exti14 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr4, "EXTI14");
    state->u.f4.fld.exticr4.exti15 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr4, "EXTI15");

    // CMPCR bitfields.
    state->u.f4.fld.cmpcr.cmp_pd = cm_object_get_child_by_name(
            state->u.f4.reg.cmpcr, "CMP_PD");
    state->u.f4.fld.cmpcr.ready = cm_object_get_child_by_name(
            state->u.f4.reg.cmpcr, "READY");
}

// ----------------------------------------------------------------------------

// STM32F411RE
// DO NOT EDIT! Automatically generated!
static void stm32f411xx_syscfg_create_objects(Object *obj, JSON_Object *svd,
        const char *name)
{
    STM32SYSCFGState *state = STM32_SYSCFG_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers.
    state->u.f4.reg.memrm = cm_object_get_child_by_name(obj, "MEMRM");
    state->u.f4.reg.pmc = cm_object_get_child_by_name(obj, "PMC");
    state->u.f4.reg.exticr1 = cm_object_get_child_by_name(obj, "EXTICR1");
    state->u.f4.reg.exticr2 = cm_object_get_child_by_name(obj, "EXTICR2");
    state->u.f4.reg.exticr3 = cm_object_get_child_by_name(obj, "EXTICR3");
    state->u.f4.reg.exticr4 = cm_object_get_child_by_name(obj, "EXTICR4");
    state->u.f4.reg.cmpcr = cm_object_get_child_by_name(obj, "CMPCR");

    // MEMRM bitfields.
    state->u.f4.fld.memrm.mem_mode = cm_object_get_child_by_name(
            state->u.f4.reg.memrm, "MEM_MODE");

    // PMC bitfields.
    state->u.f4.fld.pmc.adc1dc2 = cm_object_get_child_by_name(
            state->u.f4.reg.pmc, "ADC1DC2");

    // EXTICR1 bitfields.
    state->u.f4.fld.exticr1.exti0 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr1, "EXTI0");
    state->u.f4.fld.exticr1.exti1 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr1, "EXTI1");
    state->u.f4.fld.exticr1.exti2 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr1, "EXTI2");
    state->u.f4.fld.exticr1.exti3 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr1, "EXTI3");

    // EXTICR2 bitfields.
    state->u.f4.fld.exticr2.exti4 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr2, "EXTI4");
    state->u.f4.fld.exticr2.exti5 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr2, "EXTI5");
    state->u.f4.fld.exticr2.exti6 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr2, "EXTI6");
    state->u.f4.fld.exticr2.exti7 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr2, "EXTI7");

    // EXTICR3 bitfields.
    state->u.f4.fld.exticr3.exti8 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr3, "EXTI8");
    state->u.f4.fld.exticr3.exti9 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr3, "EXTI9");
    state->u.f4.fld.exticr3.exti10 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr3, "EXTI10");
    state->u.f4.fld.exticr3.exti11 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr3, "EXTI11");

    // EXTICR4 bitfields.
    state->u.f4.fld.exticr4.exti12 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr4, "EXTI12");
    state->u.f4.fld.exticr4.exti13 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr4, "EXTI13");
    state->u.f4.fld.exticr4.exti14 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr4, "EXTI14");
    state->u.f4.fld.exticr4.exti15 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr4, "EXTI15");

    // CMPCR bitfields.
    state->u.f4.fld.cmpcr.cmp_pd = cm_object_get_child_by_name(
            state->u.f4.reg.cmpcr, "CMP_PD");
    state->u.f4.fld.cmpcr.ready = cm_object_get_child_by_name(
            state->u.f4.reg.cmpcr, "READY");
}

// ----------------------------------------------------------------------------

// STM32F429ZI
// DO NOT EDIT! Automatically generated!
static void stm32f429x_syscfg_create_objects(Object *obj, JSON_Object *svd,
        const char *name)
{
    STM32SYSCFGState *state = STM32_SYSCFG_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers.
    state->u.f4.reg.memrm = cm_object_get_child_by_name(obj, "MEMRM");
    state->u.f4.reg.pmc = cm_object_get_child_by_name(obj, "PMC");
    state->u.f4.reg.exticr1 = cm_object_get_child_by_name(obj, "EXTICR1");
    state->u.f4.reg.exticr2 = cm_object_get_child_by_name(obj, "EXTICR2");
    state->u.f4.reg.exticr3 = cm_object_get_child_by_name(obj, "EXTICR3");
    state->u.f4.reg.exticr4 = cm_object_get_child_by_name(obj, "EXTICR4");
    state->u.f4.reg.cmpcr = cm_object_get_child_by_name(obj, "CMPCR");

    // MEMRM bitfields.
    state->u.f4.fld.memrm.mem_mode = cm_object_get_child_by_name(
            state->u.f4.reg.memrm, "MEM_MODE");
    state->u.f4.fld.memrm.fb_mode = cm_object_get_child_by_name(
            state->u.f4.reg.memrm, "FB_MODE");
    state->u.f4.fld.memrm.swp_fmc = cm_object_get_child_by_name(
            state->u.f4.reg.memrm, "SWP_FMC");

    // PMC bitfields.
    state->u.f4.fld.pmc.adc1dc2 = cm_object_get_child_by_name(
            state->u.f4.reg.pmc, "ADC1DC2");
    state->u.f4.fld.pmc.adc2dc2 = cm_object_get_child_by_name(
            state->u.f4.reg.pmc, "ADC2DC2");
    state->u.f4.fld.pmc.adc3dc2 = cm_object_get_child_by_name(
            state->u.f4.reg.pmc, "ADC3DC2");
    state->u.f4.fld.pmc.mii_rmii_sel = cm_object_get_child_by_name(
            state->u.f4.reg.pmc, "MII_RMII_SEL");

    // EXTICR1 bitfields.
    state->u.f4.fld.exticr1.exti0 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr1, "EXTI0");
    state->u.f4.fld.exticr1.exti1 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr1, "EXTI1");
    state->u.f4.fld.exticr1.exti2 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr1, "EXTI2");
    state->u.f4.fld.exticr1.exti3 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr1, "EXTI3");

    // EXTICR2 bitfields.
    state->u.f4.fld.exticr2.exti4 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr2, "EXTI4");
    state->u.f4.fld.exticr2.exti5 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr2, "EXTI5");
    state->u.f4.fld.exticr2.exti6 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr2, "EXTI6");
    state->u.f4.fld.exticr2.exti7 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr2, "EXTI7");

    // EXTICR3 bitfields.
    state->u.f4.fld.exticr3.exti8 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr3, "EXTI8");
    state->u.f4.fld.exticr3.exti9 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr3, "EXTI9");
    state->u.f4.fld.exticr3.exti10 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr3, "EXTI10");
    state->u.f4.fld.exticr3.exti11 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr3, "EXTI11");

    // EXTICR4 bitfields.
    state->u.f4.fld.exticr4.exti12 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr4, "EXTI12");
    state->u.f4.fld.exticr4.exti13 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr4, "EXTI13");
    state->u.f4.fld.exticr4.exti14 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr4, "EXTI14");
    state->u.f4.fld.exticr4.exti15 = cm_object_get_child_by_name(
            state->u.f4.reg.exticr4, "EXTI15");

    // CMPCR bitfields.
    state->u.f4.fld.cmpcr.cmp_pd = cm_object_get_child_by_name(
            state->u.f4.reg.cmpcr, "CMP_PD");
    state->u.f4.fld.cmpcr.ready = cm_object_get_child_by_name(
            state->u.f4.reg.cmpcr, "READY");
}

// ----- Private --------------------------------------------------------------

static bool stm32_syscfg_is_enabled(Object *obj)
{
    STM32SYSCFGState *state = STM32_SYSCFG_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void stm32_syscfg_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    STM32SYSCFGState *state = STM32_SYSCFG_STATE(obj);

    // capabilities are not yet available.

    state->enabling_bit = NULL;

    int i;
    for (i = 0; i < sizeof(state->exticr.exti) / sizeof(state->exticr.exti[0]);
            ++i) {
        state->exticr.exti[i] = NULL;
    }
    // No interrupts for now, maybe add boot mode bits.

}

static void stm32_syscfg_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_STM32_SYSCFG)) {
        return;
    }

    STM32MCUState *mcu = stm32_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    STM32SYSCFGState *state = STM32_SYSCFG_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const STM32Capabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "SYSCFG";
    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    char enabling_bit_name[STM32_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case STM32_FAMILY_F0:

        if (capabilities->f0.is_0x1) {

            stm32f0x1_syscfg_create_objects(obj, cm_state->svd_json,
                    periph_name);

        } else if (capabilities->f0.is_0x2) {

            stm32f0x2_syscfg_create_objects(obj, cm_state->svd_json,
                    periph_name);

        } else {
            assert(false);
        }

        // For easier access, also maintain an array.
        state->exticr.exti[0] = state->u.f0.fld.exticr1.exti0;
        state->exticr.exti[1] = state->u.f0.fld.exticr1.exti1;
        state->exticr.exti[2] = state->u.f0.fld.exticr1.exti2;
        state->exticr.exti[3] = state->u.f0.fld.exticr1.exti3;
        state->exticr.exti[4] = state->u.f0.fld.exticr2.exti4;
        state->exticr.exti[5] = state->u.f0.fld.exticr2.exti5;
        state->exticr.exti[6] = state->u.f0.fld.exticr2.exti6;
        state->exticr.exti[7] = state->u.f0.fld.exticr2.exti7;
        state->exticr.exti[8] = state->u.f0.fld.exticr3.exti8;
        state->exticr.exti[9] = state->u.f0.fld.exticr3.exti9;
        state->exticr.exti[10] = state->u.f0.fld.exticr3.exti10;
        state->exticr.exti[11] = state->u.f0.fld.exticr3.exti11;
        state->exticr.exti[12] = state->u.f0.fld.exticr4.exti12;
        state->exticr.exti[13] = state->u.f0.fld.exticr4.exti13;
        state->exticr.exti[14] = state->u.f0.fld.exticr4.exti14;
        state->exticr.exti[15] = state->u.f0.fld.exticr4.exti15;

        snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
        DEVICE_PATH_STM32_RCC "/APB2ENR/SYSCFGEN");

        break;

    case STM32_FAMILY_F4:

        if (capabilities->f4.is_40x) {

            stm32f40x_syscfg_create_objects(obj, cm_state->svd_json,
                    periph_name);

        } else if (capabilities->f4.is_411xx) {

            stm32f411xx_syscfg_create_objects(obj, cm_state->svd_json,
                    periph_name);

        } else if (capabilities->f4.is_429x) {

            stm32f429x_syscfg_create_objects(obj, cm_state->svd_json,
                    periph_name);

        } else {
            assert(false);
        }

        // For easier access, also maintain an array.
        state->exticr.exti[0] = state->u.f4.fld.exticr1.exti0;
        state->exticr.exti[1] = state->u.f4.fld.exticr1.exti1;
        state->exticr.exti[2] = state->u.f4.fld.exticr1.exti2;
        state->exticr.exti[3] = state->u.f4.fld.exticr1.exti3;
        state->exticr.exti[4] = state->u.f4.fld.exticr2.exti4;
        state->exticr.exti[5] = state->u.f4.fld.exticr2.exti5;
        state->exticr.exti[6] = state->u.f4.fld.exticr2.exti6;
        state->exticr.exti[7] = state->u.f4.fld.exticr2.exti7;
        state->exticr.exti[8] = state->u.f4.fld.exticr3.exti8;
        state->exticr.exti[9] = state->u.f4.fld.exticr3.exti9;
        state->exticr.exti[10] = state->u.f4.fld.exticr3.exti10;
        state->exticr.exti[11] = state->u.f4.fld.exticr3.exti11;
        state->exticr.exti[12] = state->u.f4.fld.exticr4.exti12;
        state->exticr.exti[13] = state->u.f4.fld.exticr4.exti13;
        state->exticr.exti[14] = state->u.f4.fld.exticr4.exti14;
        state->exticr.exti[15] = state->u.f4.fld.exticr4.exti15;

        // Actions.
        cm_object_property_set_str(state->u.f4.fld.cmpcr.ready, "CMP_PD",
                "follows");

        snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
        DEVICE_PATH_STM32_RCC "/APB2ENR/SYSCFGEN");

        break;

    default:
        assert(false);
        break;
    }

    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void stm32_syscfg_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset().
    cm_device_parent_reset(dev, TYPE_STM32_SYSCFG);
}

static void stm32_syscfg_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = stm32_syscfg_reset_callback;
    dc->realize = stm32_syscfg_realize_callback;

    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = stm32_syscfg_is_enabled;
}

static const TypeInfo stm32_syscfg_type_info = {
    .name = TYPE_STM32_SYSCFG,
    .parent = TYPE_STM32_SYSCFG_PARENT,
    .instance_init = stm32_syscfg_instance_init_callback,
    .instance_size = sizeof(STM32SYSCFGState),
    .class_init = stm32_syscfg_class_init_callback,
    .class_size = sizeof(STM32SYSCFGClass)
/**/
};

static void stm32_syscfg_register_types(void)
{
    type_register_static(&stm32_syscfg_type_info);
}

type_init(stm32_syscfg_register_types);

// ----------------------------------------------------------------------------

