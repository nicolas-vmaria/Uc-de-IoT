#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n1, n2, n3, maior;
	printf("Digite tres numeros quaisquer: \n");
	scanf("%d %d %d", &n1, &n2, &n3);
	if((n1 > n2) && (n1 > n3))
		maior = n1;
	else if((n2 > n3) && (n2 > n1))
		maior = n2;
	else if((n3 > n1) && (n3 > n2))
		maior = n3;
	else if(n1 == n2)
		maior = n1;
	else if(n1 == n3)
		maior = n1;
	else if(n2 == n3)
		maior = n2;
	printf("\nO maior numero e: %d", maior);
}