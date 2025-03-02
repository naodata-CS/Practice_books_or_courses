#include <stdio.h>

main()
{
	int age;
	printf("Write your age: ");
	scanf("%d", &age);
	if (age > 18){
		printf("Your age is %d and you are and adult.\n", age);
	} else {
		printf("Your age is %d and you are a kid.\n", age);
	}
	char b[]="Hello\n";
	printf("%s", b);

} 
