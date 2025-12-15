// mpconfigboard.h
#pragma once

#define MICROPY_HW_BOARD_NAME       "Archery Trainer V2"
#define MICROPY_HW_MCU_NAME         "nRF52840"

// --- FIX BLUETOOTH (Fondamentale) ---
#define BOARD_HAS_32KHZ_XTAL        (0)

// --- LED DI STATO ---
#define MICROPY_HW_LED_STATUS       (&pin_P0_22)
#define MICROPY_HW_LED_STATUS_INVERTED (1)

// --- PIN DI DEFAULT BUS ---
#define DEFAULT_I2C_BUS_SCL         (&pin_P0_27)
#define DEFAULT_I2C_BUS_SDA         (&pin_P0_26)

#define DEFAULT_SPI_BUS_SCK         (&pin_P0_03)
#define DEFAULT_SPI_BUS_MOSI        (&pin_P0_13)
#define DEFAULT_SPI_BUS_MISO        (&pin_P0_16)
