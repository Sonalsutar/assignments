num=int(input("enter the number:"))
start=0
end=(num)
for i in range(start,end):
    for j in range(0,i+1):
        print("% ",end="")
    print("\r")