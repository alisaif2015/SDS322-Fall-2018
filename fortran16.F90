program new

implicit none

type Point 
real :: x, y
end type Point

type(Point) :: p1,p2

p1 = Point(1,1)
p2 = Point(3,3)

type Rectangle
   type(Point) :: p1,p2
   area = (p2.x-p1.x)**2 * (p2.y-p1.y)**2
   Rectangle = area
end type Rectangle

print *, Rectangle(p1,p2)
end program new
