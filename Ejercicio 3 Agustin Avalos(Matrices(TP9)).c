#include <stdio.h>  
#include <stdlib.h>  


int mayor(int matriz[5][5], int i, int j)
{
	int mayor=0;
	for(i=0;i<5;i++)
	{

		for(j=0;j<5;j++)
		{
			if(matriz[i][j]>mayor) 
			{ 
				
				mayor=matriz[i][j]; 
				
				
			} 
		}
	}
	return mayor;
	
}


int empleado(int matriz[5][5], int i, int j)
{
	int mayor=0,empleado=0;
	for(i=0;i<5;i++)
	{
		
		for(j=0;j<5;j++)
		{
			if(matriz[i][j]>mayor) 
			{ 
				
				mayor=matriz[i][j]; 
				empleado=i+1;
				
				
			} 
		}
	}
	return empleado;
	
}
void mostrar (int matriz[5][5], int i, int j) {
	for(i=0;i<5;i++)
	{
		printf("Empleado %d\n",i+1);
		for(j=0;j<5;j++)
		{
			printf("ventas realizadas del dia %d fueron de %d\n",j+1,matriz[i][j]);
			
		}
		printf("\n");
	}
}

int main()  
{  
	int matriz[5][5];
	int i,j,M=0,E=0;

	
	
	for(i=0;i<5;i++)
	{
		printf("Empleado %d\n",i+1);
		for(j=0;j<5;j++)
		{
			printf("Ingrese las ventas del dia %d\n", j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	mostrar(matriz, i, j);
	
	M=mayor( matriz, i,  j);
	E=empleado( matriz, i,  j);
	
	printf("El empleado es %d y tiene una venta mayor que es: %d  \n",E,M);
	return 0;
}  
