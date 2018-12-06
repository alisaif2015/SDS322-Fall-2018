#include <iostream> 
#include <string>
#include <cmath>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main () {
  vector<float> x {1,-4,2,-6,5};
  for (auto squaredX : x) {
  squaredX = squaredX * squaredX;
  cout << squaredX <<endl;
  for (auto sumX : squaredX) {
    sumX += squaredX;
    cout << sumX <<endl;
  }
}
    
