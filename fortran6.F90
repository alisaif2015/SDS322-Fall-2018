program Fizzbuzz

  implicit none
  integer :: a , b , c , d
  
  print *, "Enter an integer: "
  read *, a
  c = a/3
  d = a/5
  e = 3 * c
  f = 5 * d
  g = a - e 
  h = a - f
  if g 
  print *, "FizzBuzz"
  else if !its a multiple of 3 then
     print *, "Fizz"
  else if !its a multiple of 5 then 
     print *, "Buzz"
  end if

end program 
  
