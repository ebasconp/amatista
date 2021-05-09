#pragma once

#include <cstddef>

namespace amt::geom
{
    class position
    {
        size_t top;
        size_t left;

    public:
        position(size_t left, size_t top);

        size_t get_top() const noexcept;
        size_t get_left() const noexcept;
    };
}