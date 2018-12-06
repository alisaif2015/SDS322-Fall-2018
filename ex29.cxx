#include <iostream> 
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

class Point {

private: 
  float x,y;

public:
   Point (float xCoor,float yCoor) {
    x = xCoor;
    y = yCoor;
  };
  float xCoor () {
    return x;
  };
  float yCoor() {
    return y;
  };
};


class Rectangle {

public:
  Rectangle (Point b1, float w, float h) {
    float width () {
      w = b1.x;
    }
    float height () {
      h = b1.y;
    }
    float area () {
      area = w * h;
    }
  }
}   
