#pragma once
#include <memory>
#include <utility>

class Entity;

template<typename T>
class Element {
private:
    T type;
    std::shared_ptr<Entity>owner;
    int id;
    double positionX;
    double positionY;
    bool isPlaced = false;

public:
    Element(T inputType, std::shared_ptr<Entity>inputOwner, int inputId, double inputPositionX, double inputPositionY)
            : type(inputType), owner(std::move(inputOwner)), id(inputId), positionX(inputPositionX), positionY(inputPositionY){}

    virtual void place(double positionX, double positionY) = 0;
    [[nodiscard]] bool onBoard() const {
        return isPlaced;
    }
};