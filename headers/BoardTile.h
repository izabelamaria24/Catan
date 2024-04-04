#pragma once

#include <iostream>
#include "ResourceType.h"

// hexagonal board tiles
class BoardTile {
    ResourceType type;
    int value;

public:
    BoardTile(ResourceType inputType, int input_value) : type(inputType), value(input_value){}

    friend std::ostream& operator<<(std::ostream& stream, const BoardTile& tile) {
        stream << "Tile value: " << tile.value << '\n';
        stream << "Resource: ";
        switch (tile.type){
            case ResourceType::WOOL:
                stream << "WOOL";
                break;
            case ResourceType::ORE:
                stream << "ORE";
                break;
            case ResourceType::LUMBER:
                stream << "LUMBER";
                break;
            case ResourceType::BRICK:
                stream << "BRICK";
                break;
            case ResourceType::GRAIN:
                stream << "GRAIN";
                break;
            case ResourceType::DESERT:
                stream << "DESERT";
                break;
        }

        return stream;
    }
};