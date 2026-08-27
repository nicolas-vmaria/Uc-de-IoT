#include <stdio.h>
#include <stdlib.h>

int main(){
	int mat[2][2],resultado[2][2],i,j,maior;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n Digite o elemento da linha %d e coluna %d: ", i+1,j+1);
			scanf("%d%*c",&mat[i][j]);
		}
	}
	maior = mat[0][0];
	for (i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(mat[i][j] > maior){
				maior = mat[i][j];
			}
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				resultado[i][j] = maior*mat[i][j];
			}
		}
		printf("\n Imprimindo a matriz resultante ");
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				printf("%d ",resultado[i][j]);
			}
		}
		}
	}
}