#pragma once
#include <SFML\Graphics.hpp>
#include <SFML\System.hpp>


class Rendering
{
	public:
		Rendering(sf::RenderWindow *window);

		void th_launch();
		void th_terminate();

	private:

		void run();

		sf::Thread m_thread;
		sf::RenderWindow *pWindow;
};

