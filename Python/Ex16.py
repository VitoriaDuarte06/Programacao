   
a=float(input("Digite o tamanho do lado 01: "))
b=float(input("Digite o tamanho do lado 02: "))
c=float(input("Digite o tamanho do lado 03: "))

if ((a+b)>c and (a+c)>b and (c+b)>a):
    if ((a != b) and (a!=c)):
        print ("Triangulo Escaleno!")
    
    elif ((a == b) and (a==c)):
        print ("Triangulo Equilatero!")

    
    else:
        print ("Triangulo Isosceles!")
        
    
   

else:
    print ("Nao é Triangulo!")