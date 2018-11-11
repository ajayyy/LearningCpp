#pragma once

#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Ground.h"

#include <chrono>

class Main {

public:
	Player* player;
	Ground* ground;

	sf::Vector2f size;

	//variable used to make sure movements happen the same at different frame rates
	double deltaTime;
	std::chrono::duration<double> lastTime;

	Main(sf::Vector2f size);
	~Main();

	void render(sf::RenderWindow* window) noexcept;
	void update() noexcept;

};

