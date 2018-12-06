program divisors

  implicit none

  integer :: a,p

  print *, "Enter numbers a and p: "
  read *, a,p
  if (mod(a,p) /= 0) then
     print *, p, " is not a divisor of ", a
  else 
     print *,p, " is a divisor of ", a
  end if
end program

