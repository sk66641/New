string = input()
j = 0
for i in string:
    j += 1
    if i != string[-j]:
        break
print(j)
if j!=len(string):
    print("Not a pallindrome")
else:
    print("pallindrome")