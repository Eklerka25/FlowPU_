#include <cstdint>
#include <pu_utils.hpp>
#include <pu.hpp>

#include <cstring>

Fsis cpu;
Ram ram;

void Fsis::Reset() {
    for (int x = 0; x < 16; x++) {
        this->reg_free(x);
    }

    for (int x = 0; x < ram.getsize(); x++) {
        ram.free(x);
    }
}

void Fsis::FlagSet(Byte flag) {
    this->reg_write(FLAG, flag);
}

Dword Fsis::FlagGet() {
    return this->reg_read(FLAG);
}
