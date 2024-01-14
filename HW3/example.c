#include <stdio.h>

int main(void) {
	int x1, x2, x3;

	printf("Enter three numbers");
	scanf("%d%d%d", &x1, &x2, &x3);

	if (x1 > x2) {
		printf("NO");
		return 0;
	}		 		
	if (x2 > x3) {
		printf("NO");
		return 0;
	}
		 		
	printf("YES\n");
	return 0;		
}