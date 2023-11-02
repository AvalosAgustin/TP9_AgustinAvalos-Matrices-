#include <stdio.h>
#include <stdlib.h>
int contador_negativos(int matriz[5][6], int i, int j) 
{
	int contnegativos=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		{
			if(matriz[i][j]<0)
			{
				contnegativos=contnegativos+1;
				
			}
			
		}
	}
	return contnegativos;
}
int contador_ceros(int matriz[5][6], int i, int j) 
{
	int contceros=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		{
			
			if(i==j) 
			{
				if(matriz[i][j]==0)
				{
					contceros=contceros+1;
				}
				
			}
			
		}
	}
	return contceros;
}

int main() 
{
	int matriz[5][6];
	int i,j,negativos=0,ceros=0;
	printf("Ingrese los numeros de la matriz \n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		{
			scanf("%d",&matriz[i][j]);
			
		}
	}
	
	
	
	printf("La matriz con los numeros ingresados es:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		{
			printf(" %d",matriz[i][j]);
			
		}
		printf("\n");
	}
	negativos = contador_negativos(matriz, i, j); 
	ceros = contador_ceros(matriz, i, j); 
	
	printf("La cantidad de numeros negativos de la matriz son: %d\n",negativos);
	
	printf("La cantidad de ceros que hay en la diagonal principal es: %d\n", ceros); 
	return 0;
}

