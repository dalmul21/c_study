#include <stdio.h>

int main() {

	int a=100;
	int result=0;
	int i=0;

	for (i; i<a; i++) {
		result = result + i;
	}

	printf("%d\n", result);

	return 0;

}
