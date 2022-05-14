#include <stdio.h>

int main()
{
    //i는 2 ~ num까지 증가되는 변수
    //cnt는 i의 약수의 계수
    //cnt2는 소수의 카운트
    int num, cnt = 0, cnt2 = 0;
    printf("출력할 한계: ");
    scanf("%d", &num);

    for(int i = 2; i <= num; i++){
        for(int j = 2; j <= i; j++){
            if(i % j == 0){
                cnt++;
            }
        }
        if(cnt == 1){
            printf("%d ", i);
            cnt2++;
            if(cnt2 % 5 == 0){
                printf("\n");
            }
        }
        cnt = 0;
    }
}