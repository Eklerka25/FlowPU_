#include <pu.hpp>
#include <pu_utils.hpp>

#include <iostream>

using std::cout;

int main() {
    Fsis cpu;
    Ram ram;
    Rom rom;

    cpu.Reset();

    cpu.reg_write(AX, 0b10110011);
    cpu.reg_write(BX, 0b01111111);
    cout << "CPU                [92mAX[0m : " << static_cast<int>(cpu.reg_read(AX)) << nl;
    cout << "CPU                [92mBX[0m : " << static_cast<int>(cpu.reg_read(BX)) << nl;
    cpu.math_add(AX, BX, CX);
    cout << "CPU                [92mCX[0m : " << static_cast<int>(cpu.reg_read(CX)) << nl;
    cout << "CPU              [92mFLAG[0m : " << static_cast<int>(cpu.FlagGet()) << nl;
}
