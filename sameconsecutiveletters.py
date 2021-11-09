def isConseq(word):
    word = word.upper()
    for i in range(0, len(word) - 1):
        if (ord(word[i]) + 1) == ord(word[i + 1]):
            return True
    return False

print("list :Math ,Abcus,Kurkure,Can")
list = ['Math','abcus','Kurkure','Can']
for j in list:
    if (isConseq(j)):
        print(f"'{j}'it has consequtive letters")
    else:
        print(print(f"'{j}' does not contain consequtive letters"))