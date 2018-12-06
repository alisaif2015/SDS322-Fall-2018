#include <iostream> 
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

class Point {
public :

  float distance_to_origin () {
    cout <<"Enter x and y: ";
    cin >> xCoor >> yCoor;
    x = xCoor; 
    y = yCoor;
    distance = sqrt((x*x) + (y*y));
    return distance; 
  }  

float printout () {
    cout <<"(" << x << "," << y << ")"<<endl;
  }

double angle () {
    angle_of_point = atan(y/x);
    return angle_of_point;
  }

private :
  float x;
  float y;
  float distance; 
  float xCoor;
  float yCoor;
  float angle_of_point;
};

int main() {

  Point a;
  cout << a.distance_to_origin() << endl;
  a.printout();
  cout << a.angle() << endl;

}
      
      
