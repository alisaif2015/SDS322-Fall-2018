#include <iostream>
using std::cout;
using std::endl;
using std::cin; 
int main() {
  int n,k;
  cout <<"Type a Number: ";  
  cin >> n >> k;
  if (k % n == 0){
    cout <<n<<" is a divisor of "<<k<<endl;
  }else{
    cout <<n<<" is not a divisor of "<<k<<endl;
  }    
    return 0;
} 
