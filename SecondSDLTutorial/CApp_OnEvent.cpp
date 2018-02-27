#include "CApp.h"

void CApp::OnEvent(SDL_Event* Event) {
	if (Event->type == SDL_QUIT) {
		Running = false;
	}
	//User presses a key
	else if (Event->type == SDL_KEYDOWN)
	{
		//Select surfaces based on key press
		switch (Event->key.keysym.sym)
		{
		case SDLK_UP:
			gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];
			break;

		case SDLK_DOWN:
			gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];
			break;

		case SDLK_LEFT:
			gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];
			break;

		case SDLK_RIGHT:
			gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];
			break;

		default:
			gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];
			break;
		}
	}
}