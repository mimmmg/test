#include <stdio.h>
int main() {
    int a[5] = {5, 4, 3, 2, 1};
    int i = 4, sum = 0;
    do {
        a[i] = a[i] %3;
        sum = sum + a[i];
        i--;
    } while (i > 0);
    printf("%d", sum);
}