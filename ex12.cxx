#include <iostream>
using std::cout;
using std::endl;
using std::cin; 

int main() {
 
  cout << "Enter a number: ";
  int productNumber;
  cin >> productNumber;
  int i;
  int j;
  for (i = 1; i++) {
    for (j = 1; j++)
      if (i * j < productNumber)
	cout << i<< j<< break;
 
         
 }
    return 0;
} 
