# Write a Python class named Rectangle constructed by a length and width and a method which will compute the area of a rectangle.
class Rectangle():
    def __init__(self, length, breadth):
        self.length = length
        self.breadth = breadth
    def display_area(self):
        return self.length * self.breadth
area=Rectangle(4,5)
print (area.display_area())


