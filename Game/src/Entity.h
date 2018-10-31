#pragma once

#include <SFML/Graphics.hpp>

class Entity {

public:
	Entity();
	~Entity();

	sf::Vector2f position;

	virtual void render(sf::RenderWindow* window) noexcept;
	virtual void update() noexcept;
};

