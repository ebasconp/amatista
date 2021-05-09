#pragma once

#include <cstddef>

namespace amt::geom
{
    class dimension
    {
        size_t width;
        size_t height;

    public:
        dimension(size_t width, size_t height);

        size_t get_width() const noexcept;
        size_t get_height() const noexcept;
    };
}