#include "headers/Resource.h"

void Resource::addResource() {
    count++;
}

void Resource::useResource() {
    count--;
}

[[nodiscard]] int Resource::getCount() const {
    return count;
}