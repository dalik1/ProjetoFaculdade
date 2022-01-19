#include<stdio.h>
#include<stdlib.h>

int A, B, C ;// valores
int D; //resultado 

int main(){//inicio
	printf("escreva 3 valores\n");
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	printf("--------------------------------\n");
	if (A>B && A>C){
		(D=A);
	} 
	if (B>A && B>C){
		(D=B);
	}
	if  (C>A && C>B){
		(C=D);
	}
	printf ("o maior valor e %d\n", D);
system ("pause");
return 0;
}//fim
