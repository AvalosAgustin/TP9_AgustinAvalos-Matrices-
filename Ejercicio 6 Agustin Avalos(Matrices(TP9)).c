#include <stdio.h>
#include <stdlib.h>
void comparar_y_mostrar(int matriz1[12][12], int matriz2[12][12],int i, int j) 
{
	int cont1=1;
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			if(i==j)
			{
				if(matriz1[i][j]==matriz2[i][j])
				{
					cont1=1;
				}
				else
				{
					cont1=0;
				}
				
			}
			
			
		}
	}
	printf("\nLa matriz 1 es:\n");
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			printf(" %d",matriz1[i][j]);
			
		}
		printf("\n");
	}
	printf("\n\n");
	
	printf("La matriz 2 es:\n");
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			printf(" %d",matriz2[i][j]);
			
		}
		printf("\n");
	}
	
	if(cont1==1)
	{
		printf("Las diagonales de las 2 matrices son iguales\n");
		
		
	}
	else
	{
		printf("Las diagonales de las 2 matrices no son iguales\n");
	}
}

int main() 
{
	int matriz1[12][12];
	int matriz2[12][12];
	int i,j;
	printf("Ingrese los numeros de la matriz 1\n");
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			scanf("%d",&matriz1[i][j]);
			
		}
	}
	
	printf("Ingrese los numeros de la matriz 2\n");
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			scanf("%d",&matriz2[i][j]);
			
			
		}
	}
	
	comparar_y_mostrar( matriz1, matriz2, i, j);
	return 0;
}

