/*
 * @Author: xu_tie_feng xu_tie_feng@163.com
 * @Date: 2024-02-02 19:38:16
 * @LastEditors: xu_tie_feng xu_tie_feng@163.com
 * @LastEditTime: 2024-02-27 02:36:08
 * @FilePath: \spi_lcd_touch\managed_components\espressif__esp_lcd_st7796s\include\esp_lcd_st7796s.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/*
 * SPDX-FileCopyrightText: 2021 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include "esp_lcd_panel_vendor.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Create LCD panel for model GC9A01
 *
 * @param[in] io LCD panel IO handle
 * @param[in] panel_dev_config general panel device configuration
 * @param[out] ret_panel Returned LCD panel handle
 * @return
 *          - ESP_ERR_INVALID_ARG   if parameter is invalid
 *          - ESP_ERR_NO_MEM        if out of memory
 *          - ESP_OK                on success
 */
esp_err_t esp_lcd_new_panel_st7796s(const esp_lcd_panel_io_handle_t io, const esp_lcd_panel_dev_config_t *panel_dev_config, esp_lcd_panel_handle_t *ret_panel);
#define ONFIG_EXAMPLE_LCD_TOUCH_ENABLED 1
#ifdef __cplusplus
}
#endif
