#include <stdio.h>

int main() 
{
	printf("\n Verificador de numeros Pares e Impares\n");
	
	int inicial, final, contador, variavel_qtd = 0;
	printf("\n Insira o numero inicial\n");
	scanf("%d",&inicial);
	
	printf("\n Insira o numero final\n");
	scanf("%d",&final);	
	
	for(contador = inicial; contador <= final; contador++){
		if(contador%2==0){
			printf("O numero %d e PAR!\n", contador);
			variavel_qtd++;
		}else{
			printf("O numero %d e IMPAR!\n", contador);
		}
	}
	
	printf("A quantidade de numeros pares\n e %d", variavel_qtd);
	return(0);
}