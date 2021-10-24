// Exercício 16 - Lista 1

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main () 
{
	setlocale(LC_ALL,"");
	
	int x,y;
	printf(" Insira as coordenadas da bola: ");
	scanf("\n %d \n %d", &x, &y);
	if (x>=0 && x<=432 && y>=0 && y<=468)
	{
		printf("\n Dentro! \n");
	} //fim if
	else
	{
		printf("\n Fora!");
	} //fim else
		 	
	return 0;		
} //fim programa
