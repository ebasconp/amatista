#pragma once

#include "dimension.h"
#include "position.h"


namespace amt::geom
{
    class bounds
    {
        dimension control_dimension;
        position control_position;

    public:
        bounds(dimension control_dimension, position control_position);
        bounds(size_t left, size_t top, size_t width, size_t height);

        const dimension& get_dimension() const noexcept;
        const position& get_position() const noexcept;
    };
}