program FizzBuzz

  implicit none
  integer :: num
  read *, num
  fizzbuzzez:if (mod(num,3) == 0 .and. mod(num,5) == 0) then
     print *, "FizzBuzz"
  else if (mod(num,3) == 0) then
     print *, "Fizz"
  else if (mod(num,5) == 0)  then
     print*, "Buzz"
  end if fizzbuzzez
end program FizzBuzz


