// Exercício 17 - Lista 1

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int fat,i;
	
	printf(" Digite o número para fatorar: ");
	scanf("%d",&fat);

	for(i=1;fat>=1;fat--)
	{
		i=i*fat;
	}
	
	printf(" \nA resposta do fatorial é de %d",i);
	
	return 0;	
} //fim programa
