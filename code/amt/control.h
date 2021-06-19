#pragma once

#include <string>

#include "events/event_handler_list.h"
#include "events/property_changed_event_handler.h"

#include "geom/bounds.h"
#include "geom/color.h"

#include "built_in_control_type.h"

namespace amt
{
    using namespace amt::events;

    class control
    {
        std::string name;

        geom::bounds control_bounds;
        geom::color background_color;

        bool visible;
        event_handler_list<property_changed_event_handler<bool>> visible_changed_handlers;


    public:
        virtual ~control() = default;

        control(const std::string& name = "", built_in_control_type type = built_in_control_type::main_window);

        const std::string& get_name() const noexcept;
        void set_name(const std::string& name) noexcept;

        void set_visible(bool visible) noexcept;
        bool is_visible() const noexcept;
        void add_visible_changed_handler(property_changed_event_handler<bool> ) noexcept;

        const geom::bounds& get_bounds() const noexcept;
        void set_bounds(const geom::bounds& ctrl_bounds);

        const geom::color& get_background_color() const noexcept;
        void set_background_color(const geom::color& background_color);

        size_t get_left() const noexcept;
        size_t get_top() const noexcept;
        size_t get_width() const noexcept;
        size_t get_height() const noexcept;

    protected:
        virtual void process_visible_changed();
    };
}