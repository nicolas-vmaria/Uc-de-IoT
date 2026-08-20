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
    
    float salario, gratificacao, desconto, salarioTotal;
    
    printf("Digite seu salário e aperte a tecla enter:");
    scanf("%f%*c", &salario);
    
    desconto = salario * 0.07;
    gratificacao = salario * 0.05;
    salarioTotal= salario + gratificacao - desconto;
    
    printf("Gratificação: %.2f",gratificacao);
    printf("\nImpostos: %.2f",desconto);
    printf("\nSeu salário limpo desse mês é: %.2f", salarioTotal);
    }
