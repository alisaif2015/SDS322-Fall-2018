#include <iostream>
using std::cout;
using std::endl;
using std::cin; 

int main() {
 
  int u;
  int v;
  int w;
  for (u = 1; u <= 100; u++ ) {
    for (v = u+1; v <= 100; v++)
      for (w = 1; w <= 100; w++)
	if (u*u + v*v == w*w)
	  cout <<"("<< u << "," << v << "," << w << ")"<<endl;
         
 }
    return 0;
} 
