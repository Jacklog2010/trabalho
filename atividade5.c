// Exerc�cio 5 - Lista 1

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int numero,quadrado;
	double raiz;
	
	printf(" Digite um n�mero: ");
	scanf("%d",&numero);
	
	if (numero % 2 == 0)
	{
		quadrado=numero*numero;
		raiz=sqrt(numero);
		
		printf("\n");
		printf(" O quadrado do n�mero %d � %d, e sua raiz quadrada � de %.0f",numero,quadrado,raiz);
	}
	else
	{
		printf("\n");
		printf(" O n�mero %d n�o � um n�mero positivo",numero);
	}
	
	return 0;	
} //fim programa
