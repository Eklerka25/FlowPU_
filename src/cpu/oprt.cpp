#include <cstdint>
#include <pu_utils.hpp>
#include <pu.hpp>

#include <cstring>

Byte Fsis::bitwise_and(Byte read_reg1, Byte read_reg2, Byte store_reg) {
    if (
        read_reg1 < 16 && read_reg1 >= 0 &&
        read_reg2 < 16 && read_reg2 >= 0 &&
        store_reg < 16 && store_reg >= 0
    ) {
        this->reg_write(store_reg, this->reg_read(read_reg1) & this->reg_read(read_reg2));
    } else {
        this->FlagSet(FLAG_OUTOFRANGE);
    }
}

Byte Fsis::bitwise_or(Byte read_reg1, Byte read_reg2, Byte store_reg) {
    if (
        read_reg1 < 16 && read_reg1 >= 0 &&
        read_reg2 < 16 && read_reg2 >= 0 &&
        store_reg < 16 && store_reg >= 0
    ) {
        this->reg_write(store_reg, this->reg_read(read_reg1) | this->reg_read(read_reg2));
    } else {
        this->FlagSet(FLAG_OUTOFRANGE);
    }
}

Byte Fsis::bitwise_xor(Byte read_reg1, Byte read_reg2, Byte store_reg) {
    if (
        read_reg1 < 16 && read_reg1 >= 0 &&
        read_reg2 < 16 && read_reg2 >= 0 &&
        store_reg < 16 && store_reg >= 0
    ) {
        this->reg_write(store_reg, this->reg_read(read_reg1) ^ this->reg_read(read_reg2));
    } else {
        this->FlagSet(FLAG_OUTOFRANGE);
    }
}

Byte Fsis::bitwise_nand(Byte read_reg1, Byte read_reg2, Byte store_reg) {
    if (
        read_reg1 < 16 && read_reg1 >= 0 &&
        read_reg2 < 16 && read_reg2 >= 0 &&
        store_reg < 16 && store_reg >= 0
    ) {
        this->reg_write(store_reg, ~(this->reg_read(read_reg1) & this->reg_read(read_reg2)));
    } else {
        this->FlagSet(FLAG_OUTOFRANGE);
    }
}

Byte Fsis::bitwise_nor(Byte read_reg1, Byte read_reg2, Byte store_reg) {
    if (
        read_reg1 < 16 && read_reg1 >= 0 &&
        read_reg2 < 16 && read_reg2 >= 0 &&
        store_reg < 16 && store_reg >= 0
    ) {
        this->reg_write(store_reg, ~(this->reg_read(read_reg1) | this->reg_read(read_reg2)));
    } else {
        this->FlagSet(FLAG_OUTOFRANGE);
    }
}

Byte Fsis::bitwise_not(Byte read_reg, Byte store_reg) {
    if (
        read_reg < 16 && read_reg >= 0 &&
        store_reg < 16 && store_reg >= 0
    ) {
        this->reg_write(store_reg, ~this->reg_read(read_reg));
    } else {
        this->FlagSet(FLAG_OUTOFRANGE);
    }
}
