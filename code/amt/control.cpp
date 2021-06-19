#include "control.h"
#include "built_in_control_type.h"
#include "ui_defaults.h"
#include "ui_manager.h"

amt::control::control(const std::string& name, amt::built_in_control_type type)
    : name{name},
      control_bounds{ amt::ui_manager::get_defaults(type).get_bounds()},
      background_color{ amt::ui_manager::get_defaults(type).get_background_color() }
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

const amt::geom::bounds& amt::control::get_bounds() const noexcept
{
    return control_bounds;
}


void amt::control::set_bounds(const amt::geom::bounds& ctrl_bounds)
{
    this->control_bounds = ctrl_bounds;
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

size_t amt::control::get_left() const noexcept
{
    return control_bounds.get_position().get_left();
}


size_t amt::control::get_top() const noexcept
{
    return control_bounds.get_position().get_top();
}


size_t amt::control::get_width() const noexcept
{
    return control_bounds.get_dimension().get_width();
}


size_t amt::control::get_height() const noexcept
{
    return control_bounds.get_dimension().get_height();
}


const amt::geom::color& amt::control::get_background_color() const noexcept
{
    return background_color;
}


void amt::control::set_background_color(const geom::color& background_color)
{
    this->background_color = background_color;
}

