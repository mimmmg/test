#include <stdio.h>
int main() {
    int* pnum, Num1 = 200, Num2 = 300;
    pnum = &Num1;
    (*pnum) += 40;      // = +40을 대입해라
    pnum = &Num2;
    (*pnum) -= 50;     // = -50을 대입해라
    printf("Num1=%d\nNum2=%d", Num1, Num2);  //\n 줄바꿈인거 놓치며 안돼~~
}