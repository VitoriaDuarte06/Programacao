n = float (input('Digite um valor positivo: '))
i= 1

while (n <= 0):
    print (" Erro! Apenas números positivos. ")
    n = float (input(' Digite novamente:')) 

        
while (i <= 10):
    T= n*i
    
    print(f'{n} X {i} = {T}')
    i= i+1

        