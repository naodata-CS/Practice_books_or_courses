#include <stdio.h>

int main() {
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are now singed up!\n");
    } else if (age < 0) {
        printf("You haven't been born yet!\n");
    } else if (age == 17) {
        printf("You are so close to sing up!\n");
    } else {
        printf("You are too young to sing up!\n");
    }
    return 0;
}
