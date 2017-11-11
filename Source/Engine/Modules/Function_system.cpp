#include "Function_system.h"

void ConfigLoader::load()
{
	// Gestion de l'écran
	screenSize.x = GetPrivateProfileInt("Screen", "width", 800, "./Config/engineConfig.ini");
	screenSize.y = GetPrivateProfileInt("Screen", "height", 600, "./Config/engineConfig.ini");

}


void ConfigLoader::save()
{
	// Gestion screen
	WritePrivateProfileString("Screen", "width", to_string(screenSize.x).c_str(), "./Config/engineConfig.ini");
	WritePrivateProfileString("Screen", "height", to_string(screenSize.y).c_str(), "./Config/engineConfig.ini");

}