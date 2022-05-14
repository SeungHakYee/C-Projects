#include <stdio.h>

int main(){
    //num: 입력받는 값
    //i: 세로, j: 가로
    //space: x를 만들기위한 간격계산을 위한 변수
    int num, space = 0;
    printf("크기: ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num; j++){
            if(j == (space + 1) || j == (num - space)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        space++;
    }
}