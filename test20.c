#include <stdio.h>
int main() {
    int a[5] = {3,2,5,1,4};
    int temp, i;
    for (i = 0; i < 4; i++)
    {
        temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
}