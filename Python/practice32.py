# Looping/Iterating Tuple
# You can loop through the tuple items by using a for loop.
tup = ("apple", "banana", "cherry")
for x in tup:
    print(x)
# You can also loop through the tuple items by referring to their index number. Use the range() and len() functions to create a suitable iterable.
print("!!!")
tup = ("apple", "banana", "cherry")
for x in range(len(tup)):
	print(tup[x])
print("!!!")
for x in range(2):
	print(tup[x])
# You can loop through the list items by using a while loop.
print("!!!")
x = ("apple", "banana", "cherry")
i = 0
while i < len(x):
    print(x[i])
    i = i + 1
