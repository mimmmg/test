#include <stdio.h>
int isprime(int number)
{
    int i;
    for(i = 2; i < number; i++)
    if(number % i  == 0) // number를 i로 나눠서 나머지값이 0으로 나눠떨어지면 리턴0, 안나눠떨어지고 자기자신 나올때까지 나오면 리턴1
        return 0;
    return 1;
}

int main() 
{
    int number = 99, cnt = 0, i;
    for(i = 2; i <= number; i++)
    cnt = cnt + isprime(i);
    printf("%d를 넘지 않는 소수는 &d개입니다.\n", number, cnt);
    return 0;
}
