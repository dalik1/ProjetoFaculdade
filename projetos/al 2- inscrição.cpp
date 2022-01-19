#include<stdio.h>
#include<stdlib.h>

int idade, A; //idade
float peso; //peso 
char sexo; //sexo
int main (){

	while (A!=2){
		system("cls");
		printf("escreva sua idade: ");
		scanf("%d",&idade);
	
		printf("escreva seu peso: ");
		scanf("%f",&peso);
		
		printf("escreva seu sexo(M/F): ");
		scanf(" %c",&sexo);
		
		printf("\nIdade: %d",idade);
		printf("\npeso: %2.2f",peso);
		printf("\nsexo: %c\n", sexo);
		printf("1 -outro cliente\n");
		printf("2 -finalisar progama\n");
		scanf("%d", &A);

	}
	system("pause");
	return 0;
}
