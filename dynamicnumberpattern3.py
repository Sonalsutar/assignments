num=int(input("enter the number of rows:"))
for i in range(1,num+1):
    print(i," ",end=" ")
    for j in range (1,i):
        print(i," ",end=" ")
    print("\r")
