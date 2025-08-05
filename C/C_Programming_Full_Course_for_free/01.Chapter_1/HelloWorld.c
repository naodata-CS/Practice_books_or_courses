#include <stdio.h>

int main() {
    // this is a comment
    /* this is a
    multiline comment */
    printf("I like pizza!\n");
    printf("It's really good\n");
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
    int x;
    x = 20;
    int y = 321;
    int age = 22;
    float gpa = 2.05;
    char grade = 'C';
    char name[] = "Joaquin";
    printf("%d", x);
    printf("%d", y);
    printf("Hello world");
    printf("Hello, %s\n", name);
    printf("Your age is %d years old\n", age);
    printf("Your favorite programming language is %c\n", grade);
    printf("Your gpa is %f\n", gpa);
    printf("Hello world\n");
    puts("Thank you");
    return 0;
}
