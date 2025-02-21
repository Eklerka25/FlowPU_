#include <cstdint>
#include <pu_utils.hpp>
#include <pu.hpp>

uint8_t reg[16][2];

uint8_t Fsis::reg_write(int index, int half, int8_t value) {
    if (index < 16 && index >= 0) {
        reg[index][half] = value;
    } else {
        return ERRORLEVEL_OOR;
    }
}

uint8_t Fsis::reg_read(int index, int half) {
    if (index < 16 && index >= 0) {
        if (index < 1 && index >= 0) {
            return reg[index][half];
        }
    } else {
        return ERRORLEVEL_OOR;
    }
}

uint8_t Fsis::reg_free(int index, int half) {
    if (index < 16 && index >= 0) {
        reg[index][half] = 0x0;
        return ERRORLEVEL_SUC; 
    } else {
        return ERRORLEVEL_OOR;
    }
}
