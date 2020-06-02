#include <iostream>
#include "SDL.h"
#include <math.h>
#include "Screen.h"

using namespace std;
using namespace particle;

int main(int argc, char* argv[])
{
	Screen screen;
	if (screen.init() == false)
	{
		cout << "Error initializing screen." << endl;
	}
	
	while (true)
	{
		int elapsed = SDL_GetTicks();
		unsigned char green = (unsigned char)((1 + sin(elapsed * 0.0001) * 128));
		unsigned char red = (unsigned char)((1 + cos(elapsed * 0.0001) * 128));
		unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.0002) * 128));

		// Updating screen
		for (int y = 0; y < Screen::SCREEN_HEIGHT; y++)
		{
			for (int x = 0; x < Screen::SCREEN_WIDTH; x++)
			{
				screen.setPixel(x, y, red, green, blue);
			}
		}

		screen.update();

		if (screen.processEvents() == false)
		{
			break;
		}
	}
	
	screen.close();

	return 0;
}