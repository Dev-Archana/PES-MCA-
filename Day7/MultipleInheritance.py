'''
Multiple Inheritance : 
one class aquiring the properties from 2 or more classes is known as multiple-inheritance

example :
super class 1: ATM 
super class 2: Web Payment
sub class -> Account 

Hybrid Inheritance :
its a combination of 2 or more inheritance type 
example : 
Amazon Platform

Super class: 

'''
class ATM:
    def amt_atm(self):
        print("This is ATM class Amount Transaction")
class Web:
    def amt_web(self):
        print("ThIS Is Web class Amount Transaction")
class Account(ATM,Web):
    pass
a=Account()
a.amt_atm()
a.amt_web()










