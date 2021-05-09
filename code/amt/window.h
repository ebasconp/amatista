#pragma once

#include "control.h"

namespace amt
{
    template <typename Control>
    class window : public control
    {
        Control main_control;

    public:
        using control::control;
    };
}