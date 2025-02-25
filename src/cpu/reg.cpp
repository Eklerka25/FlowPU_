#include <Utils/pu.hpp>
#include <cstdint>
#include <iostream>
#include <pu.hpp>

Byte reg[16];

void Fsis::RegWrite(int index, Byte value) {
    if (index < 16 && index >= 0) {
        reg[index] = value;
    } else {
        this->FlagSet(flag::OUTOFRANGE);
    }
}

Byte Fsis::RegRead(int index) {
    if (index >= 0 && index < 16) {
        return reg[index];
    } else {
        this->FlagSet(flag::OUTOFRANGE);
        return 0;
    }
}

void Fsis::RegFree(int index) {
    if (index < 16 && index >= 0) {
        reg[index] = 0x0;
        this->FlagSet(flag::SUCCES);
    } else {
        this->FlagSet(flag::OUTOFRANGE);
    }
}
