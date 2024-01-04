class customer():
    def __init__(self):
        self.cname=input("Enter the name of the customer :")
        self.ccity=input("Enter the city name :")


class product():
    def __init__(self):
        self.pname=input("Enter the name of the product:")
        self.pprice=int(input("Enter the price of the product:"))


class order(customer,product):
    def __init__(self):
        customer.__init__(self)
        product.__init__(self)
        self.quan=int(input("Enter the quantity of product:"))
        self.amount=float(self.pprice*self.quan)
    def gbill(self):
        print("----------BILL------------")
        print(f" Customer Name : {self.cname} \n Product Brought : {self.pname} \n Quantity of Product :{self.quan} \n Total Amount : Rs {self.amount}")

Y=order()
Y.gbill()
