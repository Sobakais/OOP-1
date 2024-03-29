#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <utility>
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
  std::pair<double, double> getCentre() {
    return std::make_pair(x + (lenghtHorisontal / 2), y + (lenghtVertical / 2));
  }

private:
  // x and y cords of bottom left corner
  double x{1.0};
  double y{1.0};
  double lenghtHorisontal{0.0};
  double lenghtVertical{0.0};
};

#endif // !RECTANGLE_H
