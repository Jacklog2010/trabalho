// Exerc�cio 27 - Lista 1


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
		printf(" N�mero da sorte: ");
		scanf("%d",&numero);
		cont++;
	}//fim do
	while(numero!=aleatorio);
	
	printf("\n Parab�ns. Voc� acertou em %d tentativas",cont);
	
	return 0;	
} //fim programa
