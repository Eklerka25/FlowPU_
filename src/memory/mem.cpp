#include <cstdint>
#include <pu_utils.hpp>
#include <pu.hpp>

const Dword ram_size = 64 * 1024;

Byte _ram[ram_size];

void Ram::write(int index, Byte value) {
    Fsis cpu;
    if (index >= 0 && index < ram_size) {
        _ram[index] = value;
        cpu.FlagSet(FLAG_SUCCES);
    } else {
        cpu.FlagSet(FLAG_OUTOFRANGE);
    }
}

Byte Ram::read(int index) {
    Fsis cpu;
    if (index >= 0 && index < ram_size) {
        cpu.FlagSet(FLAG_SUCCES);
        return _ram[index];
    } else {
        cpu.FlagSet(FLAG_OUTOFRANGE);
        return 0;
    }
}

Byte Ram::free(int index) {
    Fsis cpu;
    if (index >= 0 && index < ram_size) {
        _ram[index] = 0x0;
        cpu.FlagSet(FLAG_SUCCES);
    } else {
        cpu.FlagSet(FLAG_OUTOFRANGE);
    }
}

Dword Ram::getsize() {
    return ram_size;
}
