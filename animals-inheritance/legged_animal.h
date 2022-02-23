#ifndef LEGGED_ANIMAL_H_
#define LEGGED_ANIMAL_H_

#include "animal.h"

class LeggedAnimal : public Animal {
 public:
  static const int kDefaultNumLegs = 2;

 protected:
  int num_legs_ = kDefaultNumLegs;

 public:
  LeggedAnimal() : Animal("Legged Animal", 0) {}
  LeggedAnimal(std::string name, int age, int num_legs)
      : Animal(name, age), num_legs_(num_legs) {}

  inline int GetNumeLegs() { return num_legs_; }
};

#endif
