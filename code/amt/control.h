#pragma once

#include <string>

namespace amt
{
    class control
    {
        std::string name;

    public:
        virtual ~control() = default;

    public:
        control(const std::string& name);

        const std::string& get_name() const noexcept;
        void set_name(const std::string& name) noexcept;
    };
}