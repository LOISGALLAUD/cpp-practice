#include <SFML/Window.hpp>

int main() {
    sf::Window window(sf::VideoMode(800, 480), "Window");
    window.setPosition(sf::Vector2i(500, 500));
    window.setSize(sf::Vector2u(640, 480));
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                // Close window button clicked
                window.close();
            }
        }
    }
    return 0;
}