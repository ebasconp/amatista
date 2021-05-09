#pragma once

#include "window.h"

#include "CControl.h"

namespace amt
{
    template <CControl Control>
    class main_window : public window<Control>
    {
    public:
        using window<Control>::window;
    };
}