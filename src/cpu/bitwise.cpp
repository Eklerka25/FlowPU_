#include <cstdint>
#include <pu_utils.hpp>
#include <pu.hpp>

void Fsis::bitwise_and(Byte read_reg1, Byte read_reg2, Byte store_reg) {
    if (
        read_reg1 < 16 && read_reg1 >= 0 &&
        read_reg2 < 16 && read_reg2 >= 0 &&
        store_reg < 16 && store_reg >= 0
    ) {
        this->reg_write(store_reg, this->reg_read(read_reg1) & this->reg_read(read_reg2));
        this->FlagSet(FLAG_SUCCES);
    } else {
        this->FlagSet(FLAG_OUTOFRANGE);
    }
}

void Fsis::bitwise_or(Byte read_reg1, Byte read_reg2, Byte store_reg) {
    if (
        read_reg1 < 16 && read_reg1 >= 0 &&
        read_reg2 < 16 && read_reg2 >= 0 &&
        store_reg < 16 && store_reg >= 0
    ) {
        this->reg_write(store_reg, this->reg_read(read_reg1) | this->reg_read(read_reg2));
        this->FlagSet(FLAG_SUCCES);
    } else {
        this->FlagSet(FLAG_OUTOFRANGE);
    }
}

void Fsis::bitwise_xor(Byte read_reg1, Byte read_reg2, Byte store_reg) {
    if (
        read_reg1 < 16 && read_reg1 >= 0 &&
        read_reg2 < 16 && read_reg2 >= 0 &&
        store_reg < 16 && store_reg >= 0
    ) {
        this->reg_write(store_reg, this->reg_read(read_reg1) ^ this->reg_read(read_reg2));
        this->FlagSet(FLAG_SUCCES);
    } else {
        this->FlagSet(FLAG_OUTOFRANGE);
    }
}

void Fsis::bitwise_nand(Byte read_reg1, Byte read_reg2, Byte store_reg) {
    if (
        read_reg1 < 16 && read_reg1 >= 0 &&
        read_reg2 < 16 && read_reg2 >= 0 &&
        store_reg < 16 && store_reg >= 0
    ) {
        this->reg_write(store_reg, ~(this->reg_read(read_reg1) & this->reg_read(read_reg2)));
        this->FlagSet(FLAG_SUCCES);
    } else {
        this->FlagSet(FLAG_OUTOFRANGE);
    }
}

void Fsis::bitwise_nor(Byte read_reg1, Byte read_reg2, Byte store_reg) {
    if (
        read_reg1 < 16 && read_reg1 >= 0 &&
        read_reg2 < 16 && read_reg2 >= 0 &&
        store_reg < 16 && store_reg >= 0
    ) {
        this->reg_write(store_reg, ~(this->reg_read(read_reg1) | this->reg_read(read_reg2)));
        this->FlagSet(FLAG_SUCCES);
    } else {
        this->FlagSet(FLAG_OUTOFRANGE);
    }
}

void Fsis::bitwise_not(Byte read_reg, Byte store_reg) {
    if (
        read_reg < 16 && read_reg >= 0 &&
        store_reg < 16 && store_reg >= 0
    ) {
        this->reg_write(store_reg, ~this->reg_read(read_reg));
        this->FlagSet(FLAG_SUCCES);
    } else {
        this->FlagSet(FLAG_OUTOFRANGE);
    }
}
