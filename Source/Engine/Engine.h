#pragma once

#include "Modules\Render.h"
#include "Modules\Function_system.h"

#include <SFML\System.hpp>
#include <SFML\Graphics.hpp>

#include <Windows.h>
#include <thread>
#include <iostream>

using namespace std;

class Engine
{
	public:
		Engine();
		~Engine();

		void launch(void(*function)(Engine*));

		ConfigLoader* getConfig();
		Rendering* getRenderModule();

		bool isOpen();

	private:

		sf::RenderWindow *window;

		// load .ini files
		ConfigLoader config;

		// Modules Principaux
		Rendering *render;
};

