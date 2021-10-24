// Exercício 27 - Lista 1


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int aleatorio,numero,cont=0;
	
	srand(time(NULL));
	aleatorio=rand()%10;
	
	do 
	{
		printf(" Número da sorte: ");
		scanf("%d",&numero);
		cont++;
	}//fim do
	while(numero!=aleatorio);
	
	printf("\n Parabéns. Você acertou em %d tentativas",cont);
	
	return 0;	
} //fim programa
