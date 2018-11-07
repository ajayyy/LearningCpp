#include "pch.h"
#include "Ground.h"


#include "Main.h"

Ground::Ground(Main* main) : Entity(main) {
	rect.setSize(sf::Vector2f(main->size->x, 50));
	rect.setFillColor(sf::Color(99, 78, 56));

	position = new sf::Vector2f(0, main->size->y - rect.getSize().y);
}


Ground::~Ground() {

}

void Ground::render(sf::RenderWindow* window) noexcept {
	Entity::render(window);
}

void Ground::update() noexcept {
	
}