#include <stdio.h>
#include <stdlib.h>
#include "my_math.h"

int main(void) {
	int a = 10;
	int b = 20;

	printf("add: %d\n", add(a,b));
	printf("sub: %d\n", subtract(a,b));
	printf("mul: %d\n", multiply(a,b));
	printf("div: %d\n", divide(a,b));

	struct Complex *cmpx = (struct Complex *) calloc(1, sizeof(struct Complex));
	if (cmpx != NULL) {
		cmpx->real = 123.456;
		cmpx->img = 1.23456;

		printf("real = %lf, img = %lf\n", cmpx->real, cmpx->img);
		free(cmpx);
	} else {
		perror("calloc()");
	}

	return EXIT_SUCCESS;
}