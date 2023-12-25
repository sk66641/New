print("#classes and objects in python")
class Human:
    pass
name=Human()
print(type(name))

print("#class constructor")
class Human:
    # constructor(special method, they are called automatically)
    def __init__(self):
        print("This will always print")
name=Human()
age=Human()
class Human:
    def __init__(self,name,age,hobby):
        # attributes
        self.name=name
        self.age=age
        self.hobby=hobby
kriti=Human("kriti",18,"playing")
soni=Human("soni",20,"reading")
print(kriti.name,kriti.age,kriti.hobby,sep=" , ")
print(soni.name,soni.age,soni.hobby,sep=" , ")

print("#class methods")
class Human:
    def __init__(self,name,age,hobby):
        self.name=name
        self.age=age
        self.hobby=hobby
    def greet(self):
        print(f"Hey, Good Morning! My name is {self.name} and my hobby is {self.hobby}.")
rohit=Human("rohit",30,"cricket")
sunil=Human("sunil",40,"football")
rohit.greet()
sunil.greet()
rohit.hobby="sleeping"
rohit.greet()

print("#class variables")
class Human:
    population=0
    data=[]
    def __init__(self,name,age,hobby):
        self.name=name
        self.age=age
        self.hobby=hobby
        Human.population += 1
        Human.data.append(self.name)
print(Human.population)
print(Human.data)
sunil=Human("sunil",40,"football")
print(Human.population)
print(Human.data)
rohit=Human("rohit",30,"cricket")
print(Human.population)
print(Human.data)

print("#adding more methods in class")
class Human:
    population=0
    def __init__(self,name,age,alive=True):
        self.name=name
        self.age=age
        self.alive=alive
        Human.population += 1
    def dead(self):
        if self.alive:
            print(f"{self.name} is no more now")
            Human.population -= 1
            self.alive=False
        else:
            print(f"{self.name} is already dead")
person1=Human("person1",80)
person2=Human("person2",90)
print(Human.population)
person1.dead()
print(Human.population)
person1.dead()
print(Human.population)

