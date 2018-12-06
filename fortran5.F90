program something

implicit none
real :: num1,num2,num3,volume
character(len=10) :: name
print *, "enter l,w,h,name: "
read *, num1,num2,num3,name
sphere = (4/3) * 3.14159 * num1**2
volume = num1 * num2 * num3
print *, "Hello" , name, "volume of cube is", volume, "for sphere it is", sphere

end program something
