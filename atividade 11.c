// Exercício 11 - Lista 1

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>


main ()
{
	setlocale(LC_ALL,"Portuguese");
	

	
	int idade,opcao;
	printf("informe a sua idade\n\n");
	scanf("%i",&idade);
	if(idade<16)
	{
		printf("\n\n Não eleitor");
	}	
	else
	{
		if((idade>=18 && idade <65))
		{
			printf("\n\n Eleitor obrigatório");	
		}
		else
		{
			printf("\n\n Eleitor Facultativo");	
		}
	}


}
