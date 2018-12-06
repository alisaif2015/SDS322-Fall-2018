#include <iostream> 
#include <string>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;
using std::string;
int main() {
  cout <<"Enter a string: ";
  string userString;
  cin >>userString;
  cout <<"Shift by an integer: "; 
  int integer;
  cin >> integer;
  string abc = userString;
  for ( char &c :abc ) {
    c += integer;
  if (c > 122) 
    c = 96 + (c - 122); 
  } 
  cout <<"Shifted: " << abc << endl;
} 


