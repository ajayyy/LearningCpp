#include "pch.h"

#include "Main.h"

Main::Main(sf::Vector2f size) {
	this->size = size;

	player = new Player(this);
	ground = new Ground(this);
}

Main::~Main() {

}

void Main::render(sf::RenderWindow* window) noexcept {
	ground->render(window);

	player->render(window);
}

void Main::update() noexcept {
	//calculate delta time
	std::chrono::duration<double> now = std::chrono::system_clock::now().time_since_epoch();
	deltaTime = (now - lastTime).count();
	if (deltaTime > 0.1) {
		deltaTime = 0.1;
	}
	lastTime = now;

	ground->update();

	player->update();
}
