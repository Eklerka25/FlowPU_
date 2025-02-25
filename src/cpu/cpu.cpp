#include <Utils/pu.hpp>
#include <cstdint>
#include <pu.hpp>

#include <cstring>

void Fsis::Reset() {
    for (int x = 0; x < 16; x++) {
        this->RegFree(x);
    }

    for (Dword x = 0; x < ram.getsize(); x++) {
        ram.free(x);
    }
}

void Fsis::FlagSet(Byte flag) {
    if (FLAG < 16 && FLAG >= 0) {
        this->RegWrite(FLAG, flag);
    }
}

Dword Fsis::FlagGet() { return this->RegRead(FLAG); }
