#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,vetor[9];
	
	for(i=0;i<9;i++){
		printf("Digite um numero: ");
		scanf("%d%*c",&vetor[i]);
	}
	for(i=0;i<9;i++){
		int num = vetor[i];
		int ehPrimo = 1;
		
		if(num <=1){
			ehPrimo = 0;
		}else{
			for(int j = 2; j*j <= num; j++){
				if(num % j == 0){
					ehPrimo = 0;
					break;
				}
			}
		}
		if(ehPrimo){
			printf("O numero %d da posicao %d eh primo",num,i);
		}
	}
}