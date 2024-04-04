#pragma once

#include "BuildingType.hpp"
#include "Element.h"

class Building : Element<BuildingType> {
public:
    Building(BuildingType inputType, std::shared_ptr<Entity> inputOwner, int inputId, double inputPositionX, double inputPositionY)
            : Element<BuildingType>(inputType, std::move(inputOwner), inputId, inputPositionX, inputPositionY) {}

    void place(double positionX, double positionY) override {
        // TODO
    }
};