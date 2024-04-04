#include <iostream>
#include <chrono>
#include <thread>

#include <SFML/Graphics.hpp>
#include "env_fixes.h"
#include "headers/Board.h"

int main() {
    init_threads();

    Board board;
    std::cout << board;

    sf::RenderWindow window;
    ///////////////////////////////////////////////////////////////////////////
    /// NOTE: sync with env variable APP_WINDOW from .github/workflows/cmake.yml:31
    window.create(sf::VideoMode::getFullscreenModes()[0], "Catan Game", sf::Style::Fullscreen);

    window.setVerticalSyncEnabled(true);

    while(window.isOpen()) {
        bool shouldExit = false;
        sf::Event e{};
        while(window.pollEvent(e)) {
            switch(e.type) {
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::Resized:
                    std::cout << "New width: " << window.getSize().x << '\n'
                              << "New height: " << window.getSize().y << '\n';
                    break;
                case sf::Event::KeyPressed:
                    std::cout << "Received key " << (e.key.code == sf::Keyboard::X ? "X" : "(other)") << "\n";
                    if(e.key.code == sf::Keyboard::Escape)
                        shouldExit = true;
                    break;
                default:
                    break;
            }
        }
        if(shouldExit) {
            window.close();
            break;
        }
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(300ms);

        window.clear();
        window.display();
    }
    return 0;
}