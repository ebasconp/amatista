#include "ui_defaults.h"


amt::ui_defaults::ui_defaults(
        const geom::bounds& control_bounds)
           : control_bounds{control_bounds}
{
}

const amt::geom::bounds& amt::ui_defaults::get_bounds() const noexcept
{
    return control_bounds;
}