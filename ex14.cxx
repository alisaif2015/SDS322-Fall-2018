#include <iostream>
using std::cout;
using std::endl;
using std::cin; 

int main() {
  cout <<"Enter a Number: ";
  int number;
  int y;
  int x;
  cin >> number;
  bool foundPair = false;
  for (int i = 0; i < 10; i++) { 
    for (int j= 0; j < 10; j++) 
      if (i * j > number){
	cout << i <<","<< j << endl;
	foundPair = true;
	x = i;
	y = j;
	break;
      }
      if  (foundPair)
      break;
  }
  for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++)
      if ((i * j > number) and (i + j < x + y)){
	x = i;
        y = j;
      }
  }
  cout << x << "," << y << endl;

return 0;
} 
