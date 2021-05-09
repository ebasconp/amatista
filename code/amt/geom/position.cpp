#include "position.h"

amt::geom::position::position(size_t left, size_t top)
    : left{left}, top{top}
{

}

size_t amt::geom::position::get_top() const noexcept
{
    return top;
}


size_t amt::geom::position::get_left() const noexcept
{
    return left;
}