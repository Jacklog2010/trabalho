// Exerc�cio 6 - Lista 1

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int n1,n2;
	
	printf(" Digite um n�mero: ");
	scanf("%d",&n1);

	printf(" Digite um n�mero: ");
	scanf("%d",&n2);
	
	if(n1>n2)
	{
		printf("\n");
		printf(" O n�mero %d � maior que o n�mero %d.",n1,n2);
	}
	else
	{
		printf("\n");
		printf(" O n�mero %d � maior que o n�mero %d.",n2,n1);
	}
	
	return 0;	
} //fim programa
