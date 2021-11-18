#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{

int i,n,q,c,valor;
valor=0;

int *numeros;

do
{
system("cls");


printf("\nDigite a quantidade de valores: ");
scanf("%i", &q);


while(q>20 || q<0)
{
printf("Erro!\nFora da faixa possivel de valores. Digite novamente: ");
scanf("%i",&q);
}

numeros = (int*)malloc(q*sizeof(int));

printf("Digite os numeros:\n");
for(i=0; i<q; i++)
{
    scanf("%i", &numeros[i]);
}

printf("Digite um numero para consulta: ");
scanf("%i", &c);


for(i=0; i<q; i++)
{ 

   if (c==numeros[i])
   { 
       printf("O Numero %i se encontra na Posicao %i do vetor",c,i);
   }

   else 
   {
       valor++; 
   }

   if(valor==q)
   {
       printf("Valor nao encontrado!");
       valor=0; 
   }
}
printf("\nDigite 2 para sair, ou qualquer numero para nova consulta: ");
    scanf("%i",&n); 
}

while(n !=2);

return 0;
}