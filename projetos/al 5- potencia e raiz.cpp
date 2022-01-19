#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float V, Po, P, Ra;

int main(){
	printf("--------------------\n");
	printf("escreva um valor: ");
	scanf("%f", &V);
	printf("escreva sua potencia: ");
	scanf("%f", &P);
	
	Po=pow(V,P);
	Ra=pow(V,1/P);
	
	printf("--------------------\n");
	printf("a potencia e %2.1f\n", Po);
	printf("a raiz e %2.1f\n", Ra);
	printf("--------------------\n");
	
	system("pause");
	return 0;
}
