#include <stdio.h>

int main(){
    //i는 1 ~ 100까지 증가하는 변수
    // first_number: 십의자리, second_number: 일의자리(편의상 십의자리나 일의자리값이 0이면 10으로 되는 코드)
    int i = 1, j = 3, first_number, second_number;
    while(i <= 100){
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
        j = 3;
        while(j <= 9){
            if(first_number % j == 0 || second_number % j == 0){
                printf("* ");
                goto jump;
            }
            j += 3;
        }
        printf("%d ", i);
        jump:
        if(i % 5 == 0 ){
            printf("\n");
        }
        i++;
    }
}