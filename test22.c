#include <stdio.h>
int main() {
    int i = 0, sum = 0;
    int a [10] = { 47,104,30,65,46,80,51,106,61,62};
    for (i = 0; i < 10; i = i + 2)
    sum = sum + a[i];
    printf("%d", sum);
}