p = float(input("Digite o valor do peso: "))
a = float(input("Digite o valor da altura: "))

c = p/(a*a)


if (c < 20):
    print ("Você está abaixo do peso")

elif c < 25:
    print ("Você está com um peso ideal")
else:
    print ("Você está acima do peso")

