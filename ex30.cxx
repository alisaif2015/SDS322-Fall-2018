#include <iostream> 
#include <string>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main () {

  cout<< "Enter an integer value for a letter in the alphabet (1-26): ";
  int integer;
  cin >> integer;
  if (integer >= -26 and integer <= -1) {
    integer *= -1;
  }
  integer = integer + 64;
  char letter = integer;
  cout << letter <<endl;
}
