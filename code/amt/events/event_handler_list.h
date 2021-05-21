#pragma once

#include <vector>

namespace amt::events
{
    template <typename EventHandlerType>
    class event_handler_list
    {
        std::vector<EventHandlerType> handlers;

    public:
        void add_handler(EventHandlerType handler)
        {
            handlers.push_back(handler);
        }

        void notify(auto& e)
        {
            for (auto& handler : handlers)
            {
                if (!e.is_consumed())
                    handler(e);
            }
        }
    };
}