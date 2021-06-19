#pragma once

#include <cstdint>

namespace amt::geom
{
    class color
    {
        uint8_t red;
        uint8_t green;
        uint8_t blue;

    public:
        color(uint8_t red, uint8_t green, uint8_t blue);

        uint8_t get_red() const noexcept;
        uint8_t get_green() const noexcept;
        uint8_t get_blue() const noexcept;

    };
}