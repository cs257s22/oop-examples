#ifndef DOG_H_ 
#define DOG_H_

#include <string>
#include <ostream>
#include "legged_animal.h"

class Dog : public LeggedAnimal {
protected:
  std::string breed_ = "Unknown";

public:
    Dog() : LeggedAnimal("Dog", 0, 4) {}
    Dog(std::string name, int age, std::string breed) : LeggedAnimal(name, age, 4), breed_(breed) {}

  inline bool IsGood() { return true; }

  std::string GetBreed() const;

  protected:
    void MakeNoiseOnce() override;
};

inline std::ostream &operator<<(std::ostream &os, Dog const &d) {
  os << d.GetBreed() << " " << static_cast<Animal>(d);
  return os;
}

#endif
