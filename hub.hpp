// src/hub.hpp
#ifndef HUB_HPP
#define HUB_HPP

#include <SDL2/SDL.h>

class Hub {
public:
    static SDL_Window* window;
    static SDL_Renderer* renderer;
    static bool running;

    static void init(SDL_Window* win);
    static void run();
    static void quit();
    static void handleEvents();
    static void update();
    static void render();
};

#endif
