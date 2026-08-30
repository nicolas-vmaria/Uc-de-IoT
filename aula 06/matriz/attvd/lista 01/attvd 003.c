#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet[18],mat[3][6],i,j,k,cont=0;
	
	for(i=0;i<18;i++){
		printf("Digite um número:");
		scanf("%d*c",&vet[i]);	
	}
	
	for(j=0;j<3;j++){
		for(k=0;k<6;k++){
			mat[j][k]=vet[cont];
			cont++;
	}
	}
	
	for(j=0;j<3;j++){
		printf("\n");
		for(k=0;k<6;k++){
			printf("%d ",mat[j][k]);
		}	
	}
    system("pause");
}