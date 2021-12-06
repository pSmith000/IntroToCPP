#include "StartScene.h"
#include <iostream>

void StartScene::draw()
{
	std::cout << "Welcome to the game!\n\nWould you like to:" << std::endl;
}

void StartScene::update()
{
	char playerInput = '\0';
	bool validInput = false;

	while (!validInput)
	{
		std::cout << "1. Play Game\n2. Quit" << std::endl;
		std::cout << "(Type the number of your choice) > ";
		std::cin >> playerInput;

		if (playerInput == '1')
		{
			
		}

	}

	
}
