#include <stdio.h>

int printBin(int a)
{
    if (a == 0 | a == 1) printf("%d", a);
    else{
        printBin(a/2);
        printf("%d", a%2);
    }
}

int main()
{
    int x = 11;
    printBin(x);
    return 0;
}

//11(십진수)가 1011(이진수)로 변환되어 출력됩니다. 이 알고리즘은 숫자를 2로 계속 나누면서 나머지를 역순으로 출력하는 방식으로 이진수 변환을 수행합니다.