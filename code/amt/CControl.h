#pragma once


namespace amt
{
    template<typename T>
    concept CControl = std::is_base_of<control, T>::value;
}