#include <stdio.h>
int hrdcompare(num1, num2);
int main() {
    printf("%d", hrdcompare(10, 23) + hrdcompare(35, 19));
}
hrdcompare(int num1, int num2) {
    if (num1 > num2)   //i) 10>23 else return num2 = 23 
    return num1;       //ii) 35>19 if return num1 = 35
    else 
    return num2;
}