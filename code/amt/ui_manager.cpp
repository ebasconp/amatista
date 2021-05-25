#include "ui_manager.h"

#include "default_ui_theme.h"
#include "ui_defaults.h"

amt::ui_manager& amt::ui_manager::get_instance()
{
    static ui_manager instance;
    return instance;
}

const amt::ui_defaults& amt::ui_manager::get_defaults(amt::built_in_control_type type)
{
    return get_instance().get_theme().get_defaults(type);
}


amt::ui_theme& amt::ui_manager::get_theme()
{
    if (theme == nullptr)
    {
        theme = std::make_shared<amt::default_ui_theme>();
    }

    return *theme;
}

const amt::ui_theme& amt::ui_manager::get_theme() const
{
    if (theme == nullptr)
    {
        theme = std::make_shared<amt::default_ui_theme>();
    }

    return *theme;
}