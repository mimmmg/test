#include <stdio.h> 
#include <string.h>
int main() 
{
    int k, n;
    char st[] = "I am Tom!"; //공백도 문자야!!!
    char temp;
    n = strlen(st);
    n--;
    for (k = 0; k < n; k++) 
    {
        temp = *(st + k);  //*():()값을 가져온다 st=0부터 시작
        *(st + k) = *(st + n);  // = 은 대입연산자!! ==이 비교연산자
        *(st + n) = temp;
        n--;
    }
    printf("%s\n", st);
}

//배열(자리)안에 있는 값을 바꿔주는 거 temp 써서 하는게 일반적
//따라서 저런 로직나오면 값을 바꾸는 거다