tup = ("apple","banana","cherry","orange","kiwi","melon","mango")
print(tup[-4:-1])
print(tup[-4])
if "apple" in tup:
    print("Yes, 'apple' is in the fruits tuple")
# convertion of tuple to list
lis=list(tup)
print(lis)
# Updating Tuple
lis.append("sanu")
print(lis)
# convertion of list to tuple
tup=tuple(lis)
print(tup)
# Although, you can delete the tuple completely. The del keyword can delete the tuple completely.
del tup
print(tup)