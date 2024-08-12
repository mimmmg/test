#include <stdio.h>
int main() {
    printf("%d\n", sizeof(12.3)); //12.3f f가 붙으면 float:4 없으면 그냥 실수는 double:8
    printf("%d", sizeof(char));
    return 0;
}

//#include <stdio.h>
//int main(){
   // printf("%d", sizeof(12));
   // return 0;
//}
