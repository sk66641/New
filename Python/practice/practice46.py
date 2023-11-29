a='editor'
# Checking the Contents of a String
print(a.isalpha())
print(a.islower())
print(a.upper())
# searching the contents of a String
print(a.find('e'))
# replacing the contents of a String
print(a.replace('e','r'))
# The strip() method:  removes any whitespace from the beginning or the end:
a = " Hello, World! "
print(a.strip())
# splitting a string
print(a.split('d'))
print()
a='editor is here'
# here space is not letters that's why output is false
print(a.isalpha())
print(a.islower())
print(a.upper())
print()
a='234'
print(a.isdigit())
a='234 '
print(a.isdigit())
