#ifndef CAT_H_ 
#define CAT_H_

#include <string>
#include <ostream>
#include "legged_animal.h"

class Cat : public LeggedAnimal {
protected:
  std::string breed_ = "Unknown";

public:
    Cat() : LeggedAnimal("Cat", 0, 4) {}
    Cat(std::string name, int age, std::string breed) : LeggedAnimal(name, age, 4), breed_(breed) {}

  std::string GetBreed() const;

  protected:
    void MakeNoiseOnce() override;
};

inline std::ostream &operator<<(std::ostream &os, Cat const &c) {
  os << c.GetBreed() << " " << static_cast<Animal>(c);
  return os;
}

#endif
