#include "default_ui_theme.h"


amt::ui_defaults_ptr amt::default_ui_theme::make_main_window_defaults() const
{
    return std::make_shared<amt::ui_defaults>(
            amt::geom::bounds{ 200, 200, 400, 300 },
            amt::geom::color{ 0, 40, 80}
    );
}

