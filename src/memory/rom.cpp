#include <Utils/pu.hpp>
#include <cstdint>
#include <pu.hpp>

const Dword romSize = 32 * KB;

Byte _rom[romSize];

Byte Rom::read(Dword index, Byte reg) {
    Fsis cpu;
    if (index < 16 && index >= 0) {
        cpu.RegWrite(reg, _rom[index]);
        cpu.FlagSet(flag::SUCCES);
    } else {
        cpu.FlagSet(flag::OUTOFRANGE);
    }
}

Dword Rom::getsize() {
    return romSize;
}
