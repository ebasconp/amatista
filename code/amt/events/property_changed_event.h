#pragma once

#include "event.h"


namespace amt::events
{
    template <typename T>
    class property_changed_event : public event
    {
        T old_value;
        T new_value;

    public:
        property_changed_event(const control& source, const T& old_value, const T& new_value)
            : event{source}, old_value{old_value}, new_value{new_value}
        {
        }

        const T& get_old_value() const noexcept { return old_value; }
        const T& get_new_value() const noexcept { return new_value; }
    };
}