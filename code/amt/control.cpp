#include "control.h"


amt::control::control(const std::string& name)
    : name{name}, control_bounds{0, 0, 0, 0}
{

}

const std::string&
amt::control::get_name() const noexcept
{
    return name;
}

void amt::control::set_name(const std::string& name) noexcept
{
    this->name = name;
}