#pragma once
#include <utility>

#include "Element.h"
#include "ResourceType.h"

class Resource : Element<ResourceType> {
public:
    Resource(ResourceType type, std::shared_ptr<Entity> inputOwner, int id, double positionX, double positionY)
            : Element<ResourceType>(type, std::move(inputOwner), id, positionX, positionY) {}

    void place(double positionX, double positionY) override {
        // Implement placing logic for Resource
    }

    void addResource();
    void useResource();
    [[nodiscard]] int getCount() const;
};
