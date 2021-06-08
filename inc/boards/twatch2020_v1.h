#ifndef __INC_BOARDS_TWATCH2020_V1_H
#define __INC_BOARDS_TWATCH2020_V1_H

/* Screen PinOut */
#define ST7789_SPI_MOSI_IO      (GPIO_NUM_19)
#define ST7789_SPI_SCLK_IO      (GPIO_NUM_18)
#define ST7789_SPI_CS_IO        (GPIO_NUM_5)
#define ST7789_SPI_DC_IO        (GPIO_NUM_27)
#define ST7789_BL_IO            (GPIO_NUM_12)

/* I2C PinOut */
#define I2C_PRI_SDA_PIN         (GPIO_NUM_21)
#define I2C_PRI_SCL_PIN         (GPIO_NUM_22)
#define I2C_SEC_SDA_PIN         (GPIO_NUM_23)
#define I2C_SEC_SCL_PIN         (GPIO_NUM_32)

/* Touth PinOut */
#define TOUCH_INT               (GPIO_NUM_38)

#define RTC_INT_PIN             (GPIO_NUM_37)
#define AXP202_INT              (GPIO_NUM_35)

#define MOTOR_PIN               (GPIO_NUM_4)

#endif /* __INC_BOARDS_TWATCH2020_V1_H */
