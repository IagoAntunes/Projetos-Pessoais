

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
int i;
float num,num2,resultado;
char operacao,opcao;

do{	
	
	
	system("cls");
	printf("---------------------------------------------------------\n");
	printf("----------------------CALCULADORA------------------------\n");
	printf("---------------------------------------------------------\n");
	
	printf("Operacao %i \n",i+1);
	
	printf("Numero: ");
	scanf("%f",&num);
	
	printf("Numero2 :\n");
	scanf("%f",&num2);
	
	printf("------------------------------------------------");
	printf("\n--                                          --");
	printf("\n--                                          --");
	printf("\n--                                          --\n");
	printf("------------------------------------------------\n");
	printf("--  [ + ] Soma             [ - ] Subtracao  --");
	printf("\n--                                          --\n");
	printf("--  [ * ] Multiplicacao    [ / ] Divisao    --");
	printf("\n--                                          --\n");
	printf("--  [ ^ ] Potencia         [ R ] Raiz       --");
	printf("\n--                                          --\n");
	printf("------------------------------------------------\n");
	
	
	
	scanf("%s",&operacao);
	
	
	
	if(operacao == '+'){
		printf("%.3f + %.3f == %.3f",num,num2,num + num2);
	}
	else if(operacao == '-'){
		printf("%.3f - %.3f == %.3f",num,num2,num - num2);
	}
	else if(operacao == '+'){
		printf("%.3f * %.3f == %.3f",num,num2,num * num2);
	}
	else if(operacao == '/'){
		printf("%.3f / %.3f == %.3f",num,num2,num / num2);
	}
	else if(operacao == '^'){
		printf("%.3f ** %.3f == %.3f",num,num2,pow(num,num2));
	}
	else if(operacao == 'R'){
		printf("Raiz de %.3f == %.3f",num,sqrt(num));
	}
	else if(operacao == 'R'){
		printf("Raiz de %.3f == %.3f",num,sqrt(num));
	}
	else if(operacao == 'R'){
		printf("Raiz de %.3f == %.3f",num,sqrt(num));
	}
	
	printf("------------------------------------------------");
	printf("\n--                                          --");
	printf("\n--                  %f                      --",num +num2);
	printf("\n--                                          --\n");
	printf("------------------------------------------------\n");
	printf("--  [ + ] Soma             [ - ] Subtracao  --");
	printf("\n--                                          --\n");
	printf("--  [ * ] Multiplicacao    [ / ] Divisao    --");
	printf("\n--                                          --\n");
	printf("--  [ ^ ] Potencia         [ R ] Raiz       --");
	printf("\n--                                          --\n");
	printf("------------------------------------------------\n");

	
	
	
	
	
	printf("\nDeseja Inserir Outros Numeros: ");
	scanf("%s",&opcao);
	i = i+1;
}
while(opcao == 'S' || opcao =='s');
printf("\n\n\n");

}

