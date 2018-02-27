#pragma once


#include <iostream>
#include <SDL.h>

//Key press surfaces constants
enum KeyPressSurfaces
{
	KEY_PRESS_SURFACE_DEFAULT,
	KEY_PRESS_SURFACE_UP,
	KEY_PRESS_SURFACE_DOWN,
	KEY_PRESS_SURFACE_LEFT,
	KEY_PRESS_SURFACE_RIGHT,
	KEY_PRESS_SURFACE_TOTAL
};

class CApp {
private:
	bool    Running;

	//Screen dimension constants
	const int SCREEN_WIDTH;
	const int SCREEN_HEIGHT;

	SDL_Rect stretchRect;

	SDL_Window*		gWindow;
	SDL_Surface*	gScreenSurface;
	SDL_Surface*	gCurrentSurface;
	SDL_Surface*	gKeyPressSurfaces[KEY_PRESS_SURFACE_TOTAL];


	SDL_Surface* loadSurface( std::string path);
	bool loadMedia();

public:

	CApp();

	int OnExecute();


	bool OnInit();

	void OnEvent(SDL_Event* Event);

	void OnLoop();

	void OnRender();

	void OnCleanup();
};

