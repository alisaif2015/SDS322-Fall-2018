#include <iostream> 
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

void swapij (int &x, int &y)  {
  int z;
  z = x;
  x = y;
  y = z;
}

int main () {
  int i,j;
  cout<< "Enter 2 numbers: "<<endl;
  cin >> i >> j;
  swapij(i,j);
  cout << i << " " << j << endl;
}