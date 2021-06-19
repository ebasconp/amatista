#pragma once

#include "amt/geom/bounds.h"
#include "amt/geom/color.h"

#include <memory>

namespace amt
{
    class ui_defaults
    {
        geom::bounds control_bounds;
        geom::color background_color;

    public:
        ui_defaults(
                const geom::bounds& control_bounds,
                const geom::color& background_color);

        const geom::bounds& get_bounds() const noexcept;
        const geom::color& get_background_color() const noexcept;
    };

    using ui_defaults_ptr = std::shared_ptr<ui_defaults>;
}