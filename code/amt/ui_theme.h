#pragma once

#include <string_view>

#include "built_in_control_type.h"

namespace amt
{
    class ui_defaults;

    class ui_theme
    {
    public:
        virtual ~ui_theme() = default;

        virtual const amt::ui_defaults& get_defaults(built_in_control_type type) const = 0;
    };
}