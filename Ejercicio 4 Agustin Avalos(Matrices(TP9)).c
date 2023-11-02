#include <stdio.h>
#include <stdio.h> 
#include <stdlib.h> 

void cambio(int *vector,int *vector2, int i, int ultimoNumero) {
	for(i=9;i>0;i--) 
		
	{ 
		
		vector2[i]=vector[i-1]; 
		
	} 
	
	vector2[0]=ultimoNumero; 
	
	printf("El vector 1 sus valores son \n"); 
	
	printf("\n"); 
	
	for(i=0;i<10;i++) 
		
	{ 
		
		printf("Numero %d es: %d \n",i+1,vector[i]); 
		
	} 
	
	printf("\n"); 
	
	printf("Cambiado de lugares del vector 1 valores nuevos son  \n"); 
	
	printf("\n"); 
	
	for(i=0;i<10;i++) 
	{ 
		printf("Numero %d es: %d \n",i+1,vector2[i]);  
	} 
}

int main()  	
{ 
	
	int vector[10]={0},vector2[10]={0},i=0,ultimoNumero=0; 
	
	printf("ingrese los elementos del vector 1 \n"); 
	
	for(i=0;i<10;i++) 
	{ 
		printf("Numero %d:",i+1);
		scanf("%d",&vector[i]); 
		
	} 
	
	ultimoNumero=vector[9]; 
	
	cambio(vector,vector2, i,ultimoNumero );
	
	system("pause"); 
	
}

