#include <iostream>
using std::cout;
using std::endl;
using std::cin; 
int main() {
  int n;
  cout <<"Type a Number: ";  
  cin >> n;
  if (n % 3 == 0 and n % 5 ==0){
      cout<<"Fizzbuzz!"<<endl;
    }      else if (n % 3 == 0){
              cout<<"Fizz!"<<endl;
    }         else if (n%5 ==0){
                 cout<<"Buzz!"<<endl;
    }
      
    return 0;
} 
