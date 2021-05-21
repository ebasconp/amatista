#pragma once

#include <string>

#include "events/event_handler_list.h"
#include "events/property_changed_event_handler.h"

#include "geom/bounds.h"

namespace amt
{
    using namespace amt::events;

    class control
    {
        std::string name;

        geom::bounds control_bounds;

        bool visible;
        event_handler_list<property_changed_event_handler<bool>> visible_changed_handlers;


    public:
        virtual ~control() = default;

        control(const std::string& name = "");

        const std::string& get_name() const noexcept;
        void set_name(const std::string& name) noexcept;

        void set_visible(bool visible) noexcept;
        bool is_visible() const noexcept;
        void add_visible_changed_handler(property_changed_event_handler<bool> ) noexcept;

    protected:
        virtual void process_visible_changed();
    };
}