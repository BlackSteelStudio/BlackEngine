#include "Engine.h"

Engine::Engine()
{
	// Initialisation des modules
	config.load();

	window = new sf::RenderWindow(sf::VideoMode(config.screenSize.x, config.screenSize.y), "Black Engine");
	render = new Rendering(window);

	
	
	// active le multiThread
	window->setActive(false);
}

Engine::~Engine()
{

}


ConfigLoader* Engine::getConfig()
{
	return &config;
}


Rendering* Engine::getRenderModule()
{
	return render;
}


bool Engine::isOpen()
{
	return window->isOpen();
}



void Engine::launch(void (* instance)(Engine*))
{
	// Initialisation de l'engine
	render->th_launch();
	
	// Start l'instance du jeu
	gameInstance = new thread(instance, this);
	gameInstance->detach();

	
	// Boucle de l'engine
	while (window->isOpen())
	{
		sf::Event event;

		while (window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window->close();
		}

	}
}

