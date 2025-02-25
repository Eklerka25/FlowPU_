#include <cstdint>
#include <pu_utils.hpp>
#include <pu.hpp>

Byte Fsis::math_add(Byte read_reg1, Byte read_reg2, Byte store_reg) {
    if (
        read_reg1 < 16 && read_reg1 >= 0 &&
        read_reg2 < 16 && read_reg2 >= 0 &&
        store_reg < 16 && store_reg >= 0
    ) {
        Byte result = this->reg_read(read_reg1) + this->reg_read(read_reg2);
        this->reg_write(store_reg, result);

        if (result < this->reg_read(read_reg1) || result < this->reg_read(read_reg2)) {
            this->FlagSet(FLAG_OVERFLOW);
            return 0;
        }

        this->FlagSet(FLAG_SUCCES);
    } else {
        this->FlagSet(FLAG_OUTOFRANGE);
    }
}
