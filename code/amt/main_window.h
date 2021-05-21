#pragma once

#include "window.h"

#include "CControl.h"

namespace amt
{
    template <CControl Control>
    class main_window : public window<Control>
    {
    public:
        main_window(const std::string& name = "") : window<Control>{name}
        {
            this->set_visible(false);
        }
    };
}