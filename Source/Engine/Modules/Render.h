#pragma once

#ifndef RENDER_H
#define RENDER_H

#include <SFML\Graphics.hpp>
#include <SFML\System.hpp>

#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;

class Rendering
{
	public:
		Rendering(sf::RenderWindow *window);

		void th_launch();
		void th_terminate();

		void addDrawingObject(string name, const sf::Drawable* object);

	private:

		void run();

		unordered_map<string, const sf::Drawable*> drawObjects;

		sf::Thread m_thread;
		sf::RenderWindow *pWindow;
};

#endif