#include "pch.h"
#include <iostream>
#include "Ground.h"

#include "Main.h"
#include "Obstacle.h"

Ground::Ground(Main* main) : Entity(main) {
	rect.setSize(sf::Vector2f(main->size.x, 50));
	rect.setFillColor(color);

	position = sf::Vector2f(0, main->size.y - rect.getSize().y);

	generateObstacles(100, 1000);
}


Ground::~Ground() {
	for (Obstacle* obstacle : obstacles) {
		delete obstacle;
	}
	obstacles.clear();
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

//generates obstacles up to the specified distance starting at the specified starting point
void Ground::generateObstacles(float start, float distance) {
	//setup random seed
	srand(time(0));

	//create obstacles
	sf::Vector2f obstaclePosition = position + sf::Vector2f(start, 0);
	
	while (obstaclePosition.x < start + distance) {
		//random width from 50 to 100
		//random height from 0 to 300 in increments of 50
		sf::Vector2f obstacleSize = sf::Vector2f(((double) rand() / RAND_MAX) * 300 + 50, (int) (((double) rand() / RAND_MAX) * 5) * 50);

		//move it up by that height since positions are based on the top left corner
		obstaclePosition.y -= obstacleSize.y;

		obstacles.push_back(new Obstacle(main, obstaclePosition, obstacleSize, color));

		obstaclePosition += obstacleSize;
	}
}