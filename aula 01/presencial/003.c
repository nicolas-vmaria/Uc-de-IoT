#include <stdio.h>
#include <locale.h>

/*
Faça um programa que receba o valor
de um depósito e o valor da taxa de juros,
calcule e mostre o valor do rendimento
e o valor total depois do rendimento
*/
int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float deposito, taxa, juros, totalPosJuros;
    
    printf("Digite o valor do depósito:");
    scanf("%f%*c", &deposito);
    
    printf("Digite a taxa de juros (em porcentagem):");
    scanf("%f%*c", &taxa);
    
    juros = deposito * taxa/100;
    totalPosJuros= deposito + juros;
    
    printf("\nO valor do rendimento é: %.2f",juros);
    printf("\nO valor total pós rendimento é: %.2f",totalPosJuros);
    }
