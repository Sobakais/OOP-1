#include <iostream>

class Rectangle {
public:
  Rectangle(double Horiz, double Vert) {
    lenghtHorisontal = Horiz;
    lenghtVertical = Vert;
  }
  Rectangle(double Horiz, double Vert, double cordX, double cordY) {
    x = cordX;
    y = cordY;
    lenghtHorisontal = Horiz;
    lenghtVertical = Vert;
  }
  Rectangle() = default;
  double getArea() { return lenghtHorisontal * lenghtVertical; }

private:
  // x and y cords of bottom left corner
  double x{1.0};
  double y{1.0};
  double lenghtHorisontal{0.0};
  double lenghtVertical{0.0};
};

int main() {
  Rectangle test1;
  Rectangle test2(2.3, 1.5);
  Rectangle test3(4.2, 3.1, 2.0, 3.0);
  std::cout << "Area of first Rectangle: " << test1.getArea() << std::endl;
  std::cout << "Area of second Rectangle: " << test2.getArea() << std::endl;
  std::cout << "Area of third Rectangle: " << test3.getArea() << std::endl;
}
