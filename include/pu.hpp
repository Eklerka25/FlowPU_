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

        Byte bitwise_and(Byte read_reg1, Byte read_reg2, Byte store_reg);
        Byte bitwise_or(Byte read_reg1, Byte read_reg2, Byte store_reg);
        Byte bitwise_xor(Byte read_reg1, Byte read_reg2, Byte store_reg);
        Byte bitwise_nand(Byte read_reg1, Byte read_reg2, Byte store_reg);
        Byte bitwise_nor(Byte read_reg1, Byte read_reg2, Byte store_reg);
        Byte bitwise_not(Byte read_reg, Byte store_reg);

        Byte Execute(char* inst, char* arg1, Byte arg2, Byte arg3);
};

class Ram {
    public:
        void write(int index, Byte value);
        Byte read(int index);
        Byte free(int index);
        
        Dword getsize();
};
