#pragma once

#include "built_in_control_type.h"

#include "backend/backend_ui_manager.h"

#include <memory>

namespace amt
{
    class ui_theme;
    class ui_defaults;

    class ui_manager
    {
        mutable std::shared_ptr<ui_theme> theme;

        backend::backend_ui_manager be_ui_manager;

    public:
        static ui_manager& get_instance();

        static const ui_defaults& get_defaults(built_in_control_type type);


        ui_theme& get_theme();
        const ui_theme& get_theme() const;

        template <typename Theme, typename... Args>
        void make_and_set_theme(Args&... args)
        {
            theme = std::make_shared<Theme>(std::forward<Args>(args)...);
        }

    private:
        ui_manager() = default;

        ui_manager(const ui_manager&) = delete;
        ui_manager(ui_manager&&) = delete;

        ui_manager& operator=(const ui_manager&) = delete;
        ui_manager& operator=(ui_manager&& ) = delete;
    };
}