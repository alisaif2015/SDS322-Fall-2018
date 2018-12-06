program bankAccount

  implicit none
  real :: account1 = 100 , account2 = 200, counter = 0
  
  do while (account1 < account2)
     account1 = account1 * 1.05
     account2 = account2 * 1.02
     counter = counter + 1
  end do
  print *, counter

end program
     
     
