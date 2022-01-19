#include<stdio.h>
#include<stdlib.h>

int pl, sl, tl;

int main(){
	
	printf("escreva os tres lados do triangolo: \n");
	scanf("%d", &pl);
	scanf("%d", &sl);
	scanf("%d", &tl);
	if ((pl==sl) && (pl==tl)){
		printf("seu triangulo e equilatero\n");
	}
	else
	 if((pl==sl) || (pl==tl) || (sl==tl)){
		printf("seu triangulo e isoscelis\n");
	}
	else
	if ((pl!= sl) && (pl != tl)){
		printf("seu triangulo e escaleno\n");
	}
	system("pause");
	return 0;
}
