#include "Rijden.h"
#include <Zumo32U4.h>

Rijden::Rijden(int lSpeed, int rSpeed) : links(lSpeed), rechts(rSpeed) {
  // Initialization of member variables done in the initializer list
}

bool Rijden::setDirection() {
  return true;
}

bool Rijden::setTurn() {
  return true;
}


void Rijden::drive() {
  if (setDirection() == true) {
    motors.setLeftSpeed(links);
    motors.setRightSpeed(rechts);

  } else if (setDirection() == false) {
    motors.setLeftSpeed(-links);
    motors.setRightSpeed(-rechts);

  } else if (setTurn() == true) {
    motors.setLeftSpeed(links);
    motors.setRightSpeed(rechts);

  } else if (setTurn() == false) {
    motors.setLeftSpeed(links);
    motors.setRightSpeed(rechts);
    }
}

  void Rijden::stop() {
    motors.setSpeeds(0, 0);
  }
