#include "pch.h"
#include "Player.h"

int speed = 10;

Player::Player() {
	rect.setSize(sf::Vector2f(50, 50));
	rect.setFillColor(sf::Color::Red);
}


Player::~Player() {

}

void Player::render(sf::RenderWindow* window) noexcept {
	rect.setPosition(*position);
	window->draw(rect);
}

void Player::update() noexcept {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
		position->y -= speed;
	}

	position->x += speed;
}