#include <stdio.h>
#include <string.h>
#include <locale.h>

void maior_e_menor(int n1,int n2,int n3,int n4,int *maior,int *menor){
	
	*maior = n1;
    *menor = n1;

    if (n2 > maior) *maior = n2;
    if (n2 < menor) *menor = n2;

    if (n3 > maior) *maior = n3;
    if (n3 < menor) *menor = n3;

    if (n4 > maior) *maior = n4;
    if (n4 < menor) *menor = n4;
    
}