#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void matriz_generada(int matriz[4][4]) 
{
	int i,j, cont=0;
	printf("Matriz generada:\n");
	for (i = 0; i < 4; i++) 
	{
		for (j = 0; j < 4; j++) 
		{
			printf("%d ", matriz[i][j]);
			if (matriz[i][j] == 0) 
			{
				cont=cont+1; 
			}
		}
		printf("\n");
	}
	
	printf("Cantidad de ceros en la matriz: %d\n", cont);
}

int main() 
{
	int matriz[4][4];
	int i, j;
	
	srand(time(NULL));
	
	for (i = 0; i < 4; i++) 
	{
		for (j = 0; j < 4; j++) 
		{
			matriz[i][j] = rand() % 10; 
		}
	}
	
	matriz_generada(matriz);
	

	system("pause");
	return 0;
	
}
