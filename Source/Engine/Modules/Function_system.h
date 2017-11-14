#pragma once
#ifndef FUNCTION_SYSTEM_H
#define FUNCTION_SYSTEM_H

#include <SFML\Graphics.hpp>

#include <Windows.h>
#include <string>
#include <iostream>
using namespace std;


struct ConfigLoader
{
	void load();
	void save();

	sf::Vector2i screenSize;

};

#endif