#include "mapped_ui_theme.h"

#include <stdexcept>

const amt::ui_defaults&
amt::mapped_ui_theme::get_defaults(built_in_control_type type) const
{
    if (defaults.empty())
        install_defaults();

    auto it = defaults.find(type);
    if (it == defaults.end())
        throw std::out_of_range("Defaults for control type not installed");

    return *(it->second);
}

void amt::mapped_ui_theme::install_defaults() const
{
    for (auto i = 0; i < amt::get_built_in_control_type_count(); i++)
    {
        install_defaults(amt::get_built_in_control_type_by_index(i));
    }
}

void amt::mapped_ui_theme::install_defaults(amt::built_in_control_type type) const
{
    switch (type)
    {
        case amt::built_in_control_type::main_window:
            defaults.insert(std::make_pair(amt::built_in_control_type::main_window, make_main_window_defaults()));
            break;
    }
}

