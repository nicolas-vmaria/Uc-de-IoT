#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int mes, dia;
		printf("Digite o mes (Use 1-12) e o dia que voce nasceu:");
		scanf("%d %d", &mes,&dia);
		
	if(dia > 31)
		printf("Dia invalido");
		
	else if(dia <= 0)
		printf("Dia invalido");
	
	else if((mes == 2) && (dia > 28))
		printf("Dia invalido");
	else 
		switch (mes){
			case 1:
				if(dia <= 19){
					printf(" = Capricórnio");
				}
				else{
					printf(" = Aquário");
				}
			break;
			case 2:
				if(dia <= 18){
					printf(" = Aquário");
				}
				else{
					printf(" = Peixes");
				}
			break;
			case 3:
				if(dia <= 20){
					printf(" = Peixes");
				}
				else{
					printf(" = Áries");
				}
			break;
			case 4:
				if(dia <= 19){
					printf(" = Áries");
				}
				else{
					printf(" = Touro");
				}
			break;
			case 5:
				if(dia <= 20){
					printf(" = Touro");
				}
				else{
					printf(" = Gêmeos");
				}
			break;
			case 6:
				if(dia <= 21){
					printf(" = Gêmeos");
				}
				else{
					printf(" = Câncer");
				}
			break;
			case 7:
				if(dia <= 22){
					printf(" = Câncer");
				}
				else{
					printf(" = Leão");
				}
			break;
			case 8:
				if(dia <= 22){
					printf(" = Leão");
				}
				else{
					printf(" = Virgem");
				}
			break;
			case 9:
				if(dia <= 22){
					printf(" = Virgem");
				}
				else{
					printf(" = Libra");
				}
			break;
			case 10:
				if(dia <= 22){
					printf(" = Libra");
				}
				else{
					printf(" = Escorpião");
				}
			break;
			case 11:
				if(dia <= 21){
					printf(" = Escorpião");
				}
				else{
					printf(" = Sagitário");
				}
			break;
			case 12:
				if(dia <= 21){
					printf(" = Sagitário");
				}
				else{
					printf(" = Capricórnio");
				}
			break;
			default:
				printf("mês inválido");
	}
	return 0;
}