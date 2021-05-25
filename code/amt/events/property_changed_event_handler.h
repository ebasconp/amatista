#pragma once

#include "property_changed_event.h"

#include <functional>

namespace amt::events
{
    template <typename T>
    using property_changed_event_handler = std::function<void(property_changed_event<T>&)>;
}