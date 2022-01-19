#include<stdio.h>
#include<stdlib.h>

int C, D, L;

int main(){
	
	printf("a sequencia de fibonat e: \n");
	C= 0;
	D= 1;
	
	for (L= 1; L< 15; L= L+1){
		C= (D+C);
		printf("%d\n", C);
		D= (C-D);
	}
	
	system ("pause");
	return 0;
}
