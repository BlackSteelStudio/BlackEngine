#pragma once

#include <Windows.h>
#include <string>
#include <iostream>

using namespace std;

#include <SFML\Graphics.hpp>


struct ConfigLoader
{
	void load();
	void save();

	sf::Vector2i screenSize;

};