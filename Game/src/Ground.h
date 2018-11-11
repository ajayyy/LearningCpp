#pragma once

#include "pch.h"
#include "Entity.h"

class Obstacle;

class Ground : public Entity {

public:

	std::vector<Obstacle*> obstacles;

	Ground(Main* main);
	~Ground();

	void render(sf::RenderWindow* window) noexcept;
	void update() noexcept;
};
