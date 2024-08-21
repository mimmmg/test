#include <stdio.h>
int main(int argc, char* argv[]) {
    int i;
    char str[4];

    str[0] = 'K';
    str[1] = 'O';
    str[2] = 'R';
    str[3] = 'E';
    str[4] = 'A';

    for (i = 0; i < 5; i++) {
        printf("%c", str[i]);
    }
    return 0;
}