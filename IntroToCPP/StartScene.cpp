#include "StartScene.h"
#include "Engine.h"
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
			system("pause");
			system("cls");
			Engine::setCurrentScene(1);
			validInput = true;
		}
		else if (playerInput == '2')
		{
			Engine::setApplicationShouldClose(true);
		}
		else
		{
			std::cout << "Incorrect Option. Try Again." << std::endl;
			system("pause");
			system("cls");
		}
	}

	
}
