#include <stdio.h>
int main(){
    int i, a[5], temp;
    for (i = 0; i < 5; i++){
        a[i] = i + 1; //a[0]=0+1=1, a[1]=1+1=2, a[2]=2+1=3, a[3]=3+1=4, a[4]=4+1=5
        printf("%d", a[i]);
    }
    printf("\n");
    temp = a[0]; //temp=a[0]=1
    for (i = 0; i < 4; i++){
        a[i] = a[i + 1];  // a[0]=a[0+1]=a[1]=2, a[1]=a[1+1=2]=a[2]=3, a[2]=a[2+1=3]=a[3]=4, a[3]=a[3+1=4]=5 끝
    }
     a[4] = temp; // ? = temp =a[0]=1 결과에서 1이 5번째 자리에서 출력됐으니까 정답이 a[4]가 되어야 함
     for (i = 0; i < 5; i++){
        printf("%d", a[i]);
     }
}