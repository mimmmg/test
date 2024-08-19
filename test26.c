#include <stdio.h>
int num;
int grow();

int main() 
{
    printf("%d", num);  //여기서 결과가 찍히는데 이 다음 grow함수가 나오니까 쨋던 
    grow();
}

int grow() {
    num = 16448000;   //여긴 printf가 없으니까 출력할게 없음
}

//num은 main 밖에 있으면 0이다.