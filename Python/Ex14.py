a = float(input("Digite o primeiro valor: "))
b = float(input("Digite o segundo valor: "))
c = float(input("Digite o terceiro valor: "))

if (a > b):

    if (a > c):
        print ("O valor", a, "é o maior")
    else:
        print ("O valor", c, "é o maior")

elif b > c:
    print ("O valor", b, "é o maior")
else:
    print ("O valor", c, "é o maior")


