#include <stdio.h>
int main()
{
    int a [10] = {3, 7, 9, 4, 5, 1, 8, 2, 6, 10};
    int i;
    for (i =0; i < 10; i++)
    {
        if (i % 3 == 2)
        {
            printf("%d", a[i]);
        }
    }
}