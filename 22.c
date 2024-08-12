#include <stdio.h>
#include <math.h>

int main() {
    double num = 0.01;
    double res = 0;
    int cnt = 0;

    while (cnt < 100) {
        res += num;
        cnt++;
    }

    // 비교할 값 사이의 차이가 매우 작을 경우
    printf(fabs(res - 1) < 0.00001 ? "true" : "false");

    return 0;
}
