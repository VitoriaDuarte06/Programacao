a = float (input('Digite o valor da aceleração: '))
V0 = float (input('Digite o valor da velocidade inicial: '))
t = float (input('Digite o valor do tempo de percurso: '))

V = V0+ (a*t)


if (V <= 40):
    print ("Lento")
    
elif (V <= 60):
        print ("Permitido")
elif (V <= 80):
        print("Cruzeiro")
elif (V <= 120):
        print("Rapido")
else:
        print ("Muito rapido")