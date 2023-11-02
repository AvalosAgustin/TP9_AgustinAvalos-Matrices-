#include <stdio.h>
#include <stdlib.h>


void camparar(int matriz[15][12], int i, int j)
{
	int menor=0, negativos=0,suma=0;
	menor = matriz[0][0];
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<9;j++)
		{
			
			if(matriz[i][j]<menor) 
			{ 
				
				menor=matriz[i][j]; 
				
			}
			if(matriz[i][j]<0)  
			{  
				
				negativos=negativos+1;  
				
			} 
			if(i<5)
			{
				suma=suma+matriz[i][j]; 
			}
		}
	}
	
	for(i=0;i<10;i++)    
		
	{       
		
		for(j=0;j<9;j++)    
			
		{  
			
			printf("\t%d",matriz[i][j]);   
			
		}  
		
		printf("\n");     
		
	}
	printf("La suma es %d \n",suma);  
	
	printf("El numero menor es %d \n",menor);  
	
	printf("La cantidad de negativos son: %d \n",negativos);  
	
	
}


int main() 
{
	int matriz[15][12]={0};
	int i,j;
	

	for(i=0;i<10;i++)
	{
		for(j=0;j<9;j++)
		{
			printf("Ingrese los numeros de la fila %d columna %d\n",i+1,j+1);
			scanf("%d",&matriz[i][j]);
			
			
		}
	}
	  
	 camparar(matriz, i, j);
	

	return 0;
}

