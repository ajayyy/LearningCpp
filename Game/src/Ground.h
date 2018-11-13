#pragma once

#include "pch.h"
#include "Entity.h"

class Obstacle;

class Ground : public Entity {

public:
	sf::Color color = sf::Color(99, 78, 56);

	std::vector<Obstacle*> obstacles;

	Ground(Main* main);
	~Ground();

	void render(sf::RenderWindow* window) noexcept;
	void update() noexcept;

	void generateObstacles(float start, float distance);
};
