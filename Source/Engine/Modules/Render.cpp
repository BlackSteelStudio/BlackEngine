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


void Rendering::run()
{
	// active la fenetre
	pWindow->setActive(true);

	// Boucle de rendu
	while (pWindow->isOpen())
	{

		pWindow->display();
	}
}
