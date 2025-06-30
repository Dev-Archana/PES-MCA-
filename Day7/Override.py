#  create a class Emplyoee and salary with display method add attributes as name,employee_id,salary ,department
class Employee:
    def __init__(self,name,department,employee_id,salary):
        self.name=name
        self.department=department
        self.employee_id=employee_id
        self.salary=salary
    def display(abc):
        print("this is main display method")
        print(abc.name)
        print(abc.department)
        print(abc.employee_id)
class Salary(Employee):
    def display(abc):
        print("This is Overriden salary method")
        print(abc.salary)
s1=Salary("Anu","Development",1,70000)
s1.display()
    
        