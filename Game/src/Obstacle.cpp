#include "Obstacle.h"

Obstacle::Obstacle(Main* main) : Entity(main){

}

Obstacle::Obstacle(Main* main, sf::Vector2f* position, sf::Vector2f* size) : Entity(main) {
	this->position = position;
	this->rect.setSize(*size);
}


Obstacle::~Obstacle() {

}

void Obstacle::render(sf::RenderWindow* window) noexcept {
	Entity::render(window);
}

void Obstacle::update() noexcept {

}