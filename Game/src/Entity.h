#pragma once

#include <SFML/Graphics.hpp>

//forward declare Main
class Main;

class Entity {

public:
	//gravity and movement
	float gravityAccel = 10;
	sf::Vector2f speed;
	sf::Vector2f position;

	sf::RectangleShape rect;

	//window grabbed from last frame
	sf::RenderWindow* window;

	//store of the main class
	Main* main;

	Entity(Main* main);
	~Entity();

	virtual void render(sf::RenderWindow* window) noexcept;
	virtual void update() noexcept;
};

