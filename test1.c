#include <stdio.h>
int main()
{
    int calc, x = 40, y = 60, z = 80;
    calc = x < y? y++ : --z;
    printf("%d//%d//%d", calc, y ,z);
    return 0;
}