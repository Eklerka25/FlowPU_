#include <Utils/pu.hpp>
#include <cstdint>
#include <pu.hpp>

const uint32 memSize = 512;

Byte mem[memSize];

void Ram::alloc(int index, Byte value) {
    if (index >= 0 && index < memSize) {
        mem[index] = value;
        cpu.FlagSet(flag::SUCCES);
    } else {
        cpu.FlagSet(flag::OUTOFRANGE);
    }
}

Byte Ram::read(int index) {
    if (index >= 0 && index < memSize) {
        cpu.FlagSet(flag::SUCCES);
        return mem[index];
    } else {
        cpu.FlagSet(flag::OUTOFRANGE);
        return 0;
    }
}

void Ram::free(int index) {
    if (index >= 0 && index < memSize) {
        mem[index] = 0x0;
        cpu.FlagSet(flag::SUCCES);
    } else {
        cpu.FlagSet(flag::OUTOFRANGE);
    }
}

Dword Ram::getsize() { return memSize; }
