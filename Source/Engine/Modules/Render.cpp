#include "Render.h"

Rendering::Rendering(sf::RenderWindow *window) : pWindow(window), m_thread(&Rendering::run, this)
{

}


void Rendering::th_launch()
{
	m_thread.launch();
}

void Rendering::th_terminate()
{
	m_thread.terminate();
}


void Rendering::addDrawingObject(string name, const sf::Drawable* object)
{
	drawObjects.insert(pair<string, const sf::Drawable*>(name, object));
}


void Rendering::run()
{
	// Boucle de rendu

	pWindow->setVerticalSyncEnabled(true);

	while (pWindow->isOpen())
	{
		pWindow->clear(sf::Color::White);


		for (unordered_map<string, const sf::Drawable*>::iterator item = drawObjects.begin(); item != drawObjects.end(); item++)
		{
			pWindow->draw(*item->second);
		}

		pWindow->display();
	}
}
