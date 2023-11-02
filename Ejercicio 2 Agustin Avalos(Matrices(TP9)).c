#include <stdio.h>
#include <stdlib.h>
void kilometros_recorridos (int matriz[20][7], int i, int j) 
{
	int suma=0;
	for (i = 0; i < 20; i++) 
	{
		printf("El chofer con el numero de legajo %d \n", i + 1);
		
		for (j = 0; j < 7; j++) 
		{
			
			printf("En el dia %d Recorrio %d KM\n",j+1 ,matriz[i][j]);
			suma=suma+matriz[i][j];
			
		}
		printf("Total del Kilometros reccoridos en la semana fue de: %d KM\n\n",suma);
		suma=0;
		printf("\n");
	}
}

int main() 
{
	int matriz[20][7]={{0},{0}};
	int i,j;
	for(i=0;i<20;i++)
	{
		printf("El numero de legajo del chofer es %d\n",i+1);
		
		for(j=0;j<7;j++)
		{
			printf("Ingrese la cantidad de kilometros que recorrio en el dia %d\n",j+1);
			scanf("%d",&matriz[i][j]);
		}
		printf("\n");
	}
	
	
	kilometros_recorridos(matriz, i, j);
	
	return 0;
}
	

