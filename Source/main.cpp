#include "Engine\Engine.h"

#include <iostream>

void game(Engine* pEngine)
{

	while (pEngine->isOpen())
	{

		std::cout << "Test" << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(4));
	}

}



int main()
{
	Engine test;
	test.launch(&game);

	return 0;
}
