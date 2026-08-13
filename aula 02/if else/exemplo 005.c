#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	if ( getchar() == 'p')
		printf("Você digitou p");
	else
		printf("Você não digitou p");
}