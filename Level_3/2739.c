#include <stdio.h>

int main(void){
	int input;
	scanf("%d", &input);
	for (int j=1; j <= 9; j++)
		printf("%d * %d = %d\n", input, j, input*j);
	return 0;
}
