program Main

  implicit none 

  integer :: i=2 , j=3
  integer :: i_old = 2, j_old = 3
  call swap (i,j,i_old,j_old )

contains 
  subroutine swap (i,j,i_old,j_old)
    integer , intent(in):: i_old,j_old
    integer :: i,j,k
    k = i
    i = j
    j = k
    print *, i,j,i_old,j_old

  end subroutine swap

end program Main
