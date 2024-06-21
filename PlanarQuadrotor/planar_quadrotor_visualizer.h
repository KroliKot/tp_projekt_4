#pragma once

#include <SDL.h>
#include <SDL2_gfx/SDL2_gfxPrimitives.h>
//#include <sdl_mixer.h>
//#include <SDL_image.h>

#include "planar_quadrotor.h"

class PlanarQuadrotorVisualizer {
private:
    PlanarQuadrotor *quadrotor_ptr;
    float leftBladeAngle=0.0f; 
    float rightBladeAngle=0.0f;
public:
    PlanarQuadrotorVisualizer(PlanarQuadrotor *quadrotor_ptr);
    void render(std::shared_ptr<SDL_Renderer> &gRenderer);
    float mousex=10000000;
    float mousey=10000000;
};
#