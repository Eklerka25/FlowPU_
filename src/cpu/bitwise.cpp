#include <Utils/pu.hpp>
#include <cstdint>
#include <pu.hpp>

#include <cstring>

Byte Fsis::BitwiseAND(Byte readReg1, Byte readReg2, Byte storeReg) {
    if (readReg1 < 16 && readReg2 < 16 && storeReg < 16) {
        Byte result = this->RegRead(readReg1) & this->RegRead(readReg2);
        this->RegWrite(storeReg, result);
        return result;
    }
    this->FlagSet(flag::OUTOFRANGE);
    return 0;
}

Byte Fsis::BitwiseOR(Byte readReg1, Byte readReg2, Byte storeReg) {
    if (readReg1 < 16 && readReg2 < 16 && storeReg < 16) {
        Byte result = this->RegRead(readReg1) | this->RegRead(readReg2);
        this->RegWrite(storeReg, result);
        return result;
    }
    this->FlagSet(flag::OUTOFRANGE);
    return 0;
}

Byte Fsis::BitwiseXOR(Byte readReg1, Byte readReg2, Byte storeReg) {
    if (readReg1 < 16 && readReg2 < 16 && storeReg < 16) {
        Byte result = this->RegRead(readReg1) ^ this->RegRead(readReg2);
        this->RegWrite(storeReg, result);
        return result;
    }
    this->FlagSet(flag::OUTOFRANGE);
    return 0;
}

Byte Fsis::BitwiseNAND(Byte readReg1, Byte readReg2, Byte storeReg) {
    if (readReg1 < 16 && readReg2 < 16 && storeReg < 16) {
        Byte result = ~(this->RegRead(readReg1) & this->RegRead(readReg2));
        this->RegWrite(storeReg, result);
        return result;
    }
    this->FlagSet(flag::OUTOFRANGE);
    return 0;
}

Byte Fsis::BitwiseNOR(Byte readReg1, Byte readReg2, Byte storeReg) {
    if (readReg1 < 16 && readReg2 < 16 && storeReg < 16) {
        Byte result = ~(this->RegRead(readReg1) | this->RegRead(readReg2));
        this->RegWrite(storeReg, result);
        return result;
    }
    this->FlagSet(flag::OUTOFRANGE);
    return 0;
}

Byte Fsis::BitwiseNOT(Byte readReg, Byte storeReg) {
    if (readReg < 16 && storeReg < 16) {
        Byte result = ~this->RegRead(readReg);
        this->RegWrite(storeReg, result);
        return result;
    }
    this->FlagSet(flag::OUTOFRANGE);
    return 0;
}

// MaqiX was here