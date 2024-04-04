#include "headers/Dice.h"

void Dice::roll() {
    int generatedValue = distribution(gen);
    this->diceValue = generatedValue;
}