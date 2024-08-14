#include <stdio.h> //이런문제는 실제 실기에서 나오면 스킵하고 마지막에 푸삼
int main(){
    int map[5][5] = {
        1,5,6,7,8,
        2,4,6,4,9,
        1,5,7,4,2,
        2,3,4,5,5,
        5,2,4,1,1 };
        int i =0, j= 0;
        int res = map[i][j];
        while(1) //1은 무한으로 돈다는 의미 탈출조건 없음. 0이면 아예시작이안됨 바로탈출
        {
            if (i == 4 && j == 4) break;  //여기가 탈출조건
            else if (i == 4) j++;
            else if (j == 4) i++;
            else if (map[i+1][j] >= map[i][j+1]) j++;
            else
            i++;
            res += map[i][j];  //res = res+ map[i][j]
        }
        printf("result : %d", res);
        return 0;
    }