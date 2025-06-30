class BankAccount:
    def __init__(self, owner, balance):
        self.owner = owner
        self.__balance = balance  # private attribute -> Balance 

    # Getter method
    def get_balance(self):
        return self.__balance

    # Setter method
    def deposit(self, amount):
        if amount > 0:
            self.__balance += amount

    def withdraw(self, amount):
        if 0 < amount <= self.__balance:
            self.__balance -= amount
        else:
            print("Insufficient balance!")

# Usage
account = BankAccount("Alice", 1000)
print("Balance:", account.get_balance())  # Accessing through getter

account.deposit(500)
print("Balance after deposit:", account.get_balance())

account.withdraw(300)
print("Balance after withdrawal:", account.get_balance())

# Trying to access private variable directly (will fail)
# print(account.__balance)  # Uncommenting this line will cause an error
