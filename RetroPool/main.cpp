#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    sf::Image A;
    sf::Color color;
    if (!A.loadFromFile("assets/road.jpg")) {
        std::cout << "road is not loaded";
    }

   for (int i = 0; i < 1200; i++) {
        for (int d = 0; d < 786; d++) {
            color = A.getPixel(i, d);
            
            A.setPixel(i, d, sf::Color::Color((255) - color.r, (255) - color.g, (255) - color.b,255));
        }
    }
   A.saveToFile("assets/invertroad.jpg");
    return 0;
}