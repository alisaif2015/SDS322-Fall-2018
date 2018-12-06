#include <iostream> 
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

class PrimeGenerator {

private:

  int numberOfPrimesFound;
  int lastNumberTested;

public: 

  int getNumberPrimes () 
  {return numberOfPrimesFound;};

  PrimeGenerator (int x , int y) 
{
  numberOfPrimesFound = x;
  lastNumberTested = y;
    };

int  nextPrime ()
  {
    for (; ;lastNumberTested++)
      {
	if (primality (lastNumberTested)) 
	  {
	    lastNumberTested +=1;
	    numberOfPrimesFound +=1;
	    return lastNumberTested;
	  }
      }
  };

int  primality (int number)
 { 
   bool isPrime = true;
   for (int x = 2 ; x < sqrt(number) ; x++) 
     {
       if (number % x == 0) 
	 {
	 isPrime = false;
	 break;
	 }
     }
   return isPrime;
 };

};


  int main () {
    cout << "Enter Number of Primes: ";
    int nprimes;
    cin >> nprimes;
    PrimeGenerator sequence (0,2);
    while (sequence.getNumberPrimes() < nprimes) {
      int number = sequence.nextPrime();
      cout << "Number " << number << " is prime" << endl;
    }
  }
