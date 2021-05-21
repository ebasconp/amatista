#include "event.h"

#include "amt/control.h"

amt::events::event::event(const control& source)
    : source{source}, consumed{false}
{

}

const amt::control&
amt::events::event::get_source() const noexcept
{
    return source;
}

bool
amt::events::event::is_consumed() const noexcept
{
    return consumed;
}

void
amt::events::event::consume() noexcept
{
    consumed = true;
}