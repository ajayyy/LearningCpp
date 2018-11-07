#include "pch.h"
#include "Entity.h"

Entity::Entity() {

}

Entity::~Entity() {

}

void Entity::render(sf::RenderWindow* window) noexcept {
	this->window = window;

	rect.setPosition(*position);
	window->draw(rect);
}

void Entity::update() noexcept {
	
}