#include <stdio.h>

int main(){
    //num: 입력받는 값
    //i: 세로, j: 가로
    //space: x를 만들기위한 간격계산을 위한 변수
    int num, i = 1, j = 1,space = 0;
    printf("크기: ");
    scanf("%d", &num);
    while(i <= num){
        j = 1;
        while(j <= num){
            if(j == (space + 1) || j == (num - space)){
                printf("*");
            }
            else{
                printf(" ");
            }
            j++;
        }
        printf("\n");
        space++;
        i++;
    }
}