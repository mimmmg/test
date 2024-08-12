#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int a;
    printf("정수 입력 : ");
    scanf("%d", &a);
    if (a%3 == 0 && a%7 == 0)
        printf("3의 배수이면서 7의 배수임\n");
        else
        printf("3의 배수이면서 7의 배수가 아님\n");
}