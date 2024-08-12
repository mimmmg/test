#include <stdio.h>
# define N 100
int main() {
   int i = 1;
   int cnt = 0;

   while (i <= N) {
    if  ((i % 3) == 0 && (i % 7) == 0) {
        cnt++;
        printf("%d*%d*", cnt, i);
    }
    i++;
   }

}