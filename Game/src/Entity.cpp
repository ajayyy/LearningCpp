#include "pch.h"
#include "Entity.h"

Entity::Entity(Main* main) {
	this->main = main;
}

Entity::~Entity() {

}

void Entity::render(sf::RenderWindow* window) noexcept {
	this->window = window;

	rect.setPosition(position);
	window->draw(rect);
}

void Entity::update() noexcept {
	
}