program variables

implicit none 
real :: age, years_left
real, parameter :: ret_age = 62.

age = 27.35
years_left = ret_age - age

print *, "years left to retire: ", years_left

end program variables
