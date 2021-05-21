#include "control.h"


amt::control::control(const std::string& name)
    : name{name}, control_bounds{0, 0, 0, 0}
{

}

const std::string&
amt::control::get_name() const noexcept
{
    return name;
}

void
amt::control::set_name(const std::string& name) noexcept
{
    this->name = name;
}

void
amt::control::set_visible(bool visible) noexcept
{
    if (this->visible == visible)
        return;

    this->visible = visible;
    process_visible_changed();
}

bool
amt::control::is_visible() const noexcept
{
    return visible;
}

void
amt::control::add_visible_changed_handler(property_changed_event_handler<bool> handler) noexcept
{
    visible_changed_handlers.add_handler(handler);
}


void
amt::control::process_visible_changed()
{
    auto e = property_changed_event<bool>{ *this, !visible, visible };
    visible_changed_handlers.notify(e);
}