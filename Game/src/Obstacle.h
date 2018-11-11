#pragma once

#include "Entity.h"

class Obstacle : public Entity{

public:
	Obstacle(Main* main);
	Obstacle(Main* main, sf::Vector2f position, sf::Vector2f size, sf::Color color);
	~Obstacle();

	void render(sf::RenderWindow* window) noexcept;
	void update() noexcept;
};