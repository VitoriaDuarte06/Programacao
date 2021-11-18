a = float(input("Digite o valor do primeiro lado: "))
b = float(input("Digite o valor do segundo lado: "))
c = float(input("Digite o valor do terceiro lado: "))

if (a > b):
        if (a > c):
            if (a*a == (b*b)+(c*c)):
                print ("Triângulo")
            else:
                print ("Não é um triângulo")
        elif (c*c==(a*a)+(b*b)):
            print ("Triângulo")
        else:
            print ("Não é um triângulo")   
elif b > c:
        if (b*b == (a*a)+(c*c)):
            print ("Triângulo")
        else:
            print ("Não é um triângulo")
elif (c*c==(a*a)+(b*b)): 
    print ("Triângulo")
else:
    print ("Não é um triângulo")
