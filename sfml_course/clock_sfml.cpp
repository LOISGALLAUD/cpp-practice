#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    sf::Clock clock;
    clock.restart();

    sf::sleep(sf::seconds(1));
    sf::Time elapsed = clock.getElapsedTime();
    std::cout << "Elapsed time: " << elapsed.asSeconds() << " seconds" << std::endl;

    sf::sleep(sf::milliseconds(500));
    elapsed = clock.getElapsedTime();
    std::cout << "New elapsed time: " << elapsed.asMilliseconds()
              << " milliseconds" << std::endl;

    clock.restart();

    sf::sleep(sf::milliseconds(200));
    elapsed = clock.getElapsedTime();
    std::cout << "Elapsed time since the last restart: "
              << elapsed.asMicroseconds() << " microseconds" << std::endl;

    return 0;
}
