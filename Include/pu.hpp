#pragma once

#include <Utils/pu.hpp>

class Fsis {
  public:
    void RegWrite(int index, Byte value);
    Byte RegRead(int index);
    void RegFree(int index);

    void Reset();
    void FlagSet(Byte flag);
    Dword FlagGet();

    Byte BitwiseAND(Byte readReg1, Byte readReg2, Byte storeReg);
    Byte BitwiseOR(Byte readReg1, Byte readReg2, Byte storeReg);
    Byte BitwiseXOR(Byte readReg1, Byte readReg2, Byte storeReg);
    Byte BitwiseNAND(Byte readReg1, Byte readReg2, Byte storeReg);
    Byte BitwiseNOR(Byte readReg1, Byte readReg2, Byte storeReg);
    Byte BitwiseNOT(Byte readReg, Byte storeReg);

    Byte MathAdd(Byte readReg1, Byte readReg2, Byte storeReg);

    Byte Execute(char* inst, char* arg1, Byte arg2, Byte arg3);
};

class Ram {
  public:
    void alloc(int index, Byte value);
    void write(int index, Byte value);
    Byte read(int index);
    void free(int index);

    Dword getsize();
};

class Rom {
  public:
    Byte read(Dword index, Byte reg);

    Dword getsize();
};

extern Fsis cpu;
extern Ram ram;
extern Rom rom;