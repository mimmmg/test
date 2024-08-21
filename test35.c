#include <stdio.h>
int hrd(num) {
    if (num <=0)
    return;
    printf("%d ", num);   //띄어쓰기 공간 있음 유의하삼
    hrd(num - 1);
}
int main(){
    hrd(5);
    return 0;
}