#include <stdio.h>
#include <string.h>

int main() {
    char name[25]; // bytes
    printf("What is yor name?\n");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    int age;
    printf("How old are you?\n");
    scanf("%d", &age);
    printf("You are %d years old\n", age);
    return 0;
}
