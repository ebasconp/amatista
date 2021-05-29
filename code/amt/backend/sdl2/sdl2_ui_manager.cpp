#include "sdl2_ui_manager.h"

#include "clsn/console.h"

#include "SDL2/SDL.h"

amt::backend::sdl2::sdl2_ui_manager::sdl2_ui_manager()
{
    clsn::console::println("Initializing SDL2");
    SDL_Init(SDL_INIT_VIDEO);
}

amt::backend::sdl2::sdl2_ui_manager::~sdl2_ui_manager()
{
    clsn::console::println("Exiting SDL2");
    SDL_Quit();
}