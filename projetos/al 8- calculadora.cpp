#include<stdio.h>
#include<stdlib.h>

float A, B, D;
char C;

int main(){
	
	printf("pessa um cauculo: \n");
	scanf("%f", &A);
	scanf(" %c", &C);
	scanf("%f", &B);
	
	switch(C){		
		case '+':
			D= (A+B); 
			break;
		case '-':
			D= (A-B);
			break;
		case '*':
			D= (A*B);
			break;
		case '/':
			D= (A*B);
			break;
		default:
			printf("bugo!!!");
	}
	printf("o resultado do cauculo e %2.0f\n", D);
	system ("pause");
	return 0;
}
