#include "pch.h"

#ifndef GROUND_H
#define GROUND_H

#include "Entity.h"

class Ground : public Entity {
	public:
		Ground(Main* main);
		~Ground();

		void render(sf::RenderWindow* window) noexcept;
		void update() noexcept;
};

#endif
