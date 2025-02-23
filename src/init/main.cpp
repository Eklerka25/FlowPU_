#include <pu.hpp>
#include <pu_utils.hpp>

#include <iostream>

using std::cout;

int main() {
    Fsis cpu;
    Memory memory;

    cpu.Reset();
    
    cpu.reg_write(AX, H, 0xFF);
    cout << "CPU            AX : " << static_cast<int>(cpu.reg_read(AX, H)) << nl;
    cout << "CPU          FLAG : " << static_cast<int>(cpu.FlagGet()) << nl;

    memory.alloc(10, 0xff);
    cout << "MEMORY 0x0000000A : " << static_cast<int>(memory.read(10)) << nl;
    cout << "CPU          FLAG : " << static_cast<int>(cpu.FlagGet()) << nl;
}
