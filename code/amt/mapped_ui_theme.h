#pragma once

#include "ui_theme.h"
#include "ui_defaults.h"


#include <unordered_map>

namespace amt
{
    class mapped_ui_theme : public ui_theme
    {
        mutable std::unordered_map<built_in_control_type, amt::ui_defaults_ptr> defaults;

    public:
        const amt::ui_defaults& get_defaults(built_in_control_type type) const override;

    private:
        void install_defaults() const;
        void install_defaults(built_in_control_type) const;

    protected:
        virtual amt::ui_defaults_ptr make_main_window_defaults() const = 0;
    };
}