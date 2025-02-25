#include <cstdint>
#include <pu_utils.hpp>
#include <pu.hpp>

const Dword rom_size = 32 * KB;

Byte _rom[rom_size];

Byte Rom::read(Dword index, Byte reg) {
    Fsis cpu;
    if (index < 16 && index >= 0) {
        cpu.reg_write(reg, _rom[index]);
        cpu.FlagSet(FLAG_SUCCES);
    } else {
        cpu.FlagSet(FLAG_OUTOFRANGE);
    }
}

Dword Rom::getsize() {
    Fsis cpu;
    return rom_size;
}
