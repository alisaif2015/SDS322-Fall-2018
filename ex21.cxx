#include <iostream> 
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

struct vector {
  double x; 
  double y;
};

double angle (vector a) {
  double angle = atan(a.y/a.x);
    return angle;
}
 
int main(){
  double xCoor;
  double yCoor;
  cout << "enter x and y coor: ";
  cin >> xCoor >> yCoor;
struct vector a = {xCoor, yCoor};
 cout << angle(a)<<endl;
}


      
      
