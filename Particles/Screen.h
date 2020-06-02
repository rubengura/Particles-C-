#pragma once

#include <iostream>
#include "SDL.h"

namespace particle {

class Screen
{
public:
	const static int SCREEN_WIDTH = 800;
	const static int SCREEN_HEIGHT = 600;

private:
	// By convention, when you have member variables, the prefix "m_" must be put before the variable.
	// This will make clear they are instance variables, not local variables.
	SDL_Window* m_window;
	SDL_Renderer* m_renderer;
	SDL_Texture* m_texture;
	Uint32* m_buffer;

public:
	Screen();
	bool init();
	bool processEvents();
	void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	void update();
	void close();
};

}