#include <iostream>
using std::cout;
using std::endl;
using std::cin; 

int main() {
 
  int i;
  int j;
  for (i = 1; i <= 10; i++ ) {
    for (j = 1; j <= i; j++)
      if (j <= i)
	cout <<"("<< i << "," << j << ")";
          cout << endl;
 }
    return 0;
} 
