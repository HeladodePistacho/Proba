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

	if (SDL_Init(SDL_INIT_AUDIO) < 0){
		LOG("error SDLaudio")
		return false;
	}

	int flag = MIX_INIT_OGG;
	int inited_flags = Mix_Init(flag);

	if (inited_flags == 0) {
		return false;
	}

	if (Mix_OpenAudio(22050, AUDIO_S16SYS, 1, 1024) == -1){
		
		return false;
	}

	Level_1_Theme = Mix_LoadMUS("1st_Level_Theme.ogg");

	if (!Level_1_Theme){
		LOG("error loadmus, %s", Mix_GetError());
		return false;
	}

	return true;
}

bool ModuleAudio::Start()
{
	
	Mix_PlayMusic(Level_1_Theme, -1);
	
	
	return true;
}

update_status ModuleAudio::Update()
{
	
	

	return UPDATE_CONTINUE;
}



bool ModuleAudio::CleanUp()
{
	LOG("Destroying audio");

	Mix_FreeMusic(Level_1_Theme);
	Mix_CloseAudio();
	Mix_Quit();

	return true;
}
