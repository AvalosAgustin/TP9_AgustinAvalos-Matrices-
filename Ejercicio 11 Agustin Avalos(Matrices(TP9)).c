#include <stdio.h>
#include <stdlib.h>
void suma_fila(int edificio[7][20][6], int i, int j, int k) 
{
	int Complejototal=0;
	float promedioTorre=0,promedioPiso=0,Torre=0,acu=0;
	for(i=0;i<7;i++)
	{
		Torre=0;
		printf("Torre %d\n",i+1);
		for(j=0;j<20;j++)
		{
			acu=0;
			printf("piso %d \n",j+1);  
			for(k=0;k<6;k++)
			{
				
				Complejototal=Complejototal+edificio[i][j][k];  
				
				Torre=Torre+edificio[i][j][k];  
				
				acu=acu+edificio[i][j][k];  
				
				promedioTorre= Torre/(20*6);  
				
				promedioPiso=acu/6;  
			}
			printf("el promedio por el piso %d es: %.2f \n\n",j+1,promedioPiso);  
			
		}  
		
		printf("el promedio por la torre %d es: %.2f \n",i+1,promedioTorre);  
		
		printf("la cantidad total por la torre %d es: %.2f \n\n",i+1,Torre);  
		
	}  
	
	printf("la cantidad total del complejo es: %d \n",Complejototal);    
}
int main() 
{
	int edificio[7][20][6];
	int Complejototal=0;
	int i=0,j=0,k=0; 

	
	for(i=0;i<7;i++)
	{
		
		printf("Torre %d\n",i+1);
		for(j=0;j<20;j++)
		{
			
			printf("piso %d \n",j+1);  
			for(k=0;k<6;k++)
			{
				
				printf("ingrese la cantidad de habitante del departamento %d \n",k+1);  
				
				scanf("%d",&edificio[i][j][k]);  
				
			}
		}
	}
		
	
	return 0;
}

