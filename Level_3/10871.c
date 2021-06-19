#include <stdio.h>

int main(void){
	int N, X;
	scanf("%d %d", &N, &X);
	for (int i=0; i < N; i++){
		int A;
		scanf("%d", &A);

		if (X > A) printf("%d\n", A);
	}
	return 0;
}
