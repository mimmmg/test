#include <stdio.h>
int main() {
    for (int i = 9; i > 0; i--){
        switch (1 % 2) {
        case 1:
        printf("%d", i);
        break;
        default:
        printf("*");
        break;
        }
    }
    return 0;
}