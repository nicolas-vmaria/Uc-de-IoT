#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int cont = 0;
    float precoUnit, custoEstocagem, imposto, precoFinal;
    char refrigeracao, categoria, nome[100];

    while(cont < 3){

        printf("\nDigite o nome do produto: ");
        scanf(" %99s", nome);
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
            }
            else if(categoria == 'L'){
                custoEstocagem = 3;
            }
            else if(categoria == 'V'){
                custoEstocagem = 4;
            }

        }
        else if(precoUnit <= 50){

            if(refrigeracao == 'S'){
                custoEstocagem = 6;
            }
            else{
                custoEstocagem = 0;
            }
        }
        else{

            if(refrigeracao == 'S'){

                if(categoria == 'A'){
                    custoEstocagem = 5;
                }
                else if(categoria == 'L'){
                    custoEstocagem = 2;
                }
                else if(categoria == 'V'){
                    custoEstocagem = 4;
                }
            }
            else{

                if(categoria == 'A' || categoria == 'V'){
                    custoEstocagem = 0;
                }
                else if(categoria == 'L'){
                    custoEstocagem = 1;
                }
            }
        }

        // Imposto

        if(categoria == 'A' && refrigeracao == 'S'){
            imposto = precoUnit * 0.04;
        }
        else{
            imposto = precoUnit * 0.02;
        }

        // Preço final

        precoFinal = precoUnit + custoEstocagem + imposto;

        printf("\nCusto de estocagem: R$ %.2f", custoEstocagem);
        printf("\nImposto: R$ %.2f", imposto);
        printf("\nPreço final: R$ %.2f\n", precoFinal);

        cont++;
    }
    system("pause");
    getchar();   
}