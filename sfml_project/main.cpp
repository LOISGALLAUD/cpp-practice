#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "GOMATA ANIMATION");

    std::vector<sf::Texture> frames;
    for (int i = 1; i <= 15; ++i) {
        sf::Texture texture;
        if (!texture.loadFromFile("gomata/gomata-export" + std::to_string(i) + ".png")) {
            return -1;
        }
        frames.push_back(texture);
    }

    sf::Sprite sprite;
    sprite.setTexture(frames[0]);
    sprite.setPosition(10, 10);
    sprite.setScale(0.5f, 0.5f);

    // Variables pour l'animation
    int currentFrame = 0;
    int frameCount = frames.size();
    float frameTime = 0.15f;  // Temps entre chaque frame en secondes
    float timer = 0.0f;

    float moveSpeed = 0.1f;

    sf::Clock clock;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Animation
        sf::Time elapsed = clock.restart();
        timer += elapsed.asSeconds();
        if (timer >= frameTime) {
            timer = 0.0f;
            currentFrame = (currentFrame + 1) % frameCount;
            sprite.setTexture(frames[currentFrame]);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            sprite.move(-moveSpeed, 0);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            sprite.move(moveSpeed, 0);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            sprite.move(0, -moveSpeed);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            sprite.move(0, moveSpeed);
        }

        window.clear(sf::Color::Black);
        window.draw(sprite);
        window.display();
    }

    return 0;
}
