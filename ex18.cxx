#include <iostream> 
#include <cmath>
using std::cout;
using std::endl;
using std::cin; 

/*
This function called primeTest takes an integer value from the main function
and returns a value of 0 (True) if the integer value is a prime and a value of 1 (False) if the value is not a prime  
*/

int primeTest (int integer) {

  bool isPrime = true;

  /*Use sqrt of n as an upper bound because no two numbers can multiply
  to a number "n" without one of the multiples being less than or equal to the   sqrt of the number. Hence you can find a multiple of a number below its
  sqrt making the search faster
  */
  for (int n = 2; n <= sqrt(integer); n++) { 
    if (integer % n == 0) 
      {
	isPrime = false;
	break;
      }
  }
  return isPrime;
}


/* This section of code ultimately does the following: takes an input for the number of primes needed, uses the primeTest function to search for primes, increments a counter each time a prime is found, and prints the prime until the counter reaches the user inputted number
 */


int main () {
  cout << "Enter a Number: ";
    int number;
  cin >> number;
  int numberOfPrimesFound = 0;

  // for loop finds a prime and incrememnts a counter for each prime found and   // print value until the counter exceeds the user input (n)


  for (int n = 2; ;n++) {
    if (primeTest(n) == 1) {
      numberOfPrimesFound += 1;
      if (numberOfPrimesFound <= number) {
      	cout << n << endl;
      }    
      else 
	break;
    }
  }
} 
