#include <iostream>
#include "Obstacle.h"

Obstacle::Obstacle(Main* main) : Entity(main){

}

Obstacle::Obstacle(Main* main, sf::Vector2f position, sf::Vector2f size, sf::Color color) : Entity(main) {
	this->position = position;
	this->rect.setSize(size);

	rect.setFillColor(color);
}


Obstacle::~Obstacle() {

}

void Obstacle::render(sf::RenderWindow* window) noexcept {
	Entity::render(window);
}

void Obstacle::update() noexcept {

}