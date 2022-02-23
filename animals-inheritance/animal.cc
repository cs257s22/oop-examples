#include <iostream>

#include "animal.h"

int Animal::GetAge() const { return age_; }

std::string Animal::GetName() const { return name_; }

void Animal::SetName(std::string name) { name_ = name; }


void Animal::Noise(int times) {
  std::cout << name_ + " goes: ";
  for (int i = 0; i < times - 1; i++) { 
      MakeNoiseOnce();
      std::cout << " ";
  }
  MakeNoiseOnce();
}

void Animal::Noise() { Noise(1); }

void Animal::MakeNoiseOnce() {
    std::cout << "SILENCE";
}
