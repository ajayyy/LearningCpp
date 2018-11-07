#pragma once

#ifndef MAIN_H
#define MAIN_H

#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Ground.h"

class Main {

public:
	Player* player;
	Ground* ground;

	Main();
	~Main();

	void render(sf::RenderWindow* window) noexcept;
	void update() noexcept;

};

#endif

