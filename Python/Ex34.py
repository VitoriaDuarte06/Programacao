numeros = []
 
for i in range(0,  5, 1):
    x = int(input('Digite um número: '))
    numeros.append(x)

print ("O maior número é: ")

b=numeros[0]

for i in range(0, 5, 1):
    if numeros[i]>b:
        b=numeros[i]

print(b)




