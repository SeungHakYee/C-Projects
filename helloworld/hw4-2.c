#include <stdio.h>

int main(){
    //i�� 1 ~ 100���� �����ϴ� ����
    // first_number: �����ڸ�, second_number: �����ڸ�(���ǻ� �����ڸ��� �����ڸ����� 0�̸� 10���� �Ǵ� �ڵ�)
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