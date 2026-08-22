#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int escolha;
	float salario, imposto, novoSalario;
    
        printf("1 - Imposto\n");
        printf("2 - Novo salário\n");
        printf("3 - Classificação\n");
        printf("Escolha uma das opções: ");
        scanf("%d", &escolha);

        switch (escolha){
            case 1:
                printf("Digite o salário: ");
                scanf("%f",&salario);

                if(salario <500){
                    imposto = salario * 0.05;
                    printf("O imposto é: %.2f",imposto);
                }
                else if(salario >= 500 && salario <= 850){
                    imposto = salario * 0.10;
                    printf("O imposto é: %.2f",imposto);
                }
                else{
                    imposto = salario * 0.15;
                    printf("O imposto é: %.2f",imposto);
                }
            break;
            case 2:
                printf("Digite o salário: ");
                scanf("%f",&salario);

                if(salario > 1500){
                    novoSalario = salario + 25;
                    printf("O novo salário é: %.2f",novoSalario);
                }
                else if(salario >= 750 && salario <= 1500){
                    novoSalario = salario + 50;
                    printf("O novo salário é: %.2f",novoSalario);
                }
                else if(salario >= 450 && salario < 750){
                    novoSalario = salario + 75;
                    printf("O novo salário é: %.2f",novoSalario);
                }
                else{
                    novoSalario = salario + 100;
                    printf("O novo salário é: %.2f",novoSalario);
                }
            break;
            case 3:
                printf("Digite o salário: ");
                scanf("%f",&salario);

                if(salario <= 700){
                    printf("Mal remunerado");
                }
                else{
                    printf("Bem remunerado");
                }
            break;
            default:
                printf("Opção inválida");   
        }
    return 0;
}
