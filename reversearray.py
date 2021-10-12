#Program to reverse the array
a=[11,22,33,44,55]
L=(len(a))
for i in range (int(L/2)):
    n=a[i]
    a[i]=a[L-i-1]
    a[L-i-1]=n
print(a)
