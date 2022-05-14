#include <stdio.h>

int main(){
    //i는 1 ~ 100까지 증가하는 변수
    // first_number: 십의자리, second_number: 일의자리(편의상 십의자리나 일의자리값이 0이면 10으로 되는 코드)
    int first_number, second_number;
    for(int i = 1; i <= 100; i++){
        if(i / 10 == 0){
            first_number = i;
            second_number = 10;
        }
        else{
            first_number = i / 10;
            second_number = i % 10;
            if(second_number == 0)
                second_number = 10;
        }
        for(int j = 3; j <= 9; j += 3){
            if(first_number % j == 0 || second_number % j == 0){
                printf("* ");
                goto jump;
            }
        }
        printf("%d ", i);
        jump:
        if(i % 5 == 0 ){
            printf("\n");
        }
    }
}