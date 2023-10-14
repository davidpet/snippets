Sure, here is a simple example of using SFML to create a window, load a texture, create a sprite, and draw it to the window. This example will cover the basics of window handling, graphics, and event handling in SFML.

// Include the necessary SFML headers
#include <SFML/Graphics.hpp>

int main()
{
    // Create a new SFML window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

    // Load a texture from a file
    sf::Texture texture;
    if (!texture.loadFromFile("image.png")) // Replace "image.png" with the path to your image file
    {
        return -1; // If the texture failed to load, exit the program
    }

    // Create a sprite using the texture
    sf::Sprite sprite(texture);

    // Main loop
    while (window.isOpen())
    {
        // Event handling
        sf::Event event;
        while (window.pollEvent(event))
        {
            // If the window is closed, exit the program
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the window with black color
        window.clear(sf::Color::Black);

        // Draw the sprite to the window
        window.draw(sprite);

        // Update the window
        window.display();
    }

    return 0;
}