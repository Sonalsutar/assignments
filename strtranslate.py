def test(str):
	return str.translate(str.maketrans('PTSHA', '90168'))
str = "PHP"
print(" string: \n",str)
print("number: \n",test(str))
str = "JAVASCRIPT"
print(" string: \n",str)
print("number: \n",test(str))