#include <iostream>
#include "SDL.h"
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
		// Updating screen
		for (int y = 0; y < Screen::SCREEN_HEIGHT; y++)
		{
			for (int x = 0; x < Screen::SCREEN_WIDTH; x++)
			{
				screen.setPixel(x, y, 128, 0, 255);
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