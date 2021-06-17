#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
	int repeat, first, second;
	scanf("%d", &repeat);
	for (int i = 0; i < repeat; i++){
		scanf("%d %d", &first, &second);
		printf("%d\n", first+second);
	}
	return 0;
}
