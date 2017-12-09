#include "GameInstance.h"


#include <cstdlib>
#include <string>
#include <vector>

void game(Engine *pEngine)
{
	Rendering* render = pEngine->getRenderModule();

	ConfigLoader* loader = pEngine->getConfig();

	// Affiche un cercle
	
	std::vector<sf::CircleShape> shape(10000);

	for(int i=0;i<10000;i++)
	{
		shape[i].setRadius(5);
		shape[i].setPosition(float(rand() % loader->screenSize.x), float(rand() % loader->screenSize.y));
		shape[i].setFillColor(sf::Color::Blue);

		render->addDrawingObject(std::to_string(i), &shape[i]);
	}


	while (pEngine->isOpen())
	{
		Sleep(6);

		for (int i = 0; i<10000; i++)
		{
			shape[i].move(float(rand() % 2), float(rand() % 2));
		}

	}

}
