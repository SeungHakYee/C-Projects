#include <stdio.h>

int main(){
    //sum: �հ�, num: �Է°�
    int sum = 0, num;
    do {
        scanf("%d", &num);
        if(num == 0){
            printf("�հ�: %d", sum);
            break;
        }
        sum += num;
    } while(1);
}