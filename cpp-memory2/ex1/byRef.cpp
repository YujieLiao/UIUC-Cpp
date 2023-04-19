/**
 * C++ program aliasing a Cube class by reference.
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
using uiuc::Cube;
#include <iostream>

int main() {
  // Create a 1,000-valued cube
  Cube c(10);

  // Transfer the cube
  Cube &myCube = c;

  c.setLength(20);
  std::cout << c.getVolume() << std::endl;      // 8000
  std::cout << myCube.getVolume() << std::endl; // 8000

  return 0;
}
