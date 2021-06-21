#include <stdio.h>

int main(void){
	int numbers, in;
	int MIN = 1000000;
	int MAX = -1000000;
	scanf("%d", &numbers);
	for (int i = 0; i < numbers; i++){
		scanf("%d", &in);
		if (in >= MAX)
			MAX = in;
		if (in <= MIN)
			MIN = in;
	}
	printf("%d %d\n", MIN, MAX);

	return 0;
}
