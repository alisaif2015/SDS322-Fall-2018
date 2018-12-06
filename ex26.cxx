#include <iostream> 
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

class Point {

private:
  int x,y;
  int xcoor,ycoor;
public:
 int  userInput() {
    cout << "Enter points" <<endl;
    cin >> xcoor >> ycoor;
    x = xcoor ;
    y = ycoor;
  }
  int getx() {
    return x;
  };
  int gety() {
    return y;
  };

};


class LinearFunction {
private:
  int x1,x2,y1,y2;

public:
  LinearFunction (Point input_p1 , Point input_p2) {
    x1 = input_p1.getx();
    x2 = input_p2.getx();
    y1 = input_p1.gety();
    y2 = input_p2.gety(); 
  };
  float evaluate_at(float x) {
    float slope = (y2-y1)/(x2-x1);
    float intercept = (y2 - slope * x2);
    float y = slope * x2 + intercept;
    return y;
  };
};

int main() {
  Point One;
  Point Two;
  One.userInput();
  Two.userInput();
  LinearFunction done (One , Two);
  cout <<"Enter an x to evaluate at";
  float x_in;  
  cin >> x_in;
  float done2 = done.evaluate_at(x_in);
  cout << done2 <<endl;
}
