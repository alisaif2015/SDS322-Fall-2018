#include <iostream> 
#include <string>
#include <cmath>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
  vector<float> l2Norm {1,2,45,6};
  float counter = 0;
  for (auto x : l2Norm)
    counter += (x*x);
  float l2 = sqrt(counter);
  cout << l2 << l2Norm.size()<< endl;
}







