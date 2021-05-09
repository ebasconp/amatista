#include "dimension.h"

amt::geom::dimension::dimension(size_t width, size_t height)
    : width{width}, height{height}
{

}

size_t amt::geom::dimension::get_width() const noexcept
{
    return width;
}

size_t amt::geom::dimension::get_height() const noexcept
{
    return height;
}