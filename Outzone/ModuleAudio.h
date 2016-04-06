#ifndef _MODULEAUDIO_H_
#define _MODULEAUDIO_H_

#include "Module.h"
#include "SDL_mixer\include\SDL_mixer.h"


class ModuleAudio : public Module
{
public:
	Mix_Music* Level_1_Theme;

public:

	ModuleAudio();
	~ModuleAudio();

	bool Init();
	bool Start();
	bool CleanUp();
	update_status Update();
};

#endif