#include <stdio.h>
#define ArrSize 5

void into(int arr[], int gn, int ao);
void PrintArr(int arr[]) ;

void into(int arr[], int gn, int ao) {  //파라미터 3개다.
    arr[ao] = gn;
}

void PrintArr(int arr[]) {
    int i;
    for (i = 0; i < ArrSize; i++){  //Arrsize는 다 5다.기본값
        printf("%d", arr[i]);  //"%d" : 띄어쓰기없이 찍힌다는 의미
    }
    printf("\n");  //"\n" : i한번 돌고나면 줄바꿈한다는 소리
}

int main(){
    int arr[ArrSize];   //int형 배열5짜리
    int i, j;
    for (i = 1; i < 6; i++) {   //1부터 5까지 5번 돈다.
        for (j = 0; j < ArrSize; j++) {     //이중for문 , j<5니까 0부터 4까지 5번돈다.
            into(arr, (j + 1) * i % 5, j);  //%는 나머지 연산자 
        }
        PrintArr(arr);  //밖에있는 포문만큼만 출력된다. 중괄호가 그렇게되니까.
    }
    return 0;
}