#pragma once

#include <random>
#include <algorithm>
#include "BoardTile.h"
#include "ResourceType.hpp"

class Board {
    std::vector<BoardTile>tiles;

    void generateBoard();
public:
    Board();

    friend std::ostream& operator<<(std::ostream& stream, const Board& board);
};