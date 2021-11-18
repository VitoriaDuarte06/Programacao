numeros = []

x = int(input('Digite a quantidade de valores: '))

while x<=0 or x>20:
    print(f"Erro! Digite um valor entre 1 e 20")
    x = int(input("Digite novamente: "))

for i in range(0,x,1): 
    n = int(input('Digite os números: '))
    numeros.append(n)


cons = int(input('Digite o número que deseja consultar: '))

valor=0

for i in range(0,20,1): 
    if cons==numeros[i]: 
     print(f"O número está na posição: {i} do vetor")
    else:
     valor=valor+1
    if valor==x:
     print('Valor não encontrado!')