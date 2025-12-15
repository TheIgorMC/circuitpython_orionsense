# mpconfigboard.mk

# VID Adafruit (standard per CircuitPython)
USB_VID = 0x239A

# PID Generico per nRF52840 (0x8029) invece di quello Raytac DB-40 (0x80BC)
# Questo aiuta Windows a capire che è un dispositivo generico CircuitPython
USB_PID = 0x8029

# I nomi che appariranno su Windows/Mac/Linux
USB_PRODUCT = "Archery Trainer V2"
USB_MANUFACTURER = "Orion Electronics"

# Configurazione Chip
MCU_CHIP = nrf52840
MCU_SUB_VARIANT = nrf52840

# Abilita il filesystem (La chiavetta CIRCUITPY)
INTERNAL_FLASH_FILESYSTEM = 1

# Ottimizzazione (Opzionale, di solito si lascia default)
# LONGINT_IMPL = MPZ
