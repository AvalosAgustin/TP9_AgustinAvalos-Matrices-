#include <stdio.h>
#include <stdlib.h>
void mayor_y_chofer(int matriz[5][6], int i, int j) 
{
	int mayor=0,chofer=0;
	for(i=0;i<5;i++)
	{
		
		for(j=0;j<6;j++)
		{
			if(j==0)
			{
				if(matriz[i][j]>mayor)
				{
					mayor=matriz[i][j];
					chofer=i+1;
					
				}
				
			}
		}
		
		printf("\n\n");
	}
	printf("El chofer que laburo mas horas el dia lunes es: el chofer %d y sus horas trabajadas fue de:%d hrs ",chofer,mayor);
}

void mostrar(int matriz[5][6], int*salario ,int i, int j) 
{
	int suma=0,sueldo=0;
	for(i=0;i<5;i++)
	{
		printf("El numero de legajo es:%d \n",i+1);
		printf("Chofer :%d \n",i+1);
		for(j=0;j<6;j++)
		{
			printf("Horas trabajadas del dia %d: %d \n",j+1,matriz[i][j]);
			suma=suma+matriz[i][j];
			
		}
		sueldo=salario[i]*suma;
		printf("Horas totales trabajadas: %d\n",suma);
		printf("El sueldo es de: %d $ \n",sueldo);
		
		suma=0;
		printf(" \n\n");
	}
}

int main() 
{
	int matriz[5][6];
	int i,j,salario[5];
	
	for(i=0;i<5;i++)
	{
		printf("El numero de legajo es:%d \n",i+1);
		printf("Chofer %d \n",i+1);
		for(j=0;j<6;j++)
		{
			printf("Ingrese la cantidad de horas trabajadas del dia %d \n",j+1);
			scanf("%d",&matriz[i][j]);
			
		}
		printf("Ingrese el salario por hora\n");
		scanf("%d",&salario[i]);
		
		printf(" \n");
	}
	
	mostrar( matriz, salario ,i, j);
	mayor_y_chofer(matriz, i, j); 
	

	
	return 0;
}

