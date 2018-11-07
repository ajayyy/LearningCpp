#pragma once

#include <SFML/Graphics.hpp>

class Entity {

public:
	//gravity and movement
	float gravityAccel = 10;
	sf::Vector2f* speed = new sf::Vector2f(0.1f, 0);
	sf::Vector2f* position = new sf::Vector2f(0, 500);

	sf::RectangleShape rect;

	//window grabbed from last frame
	sf::RenderWindow* window;

	Entity();
	~Entity();

	virtual void render(sf::RenderWindow* window) noexcept;
	virtual void update() noexcept;
};

