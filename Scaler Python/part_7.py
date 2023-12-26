print("#file handling")
# data is permanently stored
# by default it opens in reading mode
f = open("name.txt")
print(f.closed)
print(f.read())
f.close()

print('#modes of opening a file')
# "r":read only
# "W":write only
# "a":appending data at the end of file
# "wt":write text
# "wb":write binary
# "rb":read binary
# "rt":read text
f = open("name.txt", "w")
f.write("i am writeable now")
f = open("name.txt", "r")
print(f.read())

print('#with open')
# most common way to perform operations on files
# it closes the file after performing operations
# by default it opens in reading mode
with open("name.txt") as f:
    print(f.read())
print(f.closed)
with open("name.txt", "w") as f:
    f.write("Hey! How are you.")
with open("name.txt") as f:
    print(f.read())

print("#writing a file")
with open("new.txt", "w") as f:
    f.write("this is a new file.\n")
    f.write("writing in multiple lines.")
with open("new.txt") as f:
    print(f.read())

print("#reading a file")
# read(): reads the whole data
# read(l): reads data of length l
# tell(): tells you about the position of file handle
# seek(): it helps to re-position your file handle
# readlines(): reads data line by line
with open("new.txt") as f:
    # reading first 4 character
    print(f.read(4))
    # reading next 4 character
    print(f.read(4))
    print(f.tell())
    f.seek(10)
    print(f.read(7))
    print(f.tell())
with open("new.txt") as f:
    data = f.readlines()
    print(data)
    for i in data:
        print(i)

print("#appending a file")
with open("new.txt") as f:
    print(f.read())
with open("new.txt", "a") as f:
    f.write("this is an appended data.")
with open("new.txt") as f:
    print(f.read())

print("#handling binary files")
with open("sanu.jpg", "rb") as f:
    print(f.read())

print("#error and exception handling")
# type of errors
print(dir(__builtins__))

print("#try and except")
try:
    print(5/0)
except:
    print("there is an error you might be looking for")
print("rest of the code")

print("#except block")
try:
    print(5/0)
except Exception as error:
    print(error)
print("rest of the code")
try:
    print("2"+2)
except Exception as error:
    print(error)
print("rest of the code")

print("#case1")
try:
    print("open file")
    print(5/0)
    # if there is an error, it will move to except block and rest of the code in try block will not be executed
    print("close file")
except Exception as error:
    print(error)

print("#case2")
try:
    print("open file")
    print(5/0)
except Exception as error:
    print(error)
    # so, you might write those rest of the codes in except block to get it executed
    print("close file")

print("#case3")
try:
    print("open file")
    print(5/2)
except Exception as error:
    print(error)
    # but what if there is no any error in try block, then those rest of the codes in except block will not be executed
    print("close file")

print("#case4")
try:
    print("open file")
    print(5/2)
    # so, you might think of writing those rest of the codes in both try and except blocks, but this is not considered as good practice
    print("close file")
except Exception as error:
    print(error)
    print("close file")

print("#finally")
# finally block code will be executed in any case
try:
    print("open file")
    print(5/2)
except Exception as error:
    print(error)
finally:
    print("close file")
