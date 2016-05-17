#include <iostream>
#include <string>
#include "rollerballpen.h"
std::string RollerBallPen::drawLine() {
    return getName().append(" draws a line.");
  }
std::string RollerBallPen::drawCircle(){
    return getName().append(" draws a circle.");
  }