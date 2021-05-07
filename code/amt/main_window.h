#pragma once

#include "window.h"

namespace amt
{
    template <typename Control>
    class main_window : public window<Control>
    {
    public:
        using window<Control>::window;
    };
}