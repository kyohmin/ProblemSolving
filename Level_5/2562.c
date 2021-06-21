#include <stdio.h>

int main(void){
	int num_list[9], index;
	int MAX = -99999999;
	for (int i = 0; i < 9 ; i++){
		scanf("%d", &num_list[i]);
		if (MAX <= num_list[i]){
			MAX = num_list[i];
			index = i + 1;
		}
	}
	printf("%d\n%d\n", MAX, index);
	return 0;
}
