// Exercício 2 - Lista 1

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"Portuguese");
	float mbps,kbps;
	printf("Digite o valor em MBPS\n");
	scanf("%f",&mbps);
	kbps = mbps*1000;
	printf("\nO valor convertido é de %.2fkbps",kbps);
	
}

