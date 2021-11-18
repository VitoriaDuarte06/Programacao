#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int main(int argc, char const *argv[])
{

int i,j, c, res, linhas, colunas, valor;
valor=0;
int **numeros;

do
{
system("cls");

printf("\nDigite o valor de linhas entre 1 e 10: ");
scanf("%i", &linhas);

while(linhas>10 || linhas<=0)
{
printf("Erro!\nDigite o valor de linhas novamente, entre 1 e 10: ");
scanf("%i",&linhas);
}

printf("Digite o valor de colunas entre 1 e 10: ");
scanf("%i", &colunas);

while(colunas>10 || colunas<=0)
{
printf("Erro!\nDigite o valor de colunas novamente, entre 1 e 10: ");
scanf("%i",&colunas);
}
numeros = (int**)malloc(linhas*sizeof(int));

for(int i=0; i<linhas; i++)
{
numeros[i]= (int*)malloc(colunas*sizeof(int));
}

printf("Digite os numeros para matriz %i x %i\n", linhas, colunas);
for(int i=0; i<linhas; i++)
{
    for(int j=0; j<colunas; j++)
    {
     scanf("%i", &numeros[i][j]);
    }
}
printf("Os numeros digitados na matriz foram:\n");
for(int i=0; i<linhas; i++)
{
   for(int j=0; j<colunas; j++)
   {
       printf(" %i  ", numeros[i][j]);
   } 
printf("\n");
}

printf("\nDigite um numero para consulta: ");
scanf("%i", &c);


for(int i=0; i<linhas; i++)
{
    for(int j=0; j<colunas; j++)
  
 
   if (c==numeros[i][j])
   { 
       printf("\nO Numero %i se encontra na Linha %i e na Coluna %i do vetor matriz",c,i,j);
   }

   else 
   {
       valor++; 
   }
    if(valor==linhas)
   {  
       printf("\nValor nao encontrado!\n");
    valor=0;  
   } 
   
}
printf("\nDigite 2 para sair, ou qualquer numero para nova consulta: ");
scanf("%i",&res); 
}
   while(res !=2);
   return 0;
}