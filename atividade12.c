// Exerc�cio 12 - Lista 1

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int numero;
	
	printf(" Digite um n�mero: "); 
	scanf("%d",&numero);	
		
	if(numero % 2 == 0 )
	{
		printf("\n");
	 	printf(" O n�mero %d � par!",numero);
	}
	else
	{
		printf("\n");
		printf(" O n�mero %d � impar!",numero);
	}	

	return 0;
}
