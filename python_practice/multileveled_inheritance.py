class dimension:
    def __init__(self):
        self.length=int(input("Enter the Lenght :"))
        self.width=int(input("Enter th width :"))
        self.heigth=int(input("Enter the height :"))
    
    def show(self):
        print("The Dimensions are")
        print(f"Lenght:{self.length}\n Width:{self.width} \n Height:{self.height}")
    
    def volume(self):
        return "The volume is ",self.length*self.width*self.height
    


class Model(dimension):
    def __init__(self):
        super().__init__()
        self.Mname=input("Enter the name : ")
        self.Mcolor=input("Enter the colour : ")
        self.Mfdate=input("Enter the date :")

    def  display(self):
        print(f" Model Name:{self.Mname} \n Model colour :{self.Mcolor} \n Manufacture date:{self.Mfdate}")


class Box(Model):
    def __init__(self):
        super().__init__()
        self.price=float(input("Enter the price :"))
    
    def details(self):
        print(f"Price : {self.price}")



Bl=Box()  #object created of called
print(Bl.show(),Bl.colume(),Cl.display(),Bl.de)