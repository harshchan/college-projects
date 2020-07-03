#ceate a sales system for car dealership using OOPS


class car():


    def __init__(self,code,model,price,year,km):
        
        self.code=code
        self.model=model
        self.price=price
        self.year=year
        self.km=km



def printcars():
    l=len(c)
    for i in range(0,l):
        print(f'\n code={c[i].code}\n model={c[i].model}\n price in lakhs{c[i].price}\n year of manufacturing={c[i].year}\n mileage ={c[i].km}')
    print("\n for returning to main menu press 1\n for exiit out press 2")
    e=int(input())
    if e==1:
        menu()
    elif e==2:
        exit(0)



def addcars():
    print("how many cars you have to add")
    n=int(input())
    for i in range(0,n):

        code=int(input("enter the code"))
        model=str(input("enter the model"))
        
        price=float(input("enter the price in lakhs"))
        year=int(input("enter year of manufacturing"))
        km=int(input("how  much mileage"))
        c.append(car(code,model,price,year,km))
        print("\n car record added sucessfully")
        printcars()
        print("\n for returning to main menu press 1\n for exiit out press 2")
        e=int(input())
        if e==1:
            menu()
        elif e==2:
            exit(0)

def deletecars():
    l=len(c)
    print(l)
    t=int(input("enter the unique car code"))
    for i in range(0,l):
        if c[i].code==t:
            del c[i]
        else:
            print("@@@$%%%%%****")
            printcars()
    print("\n for returning to main menu press 1\n for exiit out press 2")
    e=int(input())
    if e==1:
        menu()
    elif e==2:
        exit(0)

            

def menu():
    print("\n what do you want to do \n press 1 for displaying all the cars\n press  2 for adding cars to list\n press 3 for removing cars of list\n for exit press 4")
    t=int(input())
    
    
    if t==1:
        
        printcars()
    
    elif t==2:
        
        addcars()

    elif t==3:
        deletecars()
        print("record deleted  sucesssfully")
    
    elif t==4:
        exit(0)
c=[]

c.append(car(1,"sedan",10,2019,20))
c.append(car(2,"minisedan",10,2009,30))
c.append(car(3,"luxury",10,2020,10))



menu()
