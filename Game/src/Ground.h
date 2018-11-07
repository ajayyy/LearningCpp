#include "pch.h"

#include "Entity.h"

class Ground : public Entity {
	public:
		Ground(Main* main);
		~Ground();

		void render(sf::RenderWindow* window) noexcept;
		void update() noexcept;
};

