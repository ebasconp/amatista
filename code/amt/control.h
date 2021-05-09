#pragma once

#include <string>

#include "geom/bounds.h"

namespace amt
{
    class control
    {
        std::string name;

        geom::bounds control_bounds;

    public:
        virtual ~control() = default;

        control(const std::string& name = "");

        const std::string& get_name() const noexcept;
        void set_name(const std::string& name) noexcept;
    };
}