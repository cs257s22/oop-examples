#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <string>

class Animal {
 private:
  std::string name_ = "Animal";
  int age_ = 0;

 public:
  Animal(std::string name, int age) : name_(name), age_(age) {}

  int GetAge() const;
  std::string GetName() const;

  void SetName(std::string name);

  void Noise(int times);
  void Noise();

 protected:
  virtual void MakeNoiseOnce();
};

inline std::ostream &operator<<(std::ostream &os, Animal const &a) {
  os << a.GetName() << " is " << a.GetAge() << " years old.";
  return os;
}
 
#endif
