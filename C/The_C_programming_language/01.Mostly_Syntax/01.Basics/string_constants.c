#include <stdio.h>
#include <string.h>

int main() {
    char *a = "Hello world";
    int b = strlen(a);
    int x = 0;
    int i;
    for (i = b - 1; i >= -1; i--) {
        char d[b];
        d[x] = a[i];
        printf("%s\n", d);
        x++;
    }
}
