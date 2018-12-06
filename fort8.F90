program array1

  implicit none
  integer,dimension(4) :: i=[2,4,6,8] 
  real(4),dimension(10) :: x = [1,2,3,4,5,6,7,8,9,10]
  print *,x(i)
end program array1
