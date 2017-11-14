#pragma once

#ifndef ENGINE_H
#define ENGINE_H

#include "Modules\Render.h"
#include "Modules\Function_system.h"

#include <SFML\System.hpp>
#include <SFML\Graphics.hpp>

#include <thread>
using namespace std;

class Engine
{
	public:
		Engine();
		~Engine();

		void launch(void(* instance)(Engine*));

		ConfigLoader* getConfig();
		Rendering* getRenderModule();

		bool isOpen();

	private:

		sf::RenderWindow *window;

		// GameInstance
		thread* gameInstance;

		// load .ini files
		ConfigLoader config;
		// Modules Principaux
		Rendering *render;
};

#endif

