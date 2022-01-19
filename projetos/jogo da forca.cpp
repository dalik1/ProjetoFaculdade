#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int desenho(int D){
		if (D==6){
			printf("_________\n");
			printf("|       |\n");
			printf("|        \n");
			printf("|        \n");
			printf("|        \n");
			printf("|        \n");
			printf("|        \n");
		}
		if (D==5){
			printf("_________\n");
			printf("|       |\n");
			printf("|       0\n");
			printf("|        \n");
			printf("|        \n");
			printf("|        \n");
			printf("|        \n");
		}
		if(D==4){
			printf("_________\n");
			printf("|       |\n");
			printf("|       0\n");
			printf("|       | \n");
			printf("|        \n");
			printf("|\n");
			printf("|\n");
		}
		if(D==3){
			printf("_________\n");
			printf("|       |\n");
			printf("|       0\n");
			printf("|      /| \n");
			printf("|         \n");
			printf("|\n");
			printf("|\n");
		}
		if(D==2){
			printf("_________\n");
			printf("|       |\n");
			printf("|       0\n");
			printf("|      /|\ \n");
			printf("|         \n");
			printf("|\n");
			printf("|\n");
		}
		if(D==1){
			printf("_________\n");
			printf("|       |\n");
			printf("|       0 \n");
			printf("|      /|\ \n");
			printf("|      /   \n");
			printf("|\n");
			printf("|\n");
		}
}
int D, G;//numero de chances, G pra saber se errou ou nao 
char E;//a letra escolida
int rodada, Z[15];//para saber qual letra ja foi descuberta
int H, A, C, F;//A � contador do sistema das barras, C � vitoria, F � o contador de letras incorretas, H sistema de aleatoriedade
char B[2]={" "};//B � algo pra poder comparar
char nome[44][20]= {"ahri", "akali", "annie",
"Ashe", "blitzcrank", "braum", "camille", "darios",
"dr mundo", "draven", "evlynn", "ezreal", "fiora",
"galio", "gragas", "irelia", "janna", "jax",
"jhin", "jinx", "kai sa", "katarina", "lee sin",
"leona", "lucian", "lulu", "lux", "miss fortune",
"orianna", "pantheon", "rakan", "rammos", "renecton",
"riven", "senna", "sona", "soraka", "teemo",
"tryndamer", "vayne", "xayah", "yasuo", "zed"};  // nome todas as palavras do jogo
int main(){
	C=0;
	D=6;
	srand(time(NULL));
	H=(rand()%44);
	desenho(D);
	for (A=0; A<= 15; A=A+1){
		if (nome[H][A] == B[0]){
			printf(" ");
			Z[A]= 0;
		}	
		if(nome[H][A] == B[1]){
			printf(" ");
		}
		else{
			printf ("-");
		}
	}
	
	printf("\n");
	G=6;
	rodada=1;	
	C=15;
	while(D!=0 && C !=1){
		F=1;
		C=1;
		printf("voce tem %d chances\n", D);
		scanf(" %c", &E);
		if(D!=G){
			system("cls");
			desenho(D);
			for (A=0; A<= 15; A=A+1){
				if (nome[H][A] == E || Z[A]== 1){
					Z[A]= 1;
					printf("%c", nome[H][A]);
					if(nome[H][A] == E){
						F=F+1;
					}
				}
				else if (nome[H][A] == B[0]){
					printf(" ");
				}
				else if(nome[H][A] == B[1]){
					printf(" ");
				}
				else if(nome[H][A] != E){
					printf ("-");	
					C=C+1;
				}
			}		
		}		
		if(G==D){
			system("cls");
			desenho(D);
			for (A=0; A<= 15; A=A+1){
				if (nome[H][A] == E || Z[A]== 1){
					Z[A]= 1;
					printf("%c", nome[A]);
					if(nome[H][A] == E){
					F=F+1;
					}
				}
				else if (nome[H][A] == B[0]){
					printf(" ");
				}
				else if(nome[H][A] == B[1]){
					printf(" ");
				}
				else if(nome[H][A] != E){
					printf ("-");	
					C=C+1;
				}
			}
		}		
		if (C==1){
			printf("vitoria\n");
		}
		if (F==1){
			D=D-1;
		}
		rodada=rodada+1;
	}
	if(D==0){
		system("cls");
		printf("_________  \n");
		printf("|       |  \n");
		printf("|       0  \n");
		printf("|      /|\ \n");
		printf("|      / \  \n");
		printf("|          \n");
		printf("|   derrota\n");
		printf("%s\n", nome[H]);
	}
	system("pause");
	return 0;	
}