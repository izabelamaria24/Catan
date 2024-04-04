#include "headers/Board.h"

// public methods
Board::Board() {
    generateBoard();
}

// private methods
void Board::generateBoard() {
    std::vector<ResourceType>resources;
    for (int i = 0; i < 2; i++) {
        resources.emplace_back(ResourceType::ORE);
        resources.emplace_back(ResourceType::BRICK);
    }
    for (int i = 0; i < 4; i++) {
        resources.emplace_back(ResourceType::WOOL);
        resources.emplace_back(ResourceType::LUMBER);
        resources.emplace_back(ResourceType::GRAIN);
    }
    resources.emplace_back(ResourceType::DESERT);

    std::random_device rd;
    std::mt19937 gen((rd()));
    std::shuffle(resources.begin(), resources.end(), gen);

    // values just for non desert tiles
    std::vector<int>tilesValues = {2, 3, 3, 4, 4, 5, 5, 6, 6, 8, 8, 9, 9, 10, 10, 11, 11, 12};
    std::shuffle(tilesValues.begin(), tilesValues.end(), gen);

    for (const auto& resource : resources) {
        int currentValue = 0;
        if (resource != ResourceType::DESERT) {
            currentValue = tilesValues.back();
            tilesValues.pop_back();
        }
        tiles.emplace_back(resource, currentValue);
    }
}

std::ostream& operator<<(std::ostream& stream, const Board& board){
    for (const auto& tile : board.tiles)
        stream << tile << '\n';

    return stream;
}
