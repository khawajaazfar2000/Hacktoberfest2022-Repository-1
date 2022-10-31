
x=int(input("Enter first number: "))
y=int(input("Enter second number: "))



print("-----Before swapping-----")
print("value of x before swapping is", x)
print("value of y after swapping is", y)

x=x+y
y=x-y
x=x-y



print("-----After swapping-----")
print("value of x after swapping is", x)
print("value of y after swapping is", y)