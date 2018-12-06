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
  float distance (Point q) {
    float dx = x - q.xCoor();
    float dy = y - q.yCoor();
    float answer = sqrt( dx * dx + dy * dy);
      return answer;
  };
  float midpoint (Point q) {
    float newX = ( ( x + q.xCoor() ) / 2 );
    float newY = ( ( y + q.yCoor() ) / 2 );
    cout << "Midpoint of p and q is: " << newX << "," << newY << endl;
  };
};

int main () {

  Point p (3,4);
  Point q (5,6);
  p.midpoint(q);
  cout <<  p.distance(q)<< endl;
}

      
      
