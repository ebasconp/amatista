#include "ui_defaults.h"


amt::ui_defaults::ui_defaults(
        const geom::bounds& control_bounds,
        const geom::color& background_color)
           : control_bounds{control_bounds},
             background_color{background_color}
{
}

const amt::geom::bounds& amt::ui_defaults::get_bounds() const noexcept
{
    return control_bounds;
}

const amt::geom::color& amt::ui_defaults::get_background_color() const noexcept
{
    return background_color;
}