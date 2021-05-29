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
            "SDL2Test",
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            640,
            480,
            0
    );

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);

    SDL_Delay(3000);

    SDL_DestroyWindow(window);
}