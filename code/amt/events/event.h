#pragma once

namespace amt
{
    class control;
}

namespace amt::events
{
    using namespace amt;

    class event
    {
        const control& source;
        bool consumed;

    public:
        event(const control& source);
        virtual ~event() = default;

        const control& get_source() const noexcept;

        bool is_consumed() const noexcept;
        void consume() noexcept;
    };
}