#pragma once

#include "amt/geom/bounds.h"

#include <memory>

namespace amt
{
    class ui_defaults
    {
        geom::bounds control_bounds;

    public:
        ui_defaults(const geom::bounds& control_bounds);

        const geom::bounds& get_bounds() const noexcept;
    };

    using ui_defaults_ptr = std::shared_ptr<ui_defaults>;
}