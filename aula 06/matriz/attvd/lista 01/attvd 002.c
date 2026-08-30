#include <stdio.h>
#include <stdlib.h>

int main(){
	char nomeL[8][20], nomesP[4][20];
	float precos[8][4];
	int i, j, z, g, a, n;
	
	for(i=0;i<8;i++){
		printf("Digite o nome de uma loja: ");
		scanf("%19s*c", &nomeL[i]);
	}
	
	for(j=0;j<4;j++){
		printf("Digite os nomes dos produtos: ");
		scanf("%19s*c", &nomesP[j]);
	}
	
	for(z=0;z<4;z++){
		for(g=0;g<8;g++){
			printf("Digite o preco do produto: %s da loja: %s ", nomesP[z], nomeL[g]);
			scanf("%f", &precos[g][z]);
		}
	}
	
	for(a=0;a<4;a++){
		for(n=0;n<8;n++){
			if(precos[n][a] < 60){
				printf("%s - %s \n", nomesP[a], nomeL[n]);
			}
		}
	}
    system("pause");
}