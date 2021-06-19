#include "color.h"

amt::geom::color::color(uint8_t red, uint8_t green, uint8_t blue)
    : red{red}, green{green}, blue{blue}
{

}

uint8_t amt::geom::color::get_red() const noexcept { return red; }
uint8_t amt::geom::color::get_green() const noexcept { return green; }
uint8_t amt::geom::color::get_blue() const noexcept { return blue; }