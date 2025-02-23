#include <cstdint>
#include <pu_utils.hpp>
#include <pu.hpp>

Fsis cpu;
Memory memory;

void Fsis::Reset() {
    for (int x = 0; x < 16; x++) {
        this->reg_free(x, H);
        this->reg_free(x, L);
    }

    for (int x = 0; x < memory.getsize(); x++) {
        memory.free(x);
    }
}

void Fsis::FlagSet(Byte flag) {
    this->reg_write(FLAG, H, flag);
}

u32 Fsis::FlagGet() {
    return this->reg_read(FLAG, H);
}
