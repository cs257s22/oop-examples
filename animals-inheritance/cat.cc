#include <iostream>

#include "cat.h"

void Cat::MakeNoiseOnce() {
    std::cout << "MEOW";
}

std::string Cat::GetBreed() const {
    return breed_;
}
