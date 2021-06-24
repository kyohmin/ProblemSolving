#include <stdio.h>

int main(void){
	int tests, grade, avg = 0, MAX = -10000;
	scanf("%d", &tests);
	int arr[1000];
	for(int i = 0; i < tests; i++){
		scanf("%d", &grade);
		if(MAX < grade)
			MAX = grade;
		arr[i] = grade;
	}
	for(int i = 0; i < tests; i++){
		avg += (arr[i] / (float) MAX) * 100;
	}
	printf("%d\n", avg / tests);

	return 0;
}
