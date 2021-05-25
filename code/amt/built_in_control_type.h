#pragma once

#include <cstddef>

namespace amt
{
    enum class built_in_control_type
    {
        main_window,

        no_control
    };

    constexpr size_t get_built_in_control_type_count()
    {
        return static_cast<size_t>(built_in_control_type::no_control);
    }

    constexpr built_in_control_type get_built_in_control_type_by_index(size_t index)
    {
        return static_cast<built_in_control_type>(index);
    }

}