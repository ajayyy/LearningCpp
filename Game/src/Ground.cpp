#include "pch.h"
#include <iostream>
#include "Ground.h"

#include "Main.h"
#include "Obstacle.h"

Ground::Ground(Main* main) : Entity(main) {
	rect.setSize(sf::Vector2f(main->size.x, 50));
	sf::Color color = sf::Color(99, 78, 56);
	rect.setFillColor(color);

	position = sf::Vector2f(0, main->size.y - rect.getSize().y);

	//create obstacles
	sf::Vector2f obstaclePosition = position + sf::Vector2f(300, -50);
	sf::Vector2f obstacleSize = sf::Vector2f(300, 50);
	obstacles.push_back(new Obstacle(main, obstaclePosition, obstacleSize, color));
}


Ground::~Ground() {

}

void Ground::render(sf::RenderWindow* window) noexcept {
	Entity::render(window);

	for (int i = 0; i < obstacles.size(); i++) {
		obstacles[i]->render(window);
	}
}

void Ground::update() noexcept {
	for (int i = 0; i < obstacles.size(); i++) {
		obstacles[i]->update();
	}
}