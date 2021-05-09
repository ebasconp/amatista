#include "bounds.h"

amt::geom::bounds::bounds(amt::geom::dimension control_dimension, amt::geom::position control_position)
    : control_dimension{control_dimension},
      control_position{control_position}
{

}


amt::geom::bounds::bounds(size_t left, size_t top, size_t width, size_t height)
    : amt::geom::bounds::bounds({left, top}, {width, height})
{

}

const amt::geom::dimension& amt::geom::bounds::get_dimension() const noexcept
{
    return control_dimension;
}

const amt::geom::position& amt::geom::bounds::get_position() const noexcept
{
    return control_position;
}
