// mpconfigboard.h

#pragma once

#define MICROPY_HW_BOARD_NAME       "ArcheryTrainer V2"
#define MICROPY_HW_MCU_NAME         "nRF52840"

// --- FIX BLUETOOTH (Già discusso) ---
#define BOARD_HAS_32KHZ_XTAL        (0)

// --- LED DI STATO ---
#define MICROPY_HW_LED_STATUS       (&pin_P0_22)
#define MICROPY_HW_LED_STATUS_INVERTED (1)

// --- CONFIGURAZIONE USB (NUOVA SEZIONE) ---
// Questi ID dicono al PC che siamo un dispositivo CircuitPython generico.
// Se usi ID a caso, Windows potrebbe non caricare i driver automaticamente.
#define MICROPY_HW_USB_VID          (0x239A) // Adafruit / CircuitPython VID
#define MICROPY_HW_USB_PID          (0x8029) // Generic nRF52840 CircuitPython PID

#define MICROPY_HW_USB_MANUFACTURER "TuoNome"
#define MICROPY_HW_USB_PRODUCT      "Archery Trainer"

// --- MEMORIA FLASH (Opzionale ma consigliato) ---
// Definisce quanto spazio dedicare al disco "CIRCUITPY".
// L'nRF52840 ha 1MB. Lasciamo spazio per bootloader e firmware,
// il resto va al filesystem. (0 = Auto-detect massimo possibile)
#define CIRCUITPY_INTERNAL_FLASH_FILESYSTEM_SIZE (0)

// --- PIN DI DEFAULT PER I BUS ---
#define DEFAULT_I2C_BUS_SCL         (&pin_P0_27)
#define DEFAULT_I2C_BUS_SDA         (&pin_P0_26)

#define DEFAULT_SPI_BUS_SCK         (&pin_P0_03)
#define DEFAULT_SPI_BUS_MOSI        (&pin_P0_13)
#define DEFAULT_SPI_BUS_MISO        (&pin_P0_16)