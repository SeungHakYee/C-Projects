#include <stdio.h>

int main(){
    //i�� 1 ~ 100���� �����ϴ� ����
    // first_number: �����ڸ�, second_number: �����ڸ�(���ǻ� �����ڸ��� �����ڸ����� 0�̸� 10���� �Ǵ� �ڵ�)
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