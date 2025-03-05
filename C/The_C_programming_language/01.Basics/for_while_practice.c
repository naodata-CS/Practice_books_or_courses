#include <stdio.h>
main()
{
	int times, start;
	printf("Write how many times you want to write hello world!: ");
	scanf("%d", &times);
	/*for (start; start < times  ; start = start + 1)
		printf("Hello world\n");*/
	while (start<=times){
		printf("Hello world\n");
		start = start+1;
	}
}
