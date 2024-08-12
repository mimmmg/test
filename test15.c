#include <stdio.h>
int main() {
    int num = 1;
    for (int i = 1; ; i++) {
        num = num * i;
        if (i > 5)
        break; //탈출조건
    }
    printf("&d", num);
}