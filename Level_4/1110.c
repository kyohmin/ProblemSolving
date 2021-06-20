#include <stdio.h>

int main(void){
	int start, temp, second;
	int counter = 0;
	scanf("%d", &start);
	temp = start;
	do{
		if (start < 10 && counter == 0){
			temp = start % 10 * 11;
			counter ++;
		} else{
			second = temp % 10;
			temp = second + temp / 10;
			temp = second * 10 + temp % 10;
			counter ++;
		}
	} while (start != temp);
	printf("%d\n", counter);
	
	return 0;
}
