#include<stdio.h>
#include<stdlib.h>

int A=0,B, C, D;


int main(){
	for (C=1000;C<=2000;C=C+1){
		B=(C % 2);
		if(B==0){
			A=A+1;
		}
	}
	printf("%d pessoas deram numeros pares\n", A);
}
