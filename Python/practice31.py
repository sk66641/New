#Packing a tuple
fruits = ("apple", "banana", "cherry")
#Unpacking a tuple
(green, yellow, red) = fruits
print(green)
print(yellow)
print(red)
# Note: If the number of variables is less than the number of values, you can add an  asterix (*) to the variable name and the values will be assigned to the variable as a list.
print("!!!")
fruits = ("apple", "banana", "cherry", "strawberry", "raspberry")
(green, yellow, *red) = fruits
print(green)
print(yellow)
print(red)
