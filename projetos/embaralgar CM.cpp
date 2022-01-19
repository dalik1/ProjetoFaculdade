#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int M, N, A, B;

int main(){
	
	printf("U = sima direita    U'= sima esquerda\n");
	printf("F = frente direita  F'= frente esquerda\n");
	printf("R = direita sima    R'= direita baixo\n");
	printf("L = esquerda baixo  L'= esquerda sima\n");
	printf("B = atras direita   B'= atras esquerda\n");
	printf("D = baixo esquerda  D'= baixo direita\n");
	M=0;
	A=0;
	srand(time(NULL));
	while(M!=20){
		N= (rand()%18);
		if(N==A+6 || N==A-6 || N==A+12 || N==A-12){
		M=M-1;	
		}
		else{
			switch (N){
				case 1:
					printf("U ");
					break;
				case 2:
					printf("F ");
					break;
				case 3:
					printf("R ");
					break;
				case 4:
					printf("L ");
					break;
				case 5:
					printf("B ");
					break;
				case 6:
					printf("D ");
					break;
				case 7:
					printf("U' ");
					break;
				case 8:
					printf("F' ");
					break;
				case 9:
					printf("R' ");
					break;
				case 10:
					printf("L' ");
					break;
				case 11:
					printf("B' ");
					break;
				case 12:
					printf("D' ");
					break;
				case 13:
					printf("U2 ");
					break;
				case 14:
					printf("F2 ");
					break;
				case 15:
					printf("R2 ");
					break;
				case 16:
					printf("L2 ");
					break;
				case 17:
					printf("B2 ");
					break;
				case 18:
					printf("D2 ");
					break;
				}
			}
		
		A=N;
		M=M+1;
	}
	printf("\n");
	
	system("pause");
	return 0;
}
