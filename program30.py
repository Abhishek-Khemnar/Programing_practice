def factorial(x):
    fact = 1
    for i in range(1,x+1):
        fact = fact * i
    return fact    


print("Enter number :")
x = int(input())
y = factorial(x)
print(y)