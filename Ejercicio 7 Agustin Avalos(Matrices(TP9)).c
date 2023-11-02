#include <stdio.h>
#include <stdlib.h>
void modificacion(int matriz[12][19],int i, int j) 
{
	int cont1=0;
	for(i=0;i<12;i++)
	{
		for(j=0;j<19;j++)
		{
			if(matriz[i][j]<0)
			{
				matriz[i][j]=0;
				cont1=cont1+1;
				
			}
			
		}
	}
	
	if(cont1>0)
	{
		printf("La matriz modificada por 0 a los valores negativos es :\n");
		
		for(i=0;i<12;i++)
		{
			for(j=0;j<19;j++)
			{
				printf(" %d",matriz[i][j]);
				
			}
			printf("\n");
		}
		
	}
	else
	{
		printf("En la matriz no se ingreso ningun valor negativo por lo tanto la matriz queda igual\n");
		
	}
}

int main() 
{
	int matriz[12][19];
	int i,j;
	printf("Ingrese los numeros de la matriz \n");
	for(i=0;i<12;i++)
	{
		for(j=0;j<19;j++)
		{
			scanf("%d",&matriz[i][j]);
			
		}
	}
	printf("La matriz con los numeros ingresados son:\n");
	
	for(i=0;i<12;i++)
	{
		for(j=0;j<19;j++)
		{
			printf(" %d",matriz[i][j]);
			
		}
		printf("\n");
	}
	printf("\n\n");
	
	modificacion( matriz, i, j); 
	return 0;
}

