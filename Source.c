#include <stdio.h>

int main(void) {

	int c = 0;
	int sum = 1;
	int total = 0;
	for (c = 1; c <= 3; c++) {
		sum = sum * c;
		total +=  sum;
	}
	
	printf("%d", total);
	return 0;	
}