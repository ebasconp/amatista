#pragma once

#include "dimension.h"
#include "position.h"


namespace amt::geom
{
    class bounds
    {
        position control_position;
        dimension control_dimension;

    public:
        bounds(position control_position, dimension control_dimension);
        bounds(size_t left, size_t top, size_t width, size_t height);

        const position& get_position() const noexcept;
        const dimension& get_dimension() const noexcept;
    };
}