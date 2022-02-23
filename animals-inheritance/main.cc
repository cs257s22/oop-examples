#include <iostream>

#include "animal.h"
#include "cat.h"
#include "dog.h"
#include "legged_animal.h"
#include "snake.h"

using namespace std;

int main() {
  const int kNumNoises = 3;
  const int kAnimalAge = 5;
  const int kDogAge = 6;
  const int kCatAge = 8;

  cout << "Creating an Animal and making noise" << kNumNoises << " times..."
       << endl;
  Animal animal("ANIMAL", kAnimalAge);
  cout << "Created: " << animal << endl;
  animal.Noise(kNumNoises);
  cout << endl << endl;

  cout << "Creating a Snake and making noise " << kNumNoises << " times..." << endl;
  Snake snake("Buttercup", 2);
  cout << "Created: " << snake << endl;
  snake.Noise(kNumNoises);
  cout << endl << endl;

  cout << "Creating a Dog and making noise " << kNumNoises << " times..." << endl;
  Dog dog("Gus", 2, "Terrier");
  cout << "Created: " << dog << endl;
  dog.Noise(kNumNoises);
  cout << endl;
  cout << dog.GetName() << " is a good dog? " << std::boolalpha << dog.IsGood();
  cout << endl << endl;

  cout << "Creating a Cat and making noise " << kNumNoises << " times..." << endl;
  Cat cat("Pan", 2, "Orange");
  cout << "Created: " << cat << endl;
  cat.Noise(kNumNoises);
  cout << endl;

  return 0;
}
