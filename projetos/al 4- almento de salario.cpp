#include<stdio.h>
#include<stdlib.h>

float SA, AS;


int main(){
	
	printf("escreva o salario atual: ");
	scanf("%f", &SA);
	AS=((SA*25/100)+SA);

	printf("seu salario atual é: %2.2f\n", AS);
	
	system("pause");
	return 0;
}
