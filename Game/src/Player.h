#pragma once
#include "Entity.h"

class Player : public Entity {
	public:
		sf::RectangleShape rect;

		sf::Vector2f* position = new sf::Vector2f(0, 500);

		Player();
		~Player();

		void render(sf::RenderWindow* window) noexcept;
		void update() noexcept;
};