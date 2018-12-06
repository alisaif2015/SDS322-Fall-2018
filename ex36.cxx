#include <iostream> 
#include <string>
#include <cmath>
#include <vector>
#include <iomanip>
using std::setbase;
using std::setfill;
using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::right;
int main () {
  cout << setbase(16) << setfill(' ');
  for (int i=0; i<16; i++) {
    for (int j=0; j<16; j++)
      cout << right <<i*16+j << " " ;
      cout << endl;
  }
}







