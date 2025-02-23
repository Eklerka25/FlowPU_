#include <cstdint>
#include <iostream>
#include <pu_utils.hpp>
#include <pu.hpp>

Byte reg[16][2];

Byte Fsis::reg_write(int index, int half, Byte value) {
    Fsis cpu;
    if (index < 16 && index >= 0) {
        reg[index][half] = value;
    } else {
        this->FlagSet(FLAG_OUTOFRANGE);
    }
}

Byte Fsis::reg_read(int index, int half) {
    Fsis cpu;
    if (index >= 0 && index < 16) {
        return reg[index][half];
    } else {
        this->FlagSet(FLAG_OUTOFRANGE);
        return 0;
    } 
}

Byte Fsis::reg_free(int index, int half) {
    Fsis cpu;
    if (index < 16 && index >= 0) {
        reg[index][half] = 0x0;
        this->FlagSet(FLAG_SUCCES);
    } else {
        this->FlagSet(FLAG_OUTOFRANGE);
    }
}
