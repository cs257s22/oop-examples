#ifndef SNAKE_H_
#define SNAKE_H_

#include <ostream>
#include <string>

#include "animal.h"

class Snake : public Animal {
    public:
    Snake() : Animal("Snake", 0) {}

    Snake(std::string name, int age) : Animal(name, age) {}

    void Slither();

    void MakeNoiseOnce() override;
} ;

inline std::ostream &operator<<(std::ostream &os, Snake const &s) {
  os << "snake " << static_cast<Animal>(s);
  return os;
}




#endif
