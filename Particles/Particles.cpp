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
		if (screen.processEvents() == false)
		{
			break;
		}
	}
	
	screen.close();

	return 0;
}