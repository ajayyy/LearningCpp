#pragma once

#include <SFML/Graphics.hpp>
#include "Player.h"

class Main {

public:
	Player* player;

	Main();
	~Main();

	void render(sf::RenderWindow* window) noexcept;
	void update() noexcept;

};

