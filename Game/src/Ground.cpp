#include "pch.h"
#include "Ground.h"



Ground::Ground(Main* main) : Entity(main) {
	rect.setSize(sf::Vector2f(2000, 50));
	rect.setFillColor(sf::Color(99, 78, 56));

	position = new sf::Vector2f(0, 750);
}


Ground::~Ground() {

}

void Ground::render(sf::RenderWindow* window) noexcept {
	Entity::render(window);
}

void Ground::update() noexcept {
	
}