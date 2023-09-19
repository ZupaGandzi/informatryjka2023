a = int(input("podaj pierwsza liczbe sigmy "))
b = int(input("podaj druga liczbe sigmy "))


if a > b:
    a -= b
    print(a)
else:
    b -= a
    print(b)