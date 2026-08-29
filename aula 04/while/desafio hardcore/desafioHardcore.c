#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int cont = 0,contBarato = 0, contNormal = 0, contCaro = 0;
    float precoUnit, custoEstocagem, imposto, precoFinal, mediaAdicional = 0, maiorFinal = 0, menorFinal = 0,totalImposto = 0;
    char refrigeracao, categoria, nome[100];

    while(cont < 12){

        printf("\nDigite o nome do produto: ");
        scanf(" %99[^\n]", nome);
        printf("Digite o preço do produto: ");
        scanf("%f", &precoUnit);
        printf("Digite S para refrigerado ou N para não refrigerado: ");
        scanf(" %c", &refrigeracao);
        printf("Digite a categoria (A - alimentação; L - limpeza; V - vestuário): ");
        scanf(" %c", &categoria);

        // Estocagem

        if(precoUnit <= 20){

            if(categoria == 'A'){
                custoEstocagem = 2;
                mediaAdicional += custoEstocagem;
            }
            else if(categoria == 'L'){
                custoEstocagem = 3;
                mediaAdicional += custoEstocagem;
            }
            else if(categoria == 'V'){
                custoEstocagem = 4;
                mediaAdicional += custoEstocagem;
            }

        }
        else if(precoUnit <= 50){

            if(refrigeracao == 'S'){
                custoEstocagem = 6;
                mediaAdicional += custoEstocagem;
            }
            else{
                custoEstocagem = 0;
                mediaAdicional += custoEstocagem;
            }
        }
        else{

            if(refrigeracao == 'S'){

                if(categoria == 'A'){
                    custoEstocagem = 5;
                    mediaAdicional += custoEstocagem;
                }
                else if(categoria == 'L'){
                    custoEstocagem = 2;
                    mediaAdicional += custoEstocagem;
                }
                else if(categoria == 'V'){
                    custoEstocagem = 4;
                    mediaAdicional += custoEstocagem;
                }
            }
            else{

                if(categoria == 'A' || categoria == 'V'){
                    custoEstocagem = 0;
                    mediaAdicional += custoEstocagem;
                }
                else if(categoria == 'L'){
                    custoEstocagem = 1;
                    mediaAdicional += custoEstocagem;
                }
            }
        }

        // Imposto

        if(categoria == 'A' && refrigeracao == 'S'){
            imposto = precoUnit * 0.04;
            mediaAdicional += imposto;
            totalImposto += imposto;
        }
        else{
            imposto = precoUnit * 0.02;
            mediaAdicional += imposto;
            totalImposto += imposto;
        }

        // Preço final

        precoFinal = precoUnit + custoEstocagem + imposto;

        printf("\nCusto de estocagem: R$ %.2f", custoEstocagem);
        printf("\nImposto: R$ %.2f", imposto);
        printf("\nPreço final: R$ %.2f\n", precoFinal);

        //Classificaçâo

        if(precoFinal < 20){
            printf("\nProduto barato");
            contBarato++;
        }
        else if(precoFinal >= 20 && precoFinal <= 100){
            printf("\nProduto normal");
            contNormal++;
        }
        else{
            printf("\nProduto caro");
            contCaro++;
        }

        if(cont == 0){
            maiorFinal = precoFinal;
            menorFinal = precoFinal;
        }
        else{
            if(precoFinal > maiorFinal){
                maiorFinal = precoFinal;
            }
            if(precoFinal < menorFinal){
                menorFinal = precoFinal;
            }
        }

        cont++;
    }
    mediaAdicional /= cont;
    printf("\nMédia dos custos adicionais: R$ %.2f", mediaAdicional);
    printf("\nMaior preço final: R$ %.2f", maiorFinal);
    printf("\nMenor preço final: R$ %.2f", menorFinal);
    printf("\nTotal de impostos: R$ %.2f", totalImposto);
    printf("\nQuantidade de produtos baratos: %d", contBarato);
    printf("\nQuantidade de produtos normais: %d", contNormal);
    printf("\nQuantidade de produtos caros: %d", contCaro);
    system("pause");
    getchar();   
}