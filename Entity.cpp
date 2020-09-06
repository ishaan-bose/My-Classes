#include "Entity.hpp"

Entity::Entity(float p_x, float p_y, float p_w, float p_h, float p_mw, float p_mh, SDL_Texture *p_tex)
	:x(p_x), y(p_y), magw(p_mw), magh(p_mh), tex(p_tex)
{
	currentFrame.x = 0;
	currentFrame.y = 0;
	currentFrame.w = p_w;
	currentFrame.h = p_h;
}

float Entity::getX()
{
	return x;
}

float Entity::getY()
{
	return y;
}

SDL_Texture* Entity::getTex()
{
	return tex;
}

SDL_Rect Entity::getCurrentFrame()
{
	return currentFrame;
}

float Entity::getMagw()
{
	return magw;
}

float Entity::getMagh()
{
	return magh;
}
