#include <stdio.h>

int main(void){
	int numList[10] = {0,}, counter = 0;
	for(int i = 0; i < 10; i++){
		int input, tmp;
		scanf("%d", &input);
		input %= 42;
		for (int j = 0; j <= i; j++){
			if (input == numList[j]){
				break;
			} else if (j == i){
				numList[j] = input;
				counter++;
			}
		}
	}
	counter += 1;
	printf("%d\n", counter);
	return 0;
}

// NOT DONE YET
