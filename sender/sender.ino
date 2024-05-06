#include "XBeeCommunicator.h"

char Test;
bool flag;

void iest();

XBeeCommunicator xbeeComm(Serial);

void setup() {
  xbeeComm.begin(9600);
}

void loop() {
  if (xbeeComm.available()) {
    Test = xbeeComm.read();
    switch (Test) {
      case '1':
        xbeeComm.println("test");
        break;
      case '2':
        xbeeComm.println("test1");
        break;
      case '3':
        flag = true;
        break;
      case '4':
        flag = false;
        break;
    }
    delay(500);
  }
  if (flag == true) {
    iest();
  }
}

void iest() {
  xbeeComm.println("hello world");
}