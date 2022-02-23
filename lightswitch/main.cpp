#include <iostream>

#include "light_switch.h"

using namespace std;

int main() {
  LightSwitch s1;
  LightSwitch s2(5);
  LightSwitch s3(true, 1);

  cout << "After instantiation..." << endl;
  cout << "Lightswitch #1: " << s1 << endl;
  cout << "Lightswitch #2: " << s2 << endl;
  cout << "Lightswitch #3: " << s3 << endl;

  s1.Flip();
  s2.Flip();
  s3.Flip();

  cout << "After flipping..." << endl;
  cout << "Lightswitch #1: " << s1 << endl;
  cout << "Lightswitch #2: " << s2 << endl;
  cout << "Lightswitch #3: " << s3 << endl;

  s1.SetFlipCount(10);

  if (s1.GetIsOn()) {
    cout << "Switch #1 is ON" << endl;
  } else {
    cout << "Switch #1 is OFF" << endl;
  }

  cout << "LightSwitch #2 has been flipped "
       << s2.GetFlipCount() << " times." << endl;

  return 0;
}
