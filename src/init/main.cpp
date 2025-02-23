#include <pu.hpp>
#include <pu_utils.hpp>

#include <iostream>

using std::cout;

int main() {
    Fsis cpu;
    
    cpu.reg_write(AX, H, 0xFF);
    cout << static_cast<int>(cpu.reg_read(FLAG, H)) << nl;
    cout << static_cast<int>(cpu.FlagGet()) << nl;
}
