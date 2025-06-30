class Account:
    def account(self):
        print("This is Account class method")
class Savings(Account):
    def savings(self):
        print("This is saving class method")
class Student(Account):
    def student(self):
        print("This is student class method")
class Current(Account):
    def current(self):
        print("This is current class method")
# object creation 
s1=Savings()
s1.savings()
print("__________________")
s2=Student()
s2.student()
print("__________________")
c1=Current()
c1.current()
