#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (18 >= age) {
        printf("You are a kid\n");
    } else if (age <= 65) {
        printf("You are an adult\n");
    } else {
        printf("You are a ancient\n");
    }
    return 0;
}
