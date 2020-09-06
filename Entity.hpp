#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Entity
{
public:
	Entity(float p_x, float p_y, float p_w, float p_h, float p_mw, float p_mh, SDL_Texture *p_tex);

	float getX();
	float getY();

	float getMagh();
	float getMagw();

	SDL_Texture* getTex();
	SDL_Rect getCurrentFrame();

private:
	//position
	float x, y;
	//magnify width and height
	float magw, magh;
	//how much of the image should be used/cropped and what part
	SDL_Rect currentFrame;
	//texture
	SDL_Texture *tex;
};
