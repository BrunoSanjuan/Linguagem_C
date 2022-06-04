#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "");
	
	//variaveis global declaradas
	float x, y, resultado;
	int opcao, a, b, rest;
	
	//Menu p/escolha da fun��o do calculo
	printf("--------Calculadora--------\n");
	printf("1 - Somar\n");
	printf("2 - Subtrair\n");
	printf("3 - Multiplicar\n");
	printf("4 - Divis�o\n");
	printf("5 - Resto\n");
	printf("0 - Sair\n");
	
	scanf("%d", &opcao);
	
	//fun��o case e suas l�gicas para cada fun��o de calculo inclusa no menu
	switch(opcao){
		case 1:	
			printf("Digite os n�meros para soma: \n");
			scanf("%f%f", &x, &y);
			resultado = x + y;
			printf("O valor da soma �: %.2f", resultado);
			break;
		case 2:	
			printf("Digite os n�meros para subtra��o: \n");
			scanf("%f%f", &x, &y);
			resultado = x - y;
			printf("O valor da subtra��o �: %.2f", resultado);
			break;
		case 3:
			printf("Digite os n�meros para multiplica��o: \n");
			scanf("%f%f", &x, &y);
			resultado = x * y;
			printf("O valor da multiplica��o �: %.2f", resultado);
			break;
		case 4:
			printf("Digite os n�meros para divis�o: \n");
			scanf("%f%f", &x, &y);
			resultado = x / y;
			printf("O valor da divis�o �: %.2f", resultado);
			break;
		case 5:
			printf("Digite os n�meros para saber se o resto � 0 ou 1: \n");
			scanf("%d%d", &a, &b);
			rest = (a + b) % 2;
			if(rest == 0){
				printf("O resto � 0");
			}else{
				printf("O resto � 1");
			}
			break;
		case 0:
			printf("At� logo...\n");
			break;
		default:
			printf("Op��o inv�lida!");
			break;
	}
	
	
}
