#include <stdio.h>
#include <stdlib.h>

int main() {
    float matriz[5][3], totalEstoqueArmazem[4] = {0},menorEstoque=0, maiorEstoquePrdt2=0,custoTotalProduto[3] = {0}, custoArmazem[4] = {0};
    int i, j;

    for (i=0; i<4; i++) {
        for (j=0; j<3; j++) {
            printf("Digite o estoque do produto %d no armazem %d: ", j+1, i+1);
            scanf("%f", &matriz[i][j]);
        }
    }
    for(i=4;i<5;i++){
        for(j=0;j<3;j++){
            printf("Digite o preço do produto %d: ", j+1);
            scanf("%f", &matriz[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            totalEstoqueArmazem[i] += matriz[i][j];
            custoTotalProduto[j] += matriz[i][j] * matriz[4][j];
            custoArmazem[i] += matriz[i][j] * matriz[4][j];
            if(matriz[i][j] < menorEstoque || menorEstoque == 0){
                menorEstoque = matriz[i][j];
            }
            if(j==1 && matriz[i][j] > maiorEstoquePrdt2){
                maiorEstoquePrdt2 = matriz[i][j];
            }
        }
    }
    for(i=0;i<4;i++){
        printf("Total de itens do armazem %d: %.2f\n", i+1, totalEstoqueArmazem[i]);
    }
    printf("Armazem com menor estoque: %.2f\n", menorEstoque);
    printf("Maior estoque do produto 2: %.2f\n", maiorEstoquePrdt2);
    for(i=0;i<3;i++){
        printf("Custo total do produto %d: %.2f\n", i+1, custoTotalProduto[i]);
    }
    for(i=0;i<4;i++){
        printf("Custo total do armazem %d: %.2f\n", i+1, custoArmazem[i]);
    }
    

    system("pause");
}
