#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	int x,y,op;
	float resultado;
	x=0;
	y=0;
	resultado=0;
	op=0;
	
	printf("\n Digite o valor do primeiro operando\n");
	scanf("%i",&x);
	printf("\n Digite o valor do segundo operando\n");
	scanf("%i",&y);	
	
	printf("\n Escolha uma das op��es abaixo:");
	printf("\n 1.Soma");
	printf("\n 2.Subtra��o");
	printf("\n 3.Multiplica��o");
	printf("\n 4.Divis�o");
	
	printf("\n Digite o n�mero da op��o desejada:\n");
	scanf("%i",&op);
	
	switch(op)
	{
	case 1:
		printf("\n Op��o selecionada: 1. Soma");
		resultado = x+y;
		printf("\n A soma dos dois n�meros �: %.2f",resultado);
		break;

		case 2:
		printf("\n Op��o selecionada: 2. Subtra��o");
		resultado = x-y;
		printf("\n A subtra��o dos dois n�meros �: %.2f",resultado);
		break;
	
		case 3:
		printf("\n Op��o selecionada: 3. Multiplica��o");
		resultado = x*y;
		printf("\n A multiplica��o dos dois n�meros �: %.2f",resultado);
		break;
	
		case 4:
		printf("\n Op��o selecionada: 4. Divis�o");
		if(y==0)
		{
		printf("\n N�o existe divis�o por zero");
		}
		else
		{
		resultado = x/y;
		printf("\n A divis�o dos dois n�meros �: %.2f",resultado);
		}
		break;
		default:
		printf ("\n Voc� digitou uma op��o inv�lida");
	}
		return(0);
}

		
	
	
	
