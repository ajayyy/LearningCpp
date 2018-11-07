#pragma once
#include "Entity.h"

class Player : public Entity {
	public:
		Player();
		~Player();

		void render(sf::RenderWindow* window) noexcept;
		void update() noexcept;
};