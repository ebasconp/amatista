#pragma once

#include "property_changed_event.h"

namespace amt::events
{
    template <typename T>
    using property_changed_event_handler = void (*)(property_changed_event<T>& );
}