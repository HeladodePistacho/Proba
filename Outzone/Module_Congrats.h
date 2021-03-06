#ifndef __ModuleCONGRATS_H__
#define __ModuleCONGRATS_H__

#include "Module.h"
#include "Animation.h"
#include "Globals.h"

struct SDL_Texture;

class Module_Congrats : public Module
{
public:
	Module_Congrats();
	~Module_Congrats();

	bool Start();
	update_status Update();
	bool CleanUp();

public:

	SDL_Texture* graphics = nullptr;
	SDL_Rect background;

};

#endif