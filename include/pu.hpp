#pragma once

#include <cstdint>

class Fsis {
    public:
        uint8_t reg_write(int index, int half, int8_t value);
        uint8_t reg_read(int index, int half);
        uint8_t reg_free(int index, int half);
};
