// Exercício 21 - Lista 1

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int numeros,i,atual=1,ant=0,prox;
	
	printf(" Qtde de termos da sequencia de Fibonacci: ");
	scanf("%d",&numeros);
	
	for(i=1;i<=numeros;i++)
	{
		printf("%d, ",atual); _sleep(500);
		prox=atual+ant;
		ant=atual;
		atual=prox;
	}//fim for
	
	printf("\n");
	
	return 0;
} //fim programa
