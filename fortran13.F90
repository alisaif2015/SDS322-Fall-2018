program averageArray

  integer, dimension(5) :: i = [1,2,3,4,5]
  real(4),dimension (5) :: x = [1,2,3,4,5] , y = [0,0,0,0,0], holder
  integer :: z
  holder = x(i)
  print *, holder
  do z = i(1),i(4)
     y(z) = (x(z) + x(z+1))/2
  end do
  print *, y
   end program averageArray
