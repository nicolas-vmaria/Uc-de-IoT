#include <stdio.h>
#include <locale.h>

/*
Faça um programa que receba o salário base de um funcionário,
calcule e mostre o salário a receber, sabendo-se que o funcionário
tem gratificação de 5% sobre o salário base e paga imposto de 7%
também sobre o salário base

Faça exibir o valor da gratificação, valor do imposto e o salário a receber
*/
int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float salario, comGratificacao, comDesconto, salarioTotal;
    
    printf("Digite seu salário e aperte a tecla enter:");
    scanf("%f%*c", &salario);
    
    comDesconto = salario * 0.07;
    comGratificacao = salario * 0.05;
    salarioTotal= salario + comGratificacao - comDesconto;
    
    printf("Gratificação: %.2f",comGratificacao);
    printf("\nImpostos: %.2f",comDesconto);
    printf("\nSeu salário limpo desse mês é: %.2f", salarioTotal);
    
    
    system("pause");
    return 0;
    }
