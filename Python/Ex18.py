p = float (input('Digite seu peso: '))
a = float (input('Digite sua altura: '))
sexo = input ('Sexo F-feminino e M-masculino: ')

R = p/(a*a)

if (sexo == "M"):
    if (R < 20):
        print ("Abaixo do peso")
    elif (20<=R<25):
        print ("Peso ideal")
    else:
        print ("Acima do peso")

else:
    if (R < 19):
        print("Abaixo do peso")
    elif (19<=R<24):
        print("Peso ideal")
    else:
        print ("Acima do peso")