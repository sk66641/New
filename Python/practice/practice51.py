class Student12:
    def __init__(self, sn):
        self.sname = sn
        
    def setSName(self, sn):
        self.sname = sn

    def getSName(self):
        return self.sname

s1 = Student12("Eman")
print(s1.getSName())
s1.setSName("Eman2")
print(s1.getSName())
