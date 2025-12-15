// pins.c per Archery Trainer V2
// Basato sullo schematico: MDBT50Q-1MV2

#include "shared-bindings/board/__init__.h"

static const mp_rom_map_elem_t board_module_globals_table[] = {
    // --- PIN FISICI PURI (Utili per debug o usi generici) ---
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    // --- LED (Mappati secondo Schematico Pagina 3) ---
    // P0.21 = RLED, P0.22 = GLED, P0.24 = BLED
    // Nota: I LED sono attivi BASSI (Inverted = 1 nel mpconfigboard.h)
    { MP_ROM_QSTR(MP_QSTR_LED_RED),    MP_ROM_PTR(&pin_P0_21) },
    { MP_ROM_QSTR(MP_QSTR_R),          MP_ROM_PTR(&pin_P0_21) }, // Alias corto
    
    { MP_ROM_QSTR(MP_QSTR_LED_GREEN),  MP_ROM_PTR(&pin_P0_22) },
    { MP_ROM_QSTR(MP_QSTR_G),          MP_ROM_PTR(&pin_P0_22) }, // Alias corto
    { MP_ROM_QSTR(MP_QSTR_LED),        MP_ROM_PTR(&pin_P0_22) }, // Standard CircuitPython status LED
    
    { MP_ROM_QSTR(MP_QSTR_LED_BLUE),   MP_ROM_PTR(&pin_P0_24) },
    { MP_ROM_QSTR(MP_QSTR_B),          MP_ROM_PTR(&pin_P0_24) }, // Alias corto

    // --- SPI BUS (Per ADXL345 - Schematico Pagina 1 e 3) ---
    // SCK=P0.03, MOSI=P0.13, MISO=P0.16
    { MP_ROM_QSTR(MP_QSTR_SCK),        MP_ROM_PTR(&pin_P0_03) },
    { MP_ROM_QSTR(MP_QSTR_MOSI),       MP_ROM_PTR(&pin_P0_13) },
    { MP_ROM_QSTR(MP_QSTR_MISO),       MP_ROM_PTR(&pin_P0_16) },
    
    // Chip Select ADXL
    { MP_ROM_QSTR(MP_QSTR_ADXL_CS),    MP_ROM_PTR(&pin_P0_14) },
    { MP_ROM_QSTR(MP_QSTR_CS),         MP_ROM_PTR(&pin_P0_14) }, // Alias comodo

    // --- I2C BUS (Per BNO085 - Schematico Pagina 1 e 3) ---
    // SDA=P0.26, SCL=P0.27
    { MP_ROM_QSTR(MP_QSTR_SDA),        MP_ROM_PTR(&pin_P0_26) },
    { MP_ROM_QSTR(MP_QSTR_SCL),        MP_ROM_PTR(&pin_P0_27) },

    // --- BATTERIA ---
    // P0.02 / AIN0 è collegato al partitore di tensione
    { MP_ROM_QSTR(MP_QSTR_BATTERY),    MP_ROM_PTR(&pin_P0_02) },
    { MP_ROM_QSTR(MP_QSTR_VOLTAGE),    MP_ROM_PTR(&pin_P0_02) },
    { MP_ROM_QSTR(MP_QSTR_A0),         MP_ROM_PTR(&pin_P0_02) },

    // --- UART (Opzionale, basato sui pin standard se ti servono) ---
    // RX=P0.08, TX=P0.06 (Standard Raytac, verifica se li usi davvero)
    { MP_ROM_QSTR(MP_QSTR_TX),         MP_ROM_PTR(&pin_P0_06) },
    { MP_ROM_QSTR(MP_QSTR_RX),         MP_ROM_PTR(&pin_P0_08) },
};

MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);