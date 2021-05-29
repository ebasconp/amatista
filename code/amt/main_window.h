#pragma once

#include "built_in_control_type.h"
#include "ui_manager.h"
#include "window.h"

#include "CControl.h"

#include "backend/backend_main_window.h"

namespace amt
{
    using namespace backend;

    template <CControl Control>
    class main_window : public window<Control>
    {
        backend_main_window be_main_window;

    public:
        main_window(const std::string& name = "")
            : window<Control>{ name, built_in_control_type::main_window },
              be_main_window(*this)
        {
            this->set_visible(false);
        }

    protected:
        void process_visible_changed() override
        {
            control::process_visible_changed();

            if (this->is_visible())
            {
                be_main_window.show();
                return;
            }
        }
    };
}