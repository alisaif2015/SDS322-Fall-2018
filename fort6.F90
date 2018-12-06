module tester
  implicit none
  integer :: x=5
end module tester

program tests
  use tester
  print *, x * 5
end program tests
