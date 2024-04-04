#pragma once

#include <utility>

#include "Element.h"

class Road : Element<std::string>{
    Road(std::shared_ptr<Entity> owner, int id, double positionX, double positionY)
            : Element<std::string>("Road", std::move(owner), id, positionX, positionY) {}

    void place(double positionX, double positionY) override {
        // TODO
    }
};