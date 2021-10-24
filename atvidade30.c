// Exercício 30 - Lista 1

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int qtdp,media,pt1,pt2,cont,i;
	
	printf(" Digite a quantidade de participantes: ");
	scanf("%d",&qtdp);
	printf("\n");
	
	printf(" Média de pontos: ");
	scanf("%d",&media);
	printf("\n");
	
	for(i=1;i<=qtdp;i++)
	{
		printf(" A pontuação do participante %d foi de ",i);
		scanf("%d %d",&pt1,&pt2);
		
		if((pt1+pt2)>=media)
		{
			cont++;
		} //fim if
	} //fim for
	
	printf("\n %d pessoas foram classificadas!",cont);
	
	return 0;	
} //fim programa
