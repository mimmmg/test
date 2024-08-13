
#include <stdio.h>
int main(){
    int len = 0;
    char str[50]; //50개자리 문자
    gets(str);
    for (int i = 0; str[i]; i++)
    len += 1;
    printf("%d", len);
}

//korea50
//0123456까지는 문자로 인식해서 true, 7번째 자리부터는 문자가 없으니까 false돼서 for문 끝나고 7이 출력됨. 즉 str[7]=false