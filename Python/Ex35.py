numeros = []
 
for i in range(0, 10, 1):
    x = int(input('Digite um numero: '))
    numeros.append(x)


a = float(input("Digite a constante de multiplicação: "))

print ("Os resultados foram: ")
for i in range (0, 10, 1):
    T= numeros[i]*a
    print(f'{numeros[i]} X {a} = {T}')
    numeros[i]=T
