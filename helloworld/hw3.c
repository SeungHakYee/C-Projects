#include <stdio.h>

int main(){
    //num: �Է¹޴� ��
    //i: ����, j: ����
    //space: x�� ��������� ���ݰ���� ���� ����
    int num, i = 1, j = 1,space = 0;
    printf("ũ��: ");
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