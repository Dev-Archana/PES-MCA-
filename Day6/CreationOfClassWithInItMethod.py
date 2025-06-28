class Students:
    # Default Constructor 
    # def __init__(self):
    #     print("this is default constructor")
    # Parameterized Constructors
    def __init__(self,name,m1,m2):
        self.name=name
        self.m1=m1
        self.m2=m2
    # Declare Method inside class 
    def avg(abc):
        print(abc.m1)
        print(abc.m2)
        
s1=Students('Tanvi',60,70)
print(s1.name)
s1.avg()
s2=Students('Tanu',30,45)
print(s2.name)
s2.avg()



# class Car:
#     def __init__(self,name):
#         self.name=name
#     def yet_strat():
#         break1=False
#         c=False
#         a=False
#         print("Car is not started")
# c1=Car('BMW')
# c1.start()