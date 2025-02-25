#include <Utils/pu.hpp>
#include <cstdint>
#include <pu.hpp>

Byte Fsis::MathAdd(Byte readReg1, Byte readReg2, Byte storeReg) {
    if (readReg1 < 16 && readReg1 >= 0 && readReg2 < 16 && readReg2 >= 0 && storeReg < 16 && storeReg >= 0) {
        Byte result = this->RegRead(readReg1) + this->RegRead(readReg2);
        this->RegWrite(storeReg, result);

        if (result < this->RegRead(readReg1) || result < this->RegRead(readReg2)) {
            this->FlagSet(flag::OVERFLOW);
            return 0;
        }

        this->FlagSet(flag::SUCCES);
    } else {
        this->FlagSet(flag::OUTOFRANGE);
    }

    return 0;
}
