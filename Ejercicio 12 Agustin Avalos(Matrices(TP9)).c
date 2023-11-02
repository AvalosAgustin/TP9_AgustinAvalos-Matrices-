#include <stdio.h>
#include <stdlib.h>
void promedio( int i, int j, float*suma) 
{
	float promedio[4]={0};
	
	for(i=0;i<4;i++)  
	{
		printf("En la semana %d tiene un total de ventas de: %.2f\n",i+1,suma[i]);
		promedio[i]=suma[i]/7;
		
	}
	for(j=0;j<4;j++)  
	{
		printf("\nLa semana %d tiene un promedio de ventas de: %.2f\n\n",j+1,promedio[j]);
		
		
	}
	
}

int venta_mayor( int i, int j,float*suma) 
{
	int mayor=0;
	for(i=0;i<4;i++)  
	{
		if(suma[i]>mayor)
		{
			mayor=suma[i];
			
			
		}
		
		
	}
	return mayor;
}
int numero_de_semana( int i, int j,float*suma) 
{
	int mayor=0, semana=0;
	for(i=0;i<4;i++)  
	{
		if(suma[i]>mayor)
		{
			mayor=suma[i];
			semana=i+1;
			
		}
		
		
	}
	return semana;
}

int main() 
{
	int matriz[4][7]={0};
	int i,j,ventaT=0,Nsemana=0;
	float suma[4];
	
	for(i=0;i<4;i++)  
	{
		printf("semana %d\n",i+1);
		
		for(j=0;j<7;j++)  
		{  
			printf("Ingrese las el numero de ventas del dia %d\n",j+1);
			scanf("%d",&matriz[i][j]);  
			
			suma[i]=suma[i]+matriz[i][j];

		} 
		printf("\n");
		
	}  
	
	promedio( i,  j, suma);
	ventaT=venta_mayor( i, j,suma);
	Nsemana=numero_de_semana(i, j,suma); 
	

	printf("La semana %d tiene la mayor venta que fue de:%d ",Nsemana,ventaT);
	return 0;
}

