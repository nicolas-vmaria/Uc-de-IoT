#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	printf("Digite um número qualquer\n");
	scanf ("%d", &numero);
	if(numero<0)
	printf("Número menor que zero");
	else if(numero <10)
	printf("Número >=0 e <10");
	else if (numero < 100)
	printf ("Número >=10 e <100");
	else
	printf("Número >=100");
}