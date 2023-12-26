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

print("#inheritance")
class Human:
    population=0
    data=[]
    def __init__(self,name,age,alive=True):
        self.name=name
        self.age=age
        self.alive=alive
        Human.population += 1
        Human.data.append(self.name)
    def greet(self):
        print(f"Hey, Good Morning! My name is {self.name} and my age is {self.age}.")
    def dead(self):
        if self.alive:
            print(f"{self.name} is no more now")
            Human.population -= 1
            Human.data.remove(self.name)
            self.alive=False
        else:
            print(f"{self.name} is already dead")
class employee(Human):
    pass
employee1=employee("anand",30)
print(Human.data)
print(Human.population)
employee2=employee("mahendra",40)
print(Human.data)
print(Human.population)
employee1.greet()
employee1.dead()
print(Human.data)
print(Human.population)
employee1.dead()

print("#adding attributes in derived class")
class employee(Human):
    # re-initiate constructor
    def __init__(self,name,age,company,post):
        super().__init__(name,age)
        # attributes
        self.organization=company
        self.Post=post
employee3=employee("miranda",25,"apple","SWE")
print(Human.data)
print(Human.population)
print(employee3.Post)
print(employee3.name)
print(employee3.organization)
employee3.dead()
print(Human.data)
print(Human.population)
employee3.dead()

print("#adding methods in derived class")
class employee(Human):
    def __init__(self,name,age,company,post):
        super().__init__(name,age)
        self.organization=company
        self.Post=post
    def hire(self,person):
        print(f"{person} has been hired in our company.")
        Human.data.append(person)
        Human.population += 1
mukesh=employee("mukesh",60,"reliance","CEO")
print(Human.data)
print(Human.population)
mukesh.hire("employee4")
print(Human.data)
print(Human.population)
mukesh.dead()
print(Human.data)
print(Human.population)
mukesh.dead()
# another method
class employee(Human):
    def hire(self,person):
        print(f"{person} has been hired in our company.")
add=employee("employee4",21)
add.hire("employee4")
print(Human.data)
print(Human.population)
add.dead()
print(Human.data)
print(Human.population)
add.dead()

print("#polymorphism")

print("#operator level polymorphism")
print(2+5, 2*5, sep=" , ")
print("2"+"5", "2"*5, sep=" , ")

print("#function level polymorphism")
lst=[2,5,7]
print(sum(lst))
# print(sum(2345))
class Animal:
    def sound(self,name,speak):
        print(f"{name} speaks {speak}")
dog=Animal()
dog.sound("dog","bhau-bhau")
cat=Animal()
cat.sound("cat","meow")

