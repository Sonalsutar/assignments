num=int(input("enter the no of rows:"))
for i in range(0,num):
    for j in range(0,i+1):
        print("* ",end="")
    print("\r")
for i in range(0,num):
    for j in range(num-i-1):
        print("* ",end="")
    print("\r")