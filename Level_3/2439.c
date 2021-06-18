#include <stdio.h>

int main(void){
	int num;
	scanf("%d", &num); 
	for (int i=0; i < num; i++){
		int p = 0;
		for (int j=0; j <= num - i; j++){
			printf(" ");
			p++;
		}
		for (int k=0; k <= num - p; k ++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
