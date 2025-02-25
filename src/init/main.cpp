#include <Utils/pu.hpp>
#include <pu.hpp>

#include <iostream>

using std::cout;

Fsis cpu;
Ram ram;
Rom rom;

int main() {
    cpu.Reset();

    cpu.RegWrite(AX, 0b10110011);
    cpu.RegWrite(BX, 0b01111111);
    cout << "CPU                \033[92mAX\033[0m : " << static_cast<int>(cpu.RegRead(AX)) << nl;
    cout << "CPU                \033[92mBX\033[0m : " << static_cast<int>(cpu.RegRead(BX)) << nl;
    cpu.MathAdd(AX, BX, CX);
    cout << "CPU                \033[92mCX\033[0m : " << static_cast<int>(cpu.RegRead(CX)) << nl;
    cout << "CPU              \033[92mFLAG\033[0m : " << static_cast<int>(cpu.FlagGet()) << nl;
}
