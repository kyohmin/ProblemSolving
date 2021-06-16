#include <stdio.h>

int main(void){
	int hour, min;
	scanf("%d %d", &hour, &min);
	min -= 45;
	if (min < 0)
	{
		min += 60;
		if (min != 0){
			hour -= 1;
		}
		if (hour == -1){
			hour = 23;
		}
	}
	printf("%d %d\n", hour, min);
	return 0;
}
