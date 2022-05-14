#include <stdio.h>

int main()
{
    //i는 2 ~ num까지 증가되는 변수
    //cnt는 i의 약수의 계수
    //cnt2는 소수의 카운트
    int num, i = 2, j = 2, cnt = 0, cnt2 = 0;
    printf("출력할 한계: ");
    scanf("%d", &num);

    while(i <= num){
        j = 2;
        while(j <= i){
            if(i % j == 0){
                cnt++;
            }
            j++;
        }
        if(cnt == 1){
            printf("%d ", i);
            cnt2++;
            if(cnt2 % 5 == 0){
                printf("\n");
            }
        }
        i++;
        cnt = 0;
    }
}