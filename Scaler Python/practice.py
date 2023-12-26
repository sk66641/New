print("#round")
print(round(3.2345576, 3))

# error
# print({1,2,3}+{3,4,5})
# unsupported operand type(s) for +: 'set' and 'set'

# Given three integers, A, B and C. You have to find the number of days it will take to reach zero cases of Corona in a city.
# A - Average cases recovered in a day of the corona.
# B - Number of new cases of corona daily.
# C - Current active cases of the corona.
# Return the minimum number of days it will take to reach 0 active cases of Covid.


class Solution:
    # @param A : integer
    # @param B : integer
    # @param C : integer
    # @return an integer
    def solve(self, A, B, C):
        self.a = A
        self.b = B
        self.c = C
        if self.a >= self.b+self.c:
            return 1
        else:
            count = 1
            while self.b+self.c > self.a:
                self.c = self.b+self.c-self.a
                count += 1
            return count
solution = Solution()
print(solution.solve(4, 3, 7))

print("#argument check")
def fun1(name,age):
    print(name,age)
fun1(23, "Mohit")
fun1(age =23, name="Mohit")
fun1("Mohit", age=23)
# SyntaxError: positional argument follows keyword argument or default follows non-default
# fun1(name="Mohit", 23)
# TypeError: fun1() got multiple values for argument 'name'
# fun1(23, name="Mohit")

def Interest(p,c,t=2,r=0.09):
    return p*t*r
Interest(c=4,r=0.12,p=5000)
Interest(p=1000,c=5)
# SyntaxError: positional argument follows keyword argument
# Interest(r=0.05,5000,3)

print("#updating elements")
sets = {3, 4, 5}
sets = sets.union({1, 2, 3})
print(sets)
sets.update([1, 2, 3])
print(sets)
# TypeError: unsupported operand type(s) for +=: 'set' and 'set'
# sets += {1, 2, 3}
# sets += [1, 2 ,3]