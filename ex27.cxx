#include <iostream> 
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

// Make class with a prime counter and a variable to hold the last number tested

class PrimeGenerator {
public:
  int numberOfPrimesFound;
  int lastNumberTested;

// Create a constructor to take in starting values for the above variables

  PrimeGenerator(int n, int l) {
    numberOfPrimesFound = n;
    lastNumberTested = l;
  }

// Create a method to check for primality and return if the number is prime

 int isPrime (int x) {
  bool prime = true;
   for (int number = 2;number < x; number++) {
    if (x % number == 0){
      prime = false;
      break;
    }
  }
  return prime;
 }

// This method returns the prime number given its a prime and increments variables

  int nextPrime() {
     for ( ; ; lastNumberTested++) {
      if (isPrime(lastNumberTested)){
	int prime2 = lastNumberTested;
	lastNumberTested += 1;
	numberOfPrimesFound += 1;
	return prime2;
      }
    }
  }
};



int main() {
  cout<< "Enter number of upper bound for Goldbach Conjecture: ";
  int evens;
  cin >> evens;
  for (int n = 4; n <= evens; n = n + 2) {
    PrimeGenerator sequence(0,2);
    while(true) {
      int prime1 = sequence.nextPrime();
      int difference = n - prime1;
      if (sequence.isPrime(difference)) {
	cout << n << "=" << prime1 << "+" << difference<<endl;
	break;
      }
    }
  }
}
       
