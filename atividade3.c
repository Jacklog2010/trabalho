// Exerc�cio 3 - Lista 1

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int dia;
		
	while (1)
	{
		printf(" Entre com o n�mero do dia: ");
		scanf("%d",&dia);
				
		switch(dia)
		{
			case 1: 
				printf(" Domingo \n\n");
			break;
			case 2: 
				printf(" Segunda-Feira \n\n");
			break;
			case 3: 
				printf(" Ter�a-Feira \n\n");
			break;
			case 4: 
				printf(" Quarta-Feira \n\n");
			break;
			case 5: 
				printf(" Quinta-Feira \n\n");
			break;
			case 6: 
				printf(" Sexta-Feira \n\n");
			break;
			case 7: 
				printf(" S�bado \n\n");
			break;
			default: 
				printf(" C�digo inv�lido! \n\n");
		} //fim switch
	} //fim while
	
	return 0;
} //fim programa
