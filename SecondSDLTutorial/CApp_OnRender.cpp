#include "CApp.h"

void CApp::OnRender() {
	//Apply the image stretched

	SDL_BlitScaled(gCurrentSurface, NULL, gScreenSurface, &stretchRect);
	
	SDL_UpdateWindowSurface(gWindow);
}