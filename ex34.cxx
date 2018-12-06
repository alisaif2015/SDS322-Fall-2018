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
  vector<int> numbers = {1,-2,-31,-4,5}, holder;
  holder = numbers;
  int counter = 0;
  for (int &x : holder) {
  if (x < 0)
    x  = x * -1 ;
 if (counter < x)
   counter = x;
  } 
 cout << counter << endl;
  
return 0;
}
