#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


void main(){
	setlocale(LC_ALL, "");
	
	int cont, num, resultado; //cont = contador
	
	printf("----------TABOADA----------\n");
	printf("Insira o valor desejado para a taboada: ");
	scanf("%d", &num);
	
	for(cont = 0; cont <= 10; cont++){
		resultado = num * cont;
		printf("        %d x %d = %d\n", num, cont, resultado);
	}	
	system("pause");
}
