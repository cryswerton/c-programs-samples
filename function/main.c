#include <stdio.h>

int multiply(int a, int b);

int main(){
	int x = 6;
	int y = 8;
	printf("%i X %i is %i\n", x, y, multiply(x, y));
}

int calculate(int a, int b){
	return a * b;
}


