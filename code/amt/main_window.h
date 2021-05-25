#pragma once

#include "built_in_control_type.h"
#include "ui_manager.h"
#include "window.h"

#include "CControl.h"

namespace amt
{
    template <CControl Control>
    class main_window : public window<Control>
    {
    public:
        main_window(const std::string& name = "") : window<Control>{ name, built_in_control_type::main_window }
        {
            this->set_visible(false);
        }
    };
}