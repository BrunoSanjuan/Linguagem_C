#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "");
	
	//variaveis global declaradas
	float x, y, resultado;
	int opcao, a, b, rest;
	
	//Menu p/escolha da função do calculo
	printf("--------Calculadora--------\n");
	printf("1 - Somar\n");
	printf("2 - Subtrair\n");
	printf("3 - Multiplicar\n");
	printf("4 - Divisão\n");
	printf("5 - Resto\n");
	printf("0 - Sair\n");
	
	scanf("%d", &opcao);
	
	//função case e suas lógicas para cada função de calculo inclusa no menu
	switch(opcao){
		case 1:	
			printf("Digite os números para soma: \n");
			scanf("%f%f", &x, &y);
			resultado = x + y;
			printf("O valor da soma é: %.2f", resultado);
			break;
		case 2:	
			printf("Digite os números para subtração: \n");
			scanf("%f%f", &x, &y);
			resultado = x - y;
			printf("O valor da subtração é: %.2f", resultado);
			break;
		case 3:
			printf("Digite os números para multiplicação: \n");
			scanf("%f%f", &x, &y);
			resultado = x * y;
			printf("O valor da multiplicação é: %.2f", resultado);
			break;
		case 4:
			printf("Digite os números para divisão: \n");
			scanf("%f%f", &x, &y);
			resultado = x / y;
			printf("O valor da divisão é: %.2f", resultado);
			break;
		case 5:
			printf("Digite os números para saber se o resto é 0 ou 1: \n");
			scanf("%d%d", &a, &b);
			rest = (a + b) % 2;
			if(rest == 0){
				printf("O resto é 0");
			}else{
				printf("O resto é 1");
			}
			break;
		case 0:
			printf("Até logo...\n");
			break;
		default:
			printf("Opção inválida!");
			break;
	}
	
	
}
