#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Digite sua idade\n");
	scanf ("%d", &idade);
	
	if(idade <=0)
		printf("Idade inválida");
	
	else if(idade <=11)
		printf("Criança");
		
	else if((idade >= 12) && (idade <=18))
	printf("Adolescente");
	
	else if((idade >=19) && (idade <=24))
	printf("Jovem");
	
	else if((idade >=25) && (idade <=59))
	printf("Adulto");
	
	else if(idade >=60)
	printf("Idoso");
}