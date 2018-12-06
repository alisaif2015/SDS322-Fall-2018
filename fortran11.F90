program Main

implicit none

logical :: isprime
integer :: numPrimes,i,counter
print *, "Enter # of primes wanted"
read *, numPrimes
counter = 0
do while (counter < numPrimes) 
   if (prime_test_function(i)) then 
      print *, prime_test_function(i)
      counter = counter + 1
   end if
end do

contains  
  logical function prime_test_function(n)
    
    integer :: n,i
    logical :: flag
    flag = .True. 
    do i = 2, n**.5
       if (mod(n,i) == 0) then
          flag = .False.
          exit 
       end if
    end do
    prime_test_function = flag
end function prime_test_function
end program Main
