// Exerc�cio 7 - Lista 1

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int verde=0,amarelo=0,branco=0,vtotal,atotal,btotal,cor,bolas,pfinal,cont;
	
	printf(" Quantas bolinhas voc� pegou?: ");
	scanf("%d",&bolas);
	
	printf(" 1: Verde \n");
	printf(" 2: Amarelo \n");
	printf(" 3: Branco \n");
	
	while(cont<bolas)
	{
		printf(" Digite o n�mero correspondente as cores da bola adquiridas: ");
		scanf("%d",&cor);
		
		switch(cor)
		{
			case 1: 
				verde++;
			break;
			case 2:
				amarelo++;
			break;
			case 3:
				branco++;
			break;
			default: 
				printf(" N�mero Inv�lido! Digite novamente. \n");
		} //fim switch
		cont++;
	} //fim while
	
	vtotal=verde*10;
	atotal=amarelo*5;
	btotal=branco*3;
	
	pfinal=vtotal+atotal+btotal;
	
	printf(" \nA pontua��o total do participante � %d \n",pfinal);
	
	return 0;	
} //fim programa
