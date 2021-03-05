#include <iostream>
#define SFML_STATIC
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>;

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    int x = 0;

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
        // window.draw(...);

        sf::CircleShape testCircle(100);
        testCircle.setFillColor(sf::Color(100, 250, 50));
        testCircle.setPosition(50, 100);


        sf::RectangleShape testRectangle(sf::Vector2f(220, 10));
        testRectangle.setFillColor(sf::Color(150, 50, 250));
        testRectangle.setOutlineThickness(10);
        testRectangle.setOutlineColor(sf::Color(250, 150, 100));

        x++;
        if (x > 8000) {
            x = 0;
        }

        testRectangle.setPosition(x/10, 200);
        testRectangle.rotate(x/20);


        sf::CircleShape test12Sided(81, 12);
        test12Sided.setPosition(500, 300);
        test12Sided.setFillColor(sf::Color(0, 0, 0));
        test12Sided.setOutlineThickness(x/100);
        test12Sided.setRadius(81 - (x / 100));
        test12Sided.setOutlineColor(sf::Color(255, 255, 255));


        window.draw(testCircle);
        window.draw(test12Sided);
        window.draw(testRectangle);


        // end the current frame
        window.display();
    }
}