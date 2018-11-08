#include "pch.h"
#include "Player.h"

#include "Main.h"

Player::Player(Main* main) : Entity(main) {
	rect.setSize(sf::Vector2f(50, 50));
	rect.setFillColor(sf::Color::Red);

	speed = new sf::Vector2f(50, 0);
	position = new sf::Vector2f(0, 500);
}


Player::~Player() {

}

void Player::render(sf::RenderWindow* window) noexcept {
	Entity::render(window);
}

void Player::update() noexcept {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
		if (speed->y == 0) {
			speed->y = -700;
		}
	}
	
	*position += *speed * (float) main->deltaTime;

	//gravity
	if (position->y < window->getSize().y - rect.getSize().y - main->ground->rect.getSize().y) {
		speed->y += 1700 * (float) main->deltaTime;
	} else {
		speed->y = 0;
	}
}