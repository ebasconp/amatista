#pragma once

struct SDL_Window;

namespace amt
{
    class control;

}

namespace amt::backend::sdl2 {
    class sdl2_main_window final {
        amt::control& main_window;

        SDL_Window* window;

    public:
        sdl2_main_window(amt::control& mw);

        void show();
    };
}