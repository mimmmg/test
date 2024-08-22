#include <stdio.h>
int main() {
    int a, b = 10;
    for (a = 0; a < 5; ++a, b -= a);  //++a 전위형 증가 연산자, b = b초기값-a 를 대입
    printf("%d, %d", a, b);   // ,하고 띄어쓰기 주의
}