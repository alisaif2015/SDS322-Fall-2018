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
  vector<int> numbers {1,-4,2,-6,5};
  for (int &e : numbers) {
    e = abs(e);
  }
  cout << numbers[3] <<endl;
}

    
