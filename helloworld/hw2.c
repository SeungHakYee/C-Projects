#include <stdio.h>

int main(){
    //sum: 합계, num: 입력값
    int sum = 0, num;
    do {
        scanf("%d", &num);
        if(num == 0){
            printf("합계: %d", sum);
            break;
        }
        sum += num;
    } while(1);
}