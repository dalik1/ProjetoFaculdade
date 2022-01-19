#include<stdio.h>
#include<stdlib.h>

int A, B, F, G;
float C, D, E, H;

int main (){
	F=0;
	G=0;
	H=0;
	for (A= 0; A<3; A= A+1){
		printf("n1: ");
		scanf("%f", &C);
		printf("n2: ");
		scanf("%f", &D);
		E= (C+D) /2;
		H=H+E;
		if(E<3 && E>=0){
			printf("reprovado\n");
			G=G+1;
		}
		else
		if(E>=3 && E<=6){
			printf("em analise\n");
			F=F+1;
		}
		else
		if(E>=7 && E<=10){
			printf("aprovado\n");
			printf("parabens\n");
			F=F++;
		}
		printf("%2.1f\n", E);
	}
	H= H/3;
	printf("a media de todos os alunos e %2.1f", H);
	printf("\nalinos aprovados %d", F);
	printf("\nalunos reprovados %d\n", G);
	system("pause");
	return 0;
}
