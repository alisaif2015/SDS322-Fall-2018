#include <iostream> 
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

/*
This section of code creates the structure that will hold 2 members that are the number
 of primes found and that last number tested for primality
 */
struct primeSequence  {
  int numberOfPrimesFound;
 int lastNumberTested;
}; 

/*
This function takes in the structure type "primeSequence" which we defined earlier.
With this, the function uses a boolean test to confirm primality and returns the value
of the boolean variable called isPrime. We test numbers up to the sqrt of the 
lastNumberTested because after the factors comprising the sqrt of the number, the factorswill overlap and waste time and memory  
 */
int primeTest ( primeSequence sequence){
  bool isPrime = true;
  for (int number = 2; number <= sqrt(sequence.lastNumberTested); number++) {
      if (sequence.lastNumberTested % number == 0){
	isPrime = false;
	break;
      }
    }
	 return isPrime;
}

/*
This function passes the reference of the structure variable called sequence from the 
main function. The member of "sequence" is continuously incremented by 1 and tested for
primality. If the member is prime then its value is assigned to a variable called prime
and is returned to the main function
 */
int nextprime(primeSequence& sequence){
  for ( ; ; sequence.lastNumberTested++) {
  if (primeTest(sequence)){
    int prime = sequence.lastNumberTested;
    sequence.lastNumberTested += 1;
    sequence.numberOfPrimesFound += 1;
    return prime;
  }
}
}

/*
This function takes in a value for a variable called nprimes. It then gives a value of
0 and 2 for the members of the structure variable called sequence. Using a while loop
if the first member of the structure is less than nprimes then it will print out the 
value returned to it by the function called nextprime. Hence you will get n number of 
primes where n < the user input 
 */
int main() {
  cout <<"Enter number of primes ";
  int nprimes;
  cin >> nprimes;
  struct primeSequence sequence = {0,2};
  while (sequence.numberOfPrimesFound < nprimes) {
    int number = nextprime (sequence);
    cout << "Number " << number << " is prime" << endl;
  }
}




      
      
