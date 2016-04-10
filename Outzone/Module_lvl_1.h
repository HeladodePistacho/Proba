#ifndef __ModuleBackground_H__
#define __ModuleBackground_H__

#include "Module.h"
#include "Animation.h"
#include "Globals.h"

struct SDL_Texture;

class Module_lvl_1 : public Module
{
public:
	Module_lvl_1();
	~Module_lvl_1();

	bool Start();
	update_status Update();
	bool CleanUp();
public:
	
	SDL_Texture* graphics = nullptr;
	SDL_Rect background;
	uint map_size = 3896;
};

#endif