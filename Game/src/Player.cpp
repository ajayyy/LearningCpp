#include "pch.h"
#include "Player.h"

Player::Player() {
	rect.setSize(sf::Vector2f(50, 50));
	rect.setFillColor(sf::Color::Red);
}


Player::~Player() {

}

void Player::render(sf::RenderWindow* window) noexcept {
	Entity::render(window);
}

void Player::update() noexcept {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
		if (speed->y == 0) {
			speed->y = -2;
		}
	}
	
	*position += *speed;

	//gravity
	if (position->y < window->getSize().y - rect.getSize().y) {
		speed->y += 0.01f;
	} else {
		speed->y = 0;
	}
}