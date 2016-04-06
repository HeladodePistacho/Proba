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

public:
	
	SDL_Texture* graphics = nullptr;
	SDL_Rect background;
#define MAP_SIZE 3896
};

#endif