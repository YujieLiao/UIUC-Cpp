/**
 * C++ program sending a Cube by reference.
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
#include <iostream>

using uiuc::Cube;

bool sendCube(Cube &c) {
  // ... logic to send a Cube somewhere ...

  c.setLength(20);
  std::cout << c.getVolume() << std::endl; // 8000
  return true;
}

int main() {
  // Create a 1,000-valued cube
  Cube c(10);

  // Send the cube to someone
  sendCube(c);
  std::cout << c.getVolume() << std::endl; // 8000

  return 0;
}
