#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int a,b,c,d,soma;
    
    printf("Digite 4 números para somar:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    
    soma=a+b+c+d;
    
    printf("A soma desses números é: %d",soma);
    }
