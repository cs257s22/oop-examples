#include "dog.h"

#include <iostream>

void Dog::MakeNoiseOnce() {
    std::cout << "WOOF";
}

std::string Dog::GetBreed() const {
    return breed_;
}
