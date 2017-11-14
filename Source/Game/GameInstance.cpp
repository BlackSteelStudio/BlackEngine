#include "GameInstance.h"


void game(Engine *pEngine)
{
	Rendering* render = pEngine->getRenderModule();

	// Affiche un cercle

	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);
	shape.setPosition(300, 300);

	render->addDrawingObject("rond", &shape);


	while (pEngine->isOpen())
	{
		Sleep(1000);
	}

}
