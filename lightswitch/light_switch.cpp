#include "light_switch.h"

#include <ostream>
#include <string>

using namespace std;

LightSwitch::LightSwitch() {
  is_on_ = false;
  flip_count_ = 0;
}

LightSwitch::LightSwitch(int flip_count) {
  flip_count_ = flip_count;
  is_on_ = false;
}

LightSwitch::LightSwitch(bool is_on, int flip_count) {
  is_on_ = is_on;
  flip_count_ = flip_count;
}

bool LightSwitch::GetIsOn() const { return is_on_; }

int LightSwitch::GetFlipCount() const { return flip_count_; }

void LightSwitch::SetFlipCount(int flip_count) { flip_count_ = flip_count; }

void LightSwitch::Flip() {
  if (is_on_) {
    is_on_ = false;
  } else {
    is_on_ = true;
  }
  flip_count_++;
}

std::ostream& operator<<(std::ostream& os, const LightSwitch &obj) {
  os << "The switch is ";

  if (obj.GetIsOn()) {
    os << "ON";
  } else {
    os << "OFF";
  }

  os << " and has been flipped " << obj.GetFlipCount() << " times.";

  return os;
}

