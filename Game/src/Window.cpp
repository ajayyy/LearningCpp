#include "pch.h"

#include <SFML/Graphics.hpp>

int main() {
	sf::RenderWindow window(sf::VideoMode(1400, 800), "Window");

	sf::Font font;
	font.loadFromFile("res/arial.ttf");

	sf::Text message;
	message.setFont(font);
	message.setString("Hello world");
	message.setCharacterSize(100);
	message.setFillColor(sf::Color::White);

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}

		//clear screen
		window.clear();

		window.draw(message);

		window.display();
	}

	return 0;
}
