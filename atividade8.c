// Exerc�cio 4 - Lista 1

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	float cfabrica,cconsumidor;
	printf("Informe o custo de f�brica do ve�culo\n");
	scanf("%f",&cfabrica);
	cconsumidor = (cfabrica*0.42)+(cfabrica*0,25)+cfabrica;
	printf("\nO custo total do ve�culo ao cosumidor � de R$%.2f",cconsumidor);
	
}
