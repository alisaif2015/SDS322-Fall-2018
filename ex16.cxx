#include <iostream> 
#include <cmath>
using std::cout;
using std::endl;
using std::cin; 

float distanceCalculator (float xCoor1 , float yCoor1, float xCoor2, float yCoor2) {

  float distance;
 
  distance= sqrt(((xCoor2 - xCoor1) * (xCoor2 - xCoor1))  + ((yCoor2 - yCoor1) * (yCoor2 -yCoor1))) ;
 
  return distance;
  
}


int main() {
  float x1, y1,x2,y2;
  cout << "Enter x and y coordinates: "<<endl;
  cin >> x1 >> y1 >> x2 >> y2;
  cout << distanceCalculator(x1,y1,x2,y2);

  return 0;
} 
