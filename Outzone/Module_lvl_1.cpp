#include "Globals.h"
#include "Application.h"
#include "ModuleTextures.h"
#include "ModuleRender.h"
#include "Module_lvl_1.h"

Module_lvl_1::Module_lvl_1()
{

	// Level 1 
	background.x = 0;
	background.y = 0;
	background.w = 240;
	background.h = 3900;

}

Module_lvl_1::~Module_lvl_1()
{}

// Load assets
bool Module_lvl_1::Start()
{
	LOG("Loading background assets");
	bool ret = true;
	graphics = App->textures->Load("level1.png");
	return ret;
}

// Update: draw background
update_status Module_lvl_1::Update()
{
	// Draw everything --------------------------------------
	App->render->Blit(graphics, 0, -3580, &background,0.75f); // lvl 1 background

	return UPDATE_CONTINUE;
}