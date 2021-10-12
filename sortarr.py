items=[20,67,2,66,3737,999,220,8088]
print("The list of items are:"+str(items))
for i in range (len(items)):
    for j in range (i+1,len(items)):
        if items[i]>items[j]:
            items[i],items[j]=items[j],items[i]
print("the sorted list of items: "+str(items))
