// Exerc�cio 9 - Lista 1

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int litrokm,tempo,v,d,litros;
	
	printf(" Informe o tempo em horas: ");
	scanf("%d",&tempo);
	printf("\n");
	
	printf(" Informe a velocidade m�dia em km/s: ");
	scanf("%d",&v);
	printf("\n");

	d=tempo*v;
	
	printf(" Informe os km por litro do autom�vel: ");
	scanf("%d",&litrokm);
	
	litros=d/litrokm;
	
	printf("\n");
	printf(" A quantidade utilidada � de %d litros.\n",litros);
	
	return 0;
} //fim programa
