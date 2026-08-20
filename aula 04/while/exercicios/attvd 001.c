#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	double salario,porcentagem;
	int ano,anoDeEntrada;
	
	salario=1000.00;
	porcentagem=0.015;
	anoDeEntrada=2020;
	
	printf("Digite o ano atual:");
	scanf("%d%*c",&ano);
	
	while(anoDeEntrada != ano){
		salario=salario + salario * porcentagem;
		porcentagem=porcentagem*2;
		anoDeEntrada++;
	}
	printf("Salario atual: %.2f", salario);
}