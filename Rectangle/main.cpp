#include "rectangle.hpp"
#include <iostream>
#include <utility>

int main() {
  Rectangle test1;
  Rectangle test2(2.3, 1.5);
  Rectangle test3(4.2, 3.1, 2.0, 3.0);
  std::pair<double, double> centre1 = test1.getCentre();
  std::pair<double, double> centre2 = test2.getCentre();
  std::pair<double, double> centre3 = test3.getCentre();
  std::cout << "Area of first Rectangle: " << test1.getArea() << std::endl;
  std::cout << "Center of first rectangle is X: " << centre1.first
            << " Y: " << centre1.second << std::endl;
  std::cout << "Area of second Rectangle: " << test2.getArea() << std::endl;
  std::cout << "Center of first rectangle is X: " << centre2.first
            << " Y: " << centre2.second << std::endl;
  std::cout << "Area of third Rectangle: " << test3.getArea() << std::endl;
  std::cout << "Center of first rectangle is X: " << centre3.first
            << " Y: " << centre3.second << std::endl;
}
