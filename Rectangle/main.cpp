#include "rectangle.hpp"
#include <iostream>

int main() {
  Rectangle test1;
  Rectangle test2(2.3, 1.5);
  Rectangle test3(4.2, 3.1, 2.0, 3.0);
  std::cout << "Area of first Rectangle: " << test1.getArea() << std::endl;
  std::cout << "Area of second Rectangle: " << test2.getArea() << std::endl;
  std::cout << "Area of third Rectangle: " << test3.getArea() << std::endl;
}
