program pythagoreanTriple

implicit none
integer :: a , b , c

do a = 1, 100
   do b = a + 1, 100
      do c = 1, 100
         if (a*a + b*b == c*c) then
            print *, a, ",", b, ",", c
         end if
      end do
   end do
end do


end program
