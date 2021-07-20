#include <stdio.h>
#include <stdlib.h>

void play(int);

int main(void){
	int options[] = {2, 3, 4, 5, 6, 7, 8, 9};
	int op = 0;
	int count = 0;
	printf("### Times Table Game ###\n\n");
	printf("Escolha uma taboada:\n\n");
	printf("2  3  4  5\n6  7  8  9\n\nOpção ? ");
	
	scanf("%i", &op);
	
	for(int i = 2; i <= 8; i++){
		if(op != options[i]){
			count++;
		}else{
			count--;	
		}
	}
	
	if(count == 8){
		printf("\nOpção inválida.\n\n");
		return 1;
	}else{
		printf("\nVamos jogar!\n\n");
		play(op);
		return 0;
	}
}

void play(int n){
	int res = 0;
	int yourRes = 0;
	int score = 0;
	for(int i = 1; i <= 9; i++){
		res = n * i;
		printf("%i X %i = ? ", n, i);
		scanf("%i", &yourRes);
		if(yourRes != res){
			printf("Errou.\n");
		}else{
			printf("Acertou!\n");
		}
	}
}
