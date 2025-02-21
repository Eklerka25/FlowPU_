#include <pu.hpp>
#include <pu_utils.hpp>

#include <iostream>

int main() {
    Fsis fsis;

    fsis.reg_write(AX, H, 0xFA);
    std::cout << static_cast<int>(fsis.reg_read(AX, H)) << "\n";
    fsis.reg_write(AX, H, 0xAA);
    std::cout << static_cast<int>(fsis.reg_read(AX, H)) << "\n";
    fsis.reg_free(AX, H);
    std::cout << static_cast<int>(fsis.reg_read(AX, H)) << "\n";
}
