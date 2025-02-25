#pragma once

#include <pu_utils.hpp>

class Fsis {
    public:
        Byte reg_write(int index, Byte value);
        Byte reg_read(int index);
        Byte reg_free(int index);

        void Reset();
        void FlagSet(Byte flag);
        Dword FlagGet();

        void bitwise_and(Byte read_reg1, Byte read_reg2, Byte store_reg);
        void bitwise_or(Byte read_reg1, Byte read_reg2, Byte store_reg);
        void bitwise_xor(Byte read_reg1, Byte read_reg2, Byte store_reg);
        void bitwise_nand(Byte read_reg1, Byte read_reg2, Byte store_reg);
        void bitwise_nor(Byte read_reg1, Byte read_reg2, Byte store_reg);
        void bitwise_not(Byte read_reg, Byte store_reg);

        Byte math_add(Byte read_reg1, Byte read_reg2, Byte store_reg);
};

class Ram {
    public:
        void write(int index, Byte value);
        Byte read(int index);
        Byte free(int index);
        
        Dword getsize();
};

class Rom {
    public:
        Byte read(Dword index, Byte reg);
        
        Dword getsize();
};
