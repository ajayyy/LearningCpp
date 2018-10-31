#include "pch.h"
#include "Main.h"

Main::Main() {
	player = new Player();
}

Main::~Main() {

}

void Main::render(sf::RenderWindow* window) noexcept {
	player->render(window);
}

void Main::update() noexcept {
	player->update();
}
