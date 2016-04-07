#include "SDL/include/SDL.h"
#include "Application.h"
#include "ModuleAudio.h"
#include "SDL_mixer/include/SDL_mixer.h"
#pragma comment(lib, "SDL_mixer/libx86/SDL2_mixer.lib")




ModuleAudio::ModuleAudio() : Module()
{}

ModuleAudio::~ModuleAudio(){}

bool ModuleAudio::Init()
{
	LOG("Creating audio stuf");

	SDL_Init(SDL_INIT_AUDIO);
	int flag = MIX_INIT_OGG;
	int inited_flags = Mix_Init(flag);
	
	Mix_OpenAudio(22050, MIX_DEFAULT_FORMAT, 2, 4096);

	

	return true;
}

bool ModuleAudio::Start()
{
	
	Level_1_Theme = Mix_LoadMUS("1st_Level_Theme.ogg");
	Mix_PlayMusic(Level_1_Theme, -1);
	
	
	return true;
}




bool ModuleAudio::CleanUp()
{
	LOG("Destroying audio");

	Mix_FreeMusic(Level_1_Theme);
	Mix_CloseAudio();
	Mix_Quit();

	return true;
}
