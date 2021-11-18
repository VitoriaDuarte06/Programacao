z= 0
i= 1
x= 1
w= 0

n = float (input('Digite o número de valores: '))

while ((n <= 0) or (n > 100)):
    print (" Erro! Digite o número de valores, entre 1 e 100. ")
    n = float (input(' Digite novamente:')) 

while (z != n):
    t= i+x
    print(t)
    z= z+1
    i= i+2
    x= t
    w= t+w
print("A soma dos", n, "termos é:", w)