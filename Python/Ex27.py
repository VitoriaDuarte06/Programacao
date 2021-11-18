n = float (input('Digite um valor positivo: '))

while (n <= 0):
    print (" Erro! Apenas números positivos. ")
    n = float (input(' Digite novamente:')) 

A = float (input('Digite o primeiro valor: '))
B = float (input('Digite o segundo valor: '))


while (B < A):
    print (" Erro! O segundo valor deve ser maior que o primeiro. ")
    B = int (input(' Digite novamente:')) 

i= B        

while (i >= A):
    T= n*i
    
    print(f'{n} X {i} = {T}')
    i= i-1
