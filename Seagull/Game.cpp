#include "Game.h"

Game::Game()
{
	window = new RenderWindow(VideoMode(1024, 650), "Seagull | ESC to exit", Style::Titlebar | Style::Close);
	window->setVerticalSyncEnabled(true);
	window->setMouseCursorGrabbed(true);
	window->setMouseCursorVisible(false);
	background.loadFromFile("space_background.jpg");
	background.setRepeated(true);
}

Game::~Game()
{
	window->setMouseCursorGrabbed(false);
	window->setMouseCursorVisible(true);
	delete window;
}

void Game::start()
{
	Sprite bgr_sprite;
	bgr_sprite.setTexture(background);
	bgr_sprite.setTextureRect(IntRect(0, 0, 1024, 768));
	Clock clock;
	Event event;
	while (window->isOpen()) {
		// время кадра
		Time elapsed = clock.restart();

		// обработка событий окна
		while (window->pollEvent(event)) {
			switch (event.type) {
			case Event::Closed:
				window->close();
				break;

			case Event::KeyPressed:
				if(event.key.code == Keyboard::Escape)
					window->close();
				break;

			default:
				break;
			}				
		}
		window->clear(); // очистка кадра
		window->draw(bgr_sprite);
		window->display(); // отрисовка кадра
	}
}
