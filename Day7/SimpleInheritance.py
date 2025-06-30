'''
Inheritance : One class aquiring the properties of another class is known as inheritance 
- class from where we are taking the properties is known as super class,base class or 
parent class.

-the class where we are storing/using the properties of other class is known as 
child class , derived class ,sub class

types:
simple inheritance 
multi level inheritance 
multiple inheritance
hybrid inheritance

'''
# Super class or base class or parent class
class Students:
    def __init__(self,name,usn,marks):
        self.name=name
        self.usn=usn
        self.marks=marks

# subclass or derived class or child class 
class Department(Students):#in this class we dont have any init method(constructor )
    def display(abc):
        print(abc.name)
        print(abc.usn)
        print(abc.marks)
d=Department('xyz',1,100)
d.display()
    






