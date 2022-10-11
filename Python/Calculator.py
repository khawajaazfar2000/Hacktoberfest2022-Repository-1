def add(x,y):
    return x+y
def sub(x,y):
    return x-y
def multi(x,y):
    return x*y
def div(x,y):
    return x/y

print("Select Operator")
print("1. add")
print("2. sub")
print("3. muti")
print("4. div")

Select=input("Entre a number from 1 to 4:")
a=int(input("entre first number:"))
b=int(input("entre second number:"))

if   Select =='1':
    print(a, "+", b, "=",   add(a,b))
elif Select =='2':
    print(a, "-", b, "=",   sub(a, b))
elif Select =='3':
    print(a, "*", b, "=",   multi(a, b))
elif Select =='4':
    print(a, "/", b, "=",   div(a, b))
else:
    print("Invalid no.. You may go to Hell.. FUCK YOU.........")
