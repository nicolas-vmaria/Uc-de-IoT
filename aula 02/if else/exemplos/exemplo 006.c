#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float a,b;
	printf("Digite 2 numeros: ");
	scanf("%f %f", &a,&b);
	if(b)
		printf("%.2f", a/b);
	else
		printf("Não posso dividir por zero \n");
}