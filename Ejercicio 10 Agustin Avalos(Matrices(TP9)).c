#include <stdio.h>
#include <stdlib.h> 
void suma_fila(int*vector1, int i, int j) 
{
	for(i=0;i<10;i++)  
	{  
		
		printf("la suma de la fila %d es: %d\n", i+1,vector1[i]);  
		
	}  
}

void suma_columna(int*vector2, int i, int j) 
{
	for(j=0;j<10;j++)  
	{      
		
		printf("la suma de las columna %d es: %d\n",j+1,vector2[j]);  
		
	}  
	
}

int main() 
{
	int matriz[10][10]={0};
	int i,j,vector1[10]={0},vector2[10]={0};
	printf("Ingrese los numeros de la matriz \n");
	for(i=0;i<10;i++)  
		
	{  
		
		for(j=0;j<10;j++)  
		{  
			
			scanf("%d",&matriz[i][j]);  
			vector1[i]=vector1[i]+matriz[i][j];
			vector2[j]=vector2[j]+matriz[i][j];  
		}  
		
	}  
	
	printf("La matriz es:\n");
	for(i=0;i<10;i++)  
	{  
		
		for(j=0;j<10;j++)  
			
		{  
			
			printf(" %d ",matriz[i][j]);  
			
		}  
		
		printf("\n");  
		
	}  

	
	
	
	
	suma_fila(vector1, i,  j);
	
	
	
	suma_columna(vector2, i, j); 
	
	
	
	return 0;
}

