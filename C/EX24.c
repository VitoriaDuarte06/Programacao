#include <ctype.h>
#include <stdio.h>
#include <math.h>


	void main()
    {
	    char sexo;
	    
	    printf("Digite o seu sexo M para masculino e F para feminino: ");
	    scanf("%s",&sexo);
	  
	    while((sexo != 'F') && (sexo != 'M'))
            {
	        printf("\nApenas F ou M sao respostas aceitas \nDigite novamente o seu sexo: ");
	        scanf("%s",&sexo);

	        }
	      if(sexo == 'M')
        {
	        printf("\nHomem\n");
	        
	    }
	    else if (sexo == 'F')
        {
	        printf("\nMulher\n");
	    }

	   return 0;
	}
