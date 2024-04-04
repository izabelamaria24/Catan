
#pragma once

#include <random>

class Dice{
    std::random_device rd;
    std::mt19937 gen;
    std::uniform_int_distribution<int> distribution;
    int diceValue;

public:
    Dice() : gen(rd()), distribution(1, 6), diceValue(6){}
    void roll();
};