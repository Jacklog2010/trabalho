// Exerc�cio 4 - Lista 1

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	float pi, raio,altura,area;
	printf("C�lculo da �rea do cilindro\n");
	printf("\nInforme o raio do cilindro em cm\n");
	scanf("%f",&raio);
	printf("\nAgora informe a altura em cm\n");
	scanf("%f",&altura);
	pi = 3.14;
	area = (2*pi*raio)*(raio+altura);
	printf("\nA �rea deste cilindro � de %.2f cm�",area);
	
}
