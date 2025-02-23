#pragma once

#include <pu_utils.hpp>

class Fsis {
    public:
        Byte reg_write(int index, int half, Byte value);
        Byte reg_read(int index, int half);
        Byte reg_free(int index, int half);

        void Reset();
        void FlagSet(Byte flag);
        u32 FlagGet();
};

class Memory {
    public:
        void alloc(int index, Byte value);
        Byte read(int index);
        Byte free(int index);
        
        u32 getsize();
};
