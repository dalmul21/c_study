#include <stdio.h>
#include <stdlib.h>

int main() {

	int *arr;
	char *str;

	int num1, num2;
	int i = 0;

	printf("input arr size : ");
	scanf("%d", &num1);
	arr = (int *)malloc(sizeof(int)*num1);

	for(i; i< num1; i++){
		printf("input value in arr[%d]", i);
		scanf("%d", &arr[i]);
		printf("\n");
	}

	i =0;

	for(i; i<num1; i++){
		printf("%d ", arr[i]);
	}

	scanf("%s", &str);
	printf("%s", str);




	return 0;
}
