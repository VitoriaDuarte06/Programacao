sexo= str (input('Sexo F-feminino e M-masculino: '))

  
while(( sexo!= "F") and (sexo != "M")):

    sexo = str(input("\napenas F ou M são respostas aceitas \n Digite novamente o seu sexo: "))
    

if(sexo == "M"):

    print("\nHomem\n")
        
    
elif (sexo == "F"):

    print("\nMulher\n")