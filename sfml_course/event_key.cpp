#include <SFML/Window.hpp>
#include <iostream>
int main() {
    sf::Window window(sf::VideoMode(800, 480), "Window");
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::KeyPressed) {
                // A key was pressed
                if (event.key.code == sf::Keyboard::Escape) {
                    // Escape key was pressed
                    window.close();
                }
                if (event.key.code == sf::Keyboard::A) {
                    // A key was pressed
                    std::cout << "A key was pressed" << std::endl;
                }

            }
        }
    }
    return 0;
}