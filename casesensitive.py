def test(str):
    return str.islower() or str.isupper()
str = "INDIA"
print("Original string: ",str)
print("Coded string: ",test(str))
str = "monuments"
print("\nOriginal string: ",str)
print("Coded string: ",test(str))
str = "Indian Monuments"
print("\nOriginal string: ",str)
print("Coded string: ",test(str))