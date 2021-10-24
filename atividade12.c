// Exercício 12 - Lista 1

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int numero;
	
	printf(" Digite um número: "); 
	scanf("%d",&numero);	
		
	if(numero % 2 == 0 )
	{
		printf("\n");
	 	printf(" O número %d é par!",numero);
	}
	else
	{
		printf("\n");
		printf(" O número %d é impar!",numero);
	}	

	return 0;
}
