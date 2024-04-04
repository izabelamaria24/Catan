#pragma once
#include "Player.h"
#include "ResourceBank.h"
#include "Board.h"
#include "Dice.h"

class Game {
    std::vector<Player>players; // 2-4 players
    ResourceBank resourceBank;
    Dice dice1, dice2;
    Board gameBoard;

public:

};