#include <stdio.h>
#include <stdbool.h>

bool numTest(int n) {
    int i = 2;
    if (n < 2) return false;
    else if (n == 2) return true;

    while(1)
    {
        if (n % i == 0) return false;
        else if ( i * i > n ) break;
        i++;
    }
    return true;
}

int main() //일단 main 부터 봐라. main이 시작.main부터 계산하고 안에서 계산하다가 필요하면 위로올라가서 다른 함수 확인
{
    int j = 0;
    int res = 0;

    for (j = 1; j <= 20; j++)
    {
        if ( numTest(j) ) res += j;
    }
    printf("%d", res);

    return 0;
}

//이 함수는 주어진 숫자 n이 소수인지 판별합니다:

//2보다 작은 수는 소수가 아니므로 false를 반환합니다.
//2는 소수이므로 true를 반환합니다.
//그 외의 숫자에 대해:

//2부터 시작하여 n의 제곱근까지의 숫자로 나누어 봅니다.
//나누어 떨어지는 수가 있으면 소수가 아니므로 false를 반환합니다.
//i * i > n이 되면 (즉, i가 n의 제곱근을 넘어서면) 반복을 중단합니다.


//모든 검사를 통과하면 소수이므로 true를 반환합니다.

//종합하면, 이 프로그램은 1부터 20까지의 숫자 중 소수인 숫자들의 합을 계산하여 출력합니다.
//1부터 20까지의 소수는 2, 3, 5, 7, 11, 13, 17, 19이며, 이들의 합은 77입니다. 따라서 이 프로그램의 출력 결과는 77이 될 것입니다.