#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	void* malloc(size_t size)
	void* calloc(size_t num, size_t size)
	void* realloc(void* memblock, size_t size) <- resize
	*/
	
	int i, sum;
	int *arr;	
	scanf("%d", &i);
	arr = (int*)malloc(i*sizeof(int));
	for (int j = 0; j < i; j++)
		scanf("%d", &arr[j]);
	for (int j = 0; j < i; j++)
	{
		printf("%d\n", arr[j]); sum += arr[j];	
	}
	printf("%d", sum);
	free(arr);
}
