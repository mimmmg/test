#include <stdio.h>
int main(void) {
    int i = 200;
    float a = 123.456f;

    i = (int)a;
    printf("%d, %3.2f", i, a);
    return 0;
}