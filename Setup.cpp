#include "Setup.h"
#include <SDL2/SDL.h> //May change depending on comp
#include <SDL2_image/SDL_image.h>//May change depending on comp


//Constructor
Setup::Setup(void) {
    window = SDL_CreateWindow( "SDL Tutorial", 100, 100, 600, 400, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
    check = new SDL_Event();
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}

//Deconstructor
Setup::~Setup(void) {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    delete check;
}

SDL_Renderer* Setup::renderGet(void) {
    return renderer;
}

SDL_Event* Setup::eventGet(void) {
    return check;
}
