#include <Arduino.h>
# include "Options.h"

Options options(3);


void setup() {
  options.addOption("Option 1");
  options.addOption("Option 2");
  options.run();
}

void loop() {
  // put your main code here, to run repeatedly:
}