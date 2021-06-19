#include "sdl2_main_window.h"

#include "SDL2/SDL.h"

#include "amt/control.h"


amt::backend::sdl2::sdl2_main_window::sdl2_main_window(amt::control& mw)
    : main_window{mw}, window{nullptr}
{
}

void
amt::backend::sdl2::sdl2_main_window::show()
{
    window = SDL_CreateWindow(
            main_window.get_name().data(),
            main_window.get_left(),
            main_window.get_top(),
            main_window.get_width(),
            main_window.get_height(),
            0
    );

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);

    auto& bc = main_window.get_background_color();

    SDL_SetRenderDrawColor(renderer, bc.get_red(), bc.get_green(), bc.get_blue(), SDL_ALPHA_OPAQUE);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);

    SDL_Delay(3000);

    SDL_DestroyWindow(window);
}
