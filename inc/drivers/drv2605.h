#ifndef __INC_DRIVER_DRV2605_H
#define __INC_DRIVER_DRV2605_H

/*!
 * @file drv2605.h
 *
 * This is a library for the Adafruit DRV2605L Haptic Driver ---->
 * http://www.adafruit.com/products/2305
 *
 * Check out the links above for our tutorials and wiring diagrams.
 *
 * This motor/haptic driver uses I2C to communicate.
 *
 * Adafruit invests time and resources providing this open source code,
 * please support Adafruit and open-source hardware by purchasing
 * products from Adafruit!
 *
 * Written by Limor Fried/Ladyada for Adafruit Industries.
 *
 * MIT license, all text above must be included in any redistribution.
 *
 */
/**************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "driver/gpio.h"
#include "driver/i2c.h"
#include "esp_err.h"
#include "esp_log.h"
#include "freertos/task.h"
#include <inttypes.h>
#include <stdbool.h>

#define DRV2605_ADDR                0x5A ///< Device I2C address

#define DRV2605_REG_STATUS          0x00       ///< Status register
#define DRV2605_REG_MODE            0x01         ///< Mode register
#define DRV2605_MODE_INTTRIG        0x00     ///< Internal trigger mode
#define DRV2605_MODE_EXTTRIGEDGE    0x01 ///< External edge trigger mode
#define DRV2605_MODE_EXTTRIGLVL     0x02  ///< External level trigger mode
#define DRV2605_MODE_PWMANALOG      0x03   ///< PWM/Analog input mode
#define DRV2605_MODE_AUDIOVIBE      0x04   ///< Audio-to-vibe mode
#define DRV2605_MODE_REALTIME       0x05    ///< Real-time playback (RTP) mode
#define DRV2605_MODE_DIAGNOS        0x06     ///< Diagnostics mode
#define DRV2605_MODE_AUTOCAL        0x07     ///< Auto calibration mode

#define DRV2605_REG_RTPIN           0x02    ///< Real-time playback input register
#define DRV2605_REG_LIBRARY         0x03  ///< Waveform library selection register
#define DRV2605_REG_WAVESEQ1        0x04 ///< Waveform sequence register 1
#define DRV2605_REG_WAVESEQ2        0x05 ///< Waveform sequence register 2
#define DRV2605_REG_WAVESEQ3        0x06 ///< Waveform sequence register 3
#define DRV2605_REG_WAVESEQ4        0x07 ///< Waveform sequence register 4
#define DRV2605_REG_WAVESEQ5        0x08 ///< Waveform sequence register 5
#define DRV2605_REG_WAVESEQ6        0x09 ///< Waveform sequence register 6
#define DRV2605_REG_WAVESEQ7        0x0A ///< Waveform sequence register 7
#define DRV2605_REG_WAVESEQ8        0x0B ///< Waveform sequence register 8

#define DRV2605_REG_GO              0x0C         ///< Go register
#define DRV2605_REG_OVERDRIVE       0x0D  ///< Overdrive time offset register
#define DRV2605_REG_SUSTAINPOS      0x0E ///< Sustain time offset, positive register
#define DRV2605_REG_SUSTAINNEG      0x0F ///< Sustain time offset, negative register
#define DRV2605_REG_BREAK           0x10      ///< Brake time offset register
#define DRV2605_REG_AUDIOCTRL       0x11  ///< Audio-to-vibe control register
#define DRV2605_REG_AUDIOLVL                                                   \
  0x12 ///< Audio-to-vibe minimum input level register
#define DRV2605_REG_AUDIOMAX                                                   \
  0x13 ///< Audio-to-vibe maximum input level register
#define DRV2605_REG_AUDIOOUTMIN                                                \
  0x14 ///< Audio-to-vibe minimum output drive register
#define DRV2605_REG_AUDIOOUTMAX                                                \
  0x15                          ///< Audio-to-vibe maximum output drive register
#define DRV2605_REG_RATEDV 0x16 ///< Rated voltage register
#define DRV2605_REG_CLAMPV 0x17 ///< Overdrive clamp voltage register
#define DRV2605_REG_AUTOCALCOMP                                                \
  0x18 ///< Auto-calibration compensation result register
#define DRV2605_REG_AUTOCALEMP                                                 \
  0x19                            ///< Auto-calibration back-EMF result register
#define DRV2605_REG_FEEDBACK 0x1A ///< Feedback control register
#define DRV2605_REG_CONTROL1 0x1B ///< Control1 Register
#define DRV2605_REG_CONTROL2 0x1C ///< Control2 Register
#define DRV2605_REG_CONTROL3 0x1D ///< Control3 Register
#define DRV2605_REG_CONTROL4 0x1E ///< Control4 Register
#define DRV2605_REG_VBAT 0x21     ///< Vbat voltage-monitor register
#define DRV2605_REG_LRARESON 0x22 ///< LRA resonance-period register

/**
 * Exposed functions.
 **/

esp_err_t drv2605_init(void);
esp_err_t drv2605_set_waveform(uint8_t slot, uint8_t w);
esp_err_t drv2605_select_library(uint8_t lib);
esp_err_t drv2605_go(void);
esp_err_t drv2605_stop(void);
esp_err_t drv2605_set_mode(uint8_t mode);
esp_err_t drv2605_set_realtime_value(uint8_t rtp);
esp_err_t drv2605_use_erm(void);
esp_err_t drv2605_use_lra(void);
esp_err_t drv2605_self_test(void);

#endif /* __INC_DRIVER_DRV2605_H */