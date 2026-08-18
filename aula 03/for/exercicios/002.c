#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i,codigo,contCidadesMenor2000,carros,totalCarros,totalMenorDe2000,acidentes,totalAcidentes,maior,menor,menorCidade,maiorCidade,media,mediaAcidentesMenorDe2000;
	
	maior=0;
	menor=1000000000000000;
	contCidadesMenor2000=0;
	
	for(i=0;i<5;i++){
		printf("Digite o codigo da cidade:");
		scanf("%d%*c",&codigo);
		printf("Digite quantos carro tem na cidade:");
		scanf("%d%*c",&carros);
		printf("Digite o numero de acidentes na cidade:");
		scanf("%d%*c",&acidentes);
		
		totalCarros= totalCarros + carros;
		
		
		if(acidentes>maior){
			maior=acidentes;
			maiorCidade=codigo;
		}
		
		if(acidentes<menor){
			menor=acidentes;
			menorCidade=codigo;
		}
		
		if(carros<2000){
			totalMenorDe2000= totalMenorDe2000 + acidentes;
			contCidadesMenor2000= contCidadesMenor2000+1;
		}
		
		
	}
	
	mediaAcidentesMenorDe2000=totalMenorDe2000/contCidadesMenor2000;
	media= totalCarros / i;
		
	printf("A média de veiculos das 5 cidades é: %d",media);
	printf("\nA média de acidentes das cidades com menos de 2000 veiculos é: %d",mediaAcidentesMenorDe2000);
	printf("\nO maior numero de acidentes das cidades é: %d, e o codigo da cidade é: %d",maior,maiorCidade);
	printf("\nO menor numero de acidentes das cidades é: %d, e o codigo da cidade é: %d",menor,menorCidade);
}