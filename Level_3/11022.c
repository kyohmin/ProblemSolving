#include <stdio.h>

int main(void){
	int rep, first, second;
	scanf("%d", &rep);
	for (int i = 0; i < rep; i++){
		scanf("%d %d", &first, &second);
		printf("Case #%d: %d + %d = %d\n", i+1, first, second, first+second);
	}
	return 0;
}
