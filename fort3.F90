program loops
  
  implicit none
  integer :: num, i
  read *, num
  hello: do i = 1,num
     print *, "Hello World"
  end do hello
end program loops
