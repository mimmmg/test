#include <stdio.h>
int main() {
    char a[] = {'1', 'B', 'C', 'D', 'E'};
    char *p;
    p = &a[2];
    printf("%c%c", *p, *(p-2));
    return 0;
}