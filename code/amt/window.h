#pragma once

#include "control.h"

namespace amt
{
    template <typename Control>
    class window : public control
    {
        Control main_control;

    public:
        window(const std::string& name, built_in_control_type type)
            : control{name, type}
        {

        }
    };
}