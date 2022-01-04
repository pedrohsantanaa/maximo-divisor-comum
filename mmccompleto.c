#include <stdio.h>

int prox_primo(int a);

void main()
{
 
    int qtde, i, primo=2, k=0, j, aux;    
 
    int qt_um=1;
 
    printf("Digite quantos Numeros Deseja Usar: ");
 
    scanf("%d",&qtde);
 
    int mat[15][qtde+1];
 
    for(i=0;i<15;i++)
    {
 
        for(j=0;j<=qtde;j++)
 
            mat[i][j] = 0;
 
    }
 
	for(i=0;i<qtde;i++)
    {
 
        printf("\nInforme o %d Numero:",i+1);
 
        scanf("%d",&mat[0][i]);
 
    }
 
i = 0;
 
while(qt_um < qtde)
{
 aux = 1;
 while(aux != 0)
 {
   aux = 0;      
   for(j=0;j<qtde;j++)
   {
	   if ((mat[i][j] % primo) == 0)
	   {
			mat[i+1][j] = (mat[i][j] / primo);
			mat[i][qtde] = primo;
			aux++;
	   }
	   else    
         mat[i+1][j] = mat[i][j];
	}
  if (aux == 0)
	i--;
  i++;
 }

primo = prox_primo(primo);
for(j=0;j<qtde;j++)
{ 
 if(mat[i][j] == 1)
	qt_um++;
 else
	qt_um = 1;
 
}
}
 /*imprimindo a matriz*/

for(i=0;i<15;i++){
 
        printf("\n\n");
 
        for(j=0;j<=qtde;j++)
 
            printf("%d\t",mat[i][j]);
 
    }
 
     
int mmc = mat[0][qtde];
printf("\n\n");
printf("%d",mat[0][qtde]);
for(i=1;mat[i][qtde]!=0;i++)
{
	mmc = mmc* mat[i][qtde];
	printf(" x %d",mat[i][qtde]);
}
 
    printf(" = %d\n\n",mmc);
 
}
 
 
 
int prox_primo(int a)
{
 int i, k=1;
 while(k>0)
{
   k=0;
   a++;
 for(i=2;i<a;i++)
 {
	if((a % i) == 0)
	k++;
 }
 
}
 
    return a;
 
}
