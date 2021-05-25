#pragma once

#include "mapped_ui_theme.h"

#include <string>
#include <unordered_map>

namespace amt
{
    class default_ui_theme : public mapped_ui_theme
    {
    public:
        amt::ui_defaults_ptr make_main_window_defaults() const override;

    };
}