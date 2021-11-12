def factors(x):
   print("\nThe factors of",x,"are:")
   for i in range(1, x + 1):
       if x % i == 0:
           print(i)

num1 = 1
factors(num1)

num2 = 12
factors(num2)

num3 = 100
factors(num3)