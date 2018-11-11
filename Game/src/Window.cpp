#include "pch.h"
#include "Main.h"

Main* mainClass;

void update() {
	mainClass->update();
}

int main() {
	sf::RenderWindow window(sf::VideoMode(1400, 800), "Window");

	mainClass = new Main(sf::Vector2f(1400, 800));

	{
		Ground ground = Ground(mainClass);
	}

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}

		//clear screen
		window.clear();

		mainClass->render(&window);

		window.display();

		//update
		update();
	}

	return 0;
}
