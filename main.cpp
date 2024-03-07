#include <SFML/Graphics.hpp>
#include<iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::RectangleShape player(sf::Vector2f(100.0f, 100.0f));
    player.setFillColor(sf::Color::Red);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
    {
        player.move(-0.1f, 0.0f);
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
    {
        player.move(0.1f, 0.0f);
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
    {
        player.move(0.0f, -0.1f);
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
    {
        player.move(0.0f, 0.1f);
    }

    window.clear();
    window.draw(player);
    window.display();

    }

    return 0;
}