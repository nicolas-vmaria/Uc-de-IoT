#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char produtos[10][100]= {
    "Vaso de cerâmica",
    "Pochete de crochê",
    "Quadro em madeira",
    "Colar artesanal",
    "Vela aromática",
    "Sabonete natural",
    "Porta-retrato macramê",
    "Convite personalizado",
    "Almofada decorativa",
    "Kit DIY de argila"};
    float salVendedor=545.00,comissao=0,valorUnit[10], totalProduto[10], totalVenda=0,maisVendido=0;
    int quantVenda[10], posicaoMaisVendido=0;

    for(int i=0;i<10;i++){
        printf("Digite o preço do produto %s: ",produtos[i]);
        scanf("%f", &valorUnit[i]);
        printf("Digite a quantidade vendida do produto %s: ",produtos[i]);
        scanf("%d", &quantVenda[i]);

        totalProduto[i] = valorUnit[i] * quantVenda[i];
        totalVenda += totalProduto[i];
    }
    printf("\nRelatorio:\n");
    for(int i=0;i<10;i++){
        printf("Produto: %s\n", produtos[i]);
        printf("Preço Unitário: %.2f\n", valorUnit[i]);
        printf("Quantidade Vendida: %d\n", quantVenda[i]);
        printf("Total do Produto: %.2f\n", totalProduto[i]);
        if(totalProduto[i] > maisVendido){
            maisVendido = totalProduto[i];
            posicaoMaisVendido = i;
        }
    }
    comissao = totalVenda * 0.05;
    printf("\nTotal da Venda: %.2f\n", totalVenda);
    printf("Valor do produto mais vendido: %.2f e sua posição: %d\n", maisVendido, posicaoMaisVendido);
    printf("Comissão do vendedor: %.2f\n", comissao);
    system("pause");
}