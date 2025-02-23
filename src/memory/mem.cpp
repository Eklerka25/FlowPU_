#include <cstdint>
#include <pu_utils.hpp>
#include <pu.hpp>

const u32 mem_size = 512;

Byte mem[mem_size];

void Memory::alloc(int index, Byte value) {
    Fsis cpu;
    if (index >= 0 && index < mem_size) {
        mem[index] = value;
        cpu.FlagSet(FLAG_SUCCES);
    } else {
        cpu.FlagSet(FLAG_OUTOFRANGE);
    }
}

Byte Memory::read(int index) {
    Fsis cpu;
    if (index >= 0 && index < mem_size) {
        cpu.FlagSet(FLAG_SUCCES);
        return mem[index];
    } else {
        cpu.FlagSet(FLAG_OUTOFRANGE);
        return 0;
    }
}

Byte Memory::free(int index) {
    Fsis cpu;
    if (index >= 0 && index < mem_size) {
        mem[index] = 0x0;
        cpu.FlagSet(FLAG_SUCCES);
    } else {
        cpu.FlagSet(FLAG_OUTOFRANGE);
    }
}

u32 Memory::getsize() {
    return mem_size;
}
