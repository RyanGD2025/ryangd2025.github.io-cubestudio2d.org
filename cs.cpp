// src/cs.cpp
#include <SDL2/SDL.h>
#include <iostream>
#include "hub.hpp"

int main(int argc, char* argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "Erro ao iniciar SDL: " << SDL_GetError() << std::endl;
        return -1;
    }

    SDL_Window* window = SDL_CreateWindow(
        "Cube Studio 2D", 
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        1280, 720, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE
    );

    if (!window) {
        std::cerr << "Erro ao criar janela: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return -1;
    }

    Hub::init(window);
    Hub::run();

    Hub::quit();
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
