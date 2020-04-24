
/*Adivinhe o Numero escolhido pelo computador*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


main()
{
     int i,computador,numero,escolha,modo,continuar;
     numero = 100;
     
     
do{
 
	printf("---------------------------------------------------\n");
	printf("Tente Adivinhar o Numero que o Computador PENSOU");
	printf("\n---------------------------------------------------\n");
	
	
	
	printf("[1] MODO FACIL  [2] MODO MEDIO  [3] MODO DIFICIL ");
	printf("\nEscolha :");
	scanf("%i",&escolha);
		
	if(escolha == 1){
		modo = 10;
	}
	if(escolha == 2){
		modo = 30;
	}
	if(escolha == 3){
		modo = 50;
	}
	
	
	
	for(i=1;i <=modo;i++){
		printf("%i ",i);
	}
	printf("\n");
	    
	srand(time(NULL));
	 
	computador = rand() % modo;
	     
	     
	while(numero != computador){
		printf("\nChute um Numero:");
		scanf("%i",&numero);
		    
		if(numero == computador){
			printf("VOCE ACERTOU\n");
			printf("Deseja Continuar:");
			scanf("%i",&continuar);
		}
		if(numero < computador){;
		    printf("-=-Chute um Numero Maior-=-\n");
		}
		if(numero > computador){
			printf("-=-Chute um Numero Menor-=-\n");
		}
	}
     
}
while(continuar == 's' || continuar == 'S');
			


}