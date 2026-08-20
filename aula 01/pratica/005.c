#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int a,b,c;
    float media;
    
    printf("Digite 3 números para fazer a média:");
    scanf("%d %d %d",&a,&b,&c);
    
    media=(a+b+c)/3;
    
    printf("A media desses números é: %f",media);
    }
