#ifndef __lvl_2__
#define __lvl_2__

#include "Module.h"
#include "Animation.h"
#include "Globals.h"

struct SDL_Texture;

class Module_lvl_2 : public Module
{
public:
	Module_lvl_2();
	~Module_lvl_2();

	bool Start();
	update_status Update();
	bool CleanUp();

public:

	SDL_Texture* graphics = nullptr;
	SDL_Rect background;
};

#endif