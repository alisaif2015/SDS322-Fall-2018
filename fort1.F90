program New
  call trial
  print *, x
contains
  subroutine trial
    implicit none
    integer :: x=5
    return
  end subroutine trial


end program New
