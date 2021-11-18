
n = int(input('Digite o valor da tabuada entre 1 a 10: '))

while n <=0 or n>10:
    print(f"Apenas valores do intervalo")
    n = int(input("Digite novamente: "))

for i in range(1,21,1): 
    res = n * i
    print(f'{n} x {i} = {res}')