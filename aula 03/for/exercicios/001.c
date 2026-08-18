#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	double salario,porcentagem;
	int ano,anoDeEntrada;
	
	salario=1000.00;
	porcentagem=0.015;
	
	printf("Digite o ano atual:");
	scanf("%d%*c",&ano);
	
	for(anoDeEntrada=2018;anoDeEntrada<ano;anoDeEntrada++){
		salario=salario + salario * porcentagem;
		
		porcentagem=porcentagem*2;
	}
	printf("Salario atual: %.2f", salario);
}