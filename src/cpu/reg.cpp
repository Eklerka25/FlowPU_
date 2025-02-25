#include <cstdint>
#include <iostream>
#include <pu_utils.hpp>
#include <pu.hpp>

Byte reg[16];

Byte Fsis::reg_write(int index, Byte value) {
    if (index < 16 && index >= 0) {
        reg[index] = value;
    } else {
        this->FlagSet(FLAG_OUTOFRANGE);
    }
}

Byte Fsis::reg_read(int index) {
    if (index >= 0 && index < 16) {
        return reg[index];
    } else {
        this->FlagSet(FLAG_OUTOFRANGE);
        return 0;
    } 
}

Byte Fsis::reg_free(int index) {
    if (index < 16 && index >= 0) {
        reg[index] = 0x0;
        this->FlagSet(FLAG_SUCCES);
    } else {
        this->FlagSet(FLAG_OUTOFRANGE);
    }
}
