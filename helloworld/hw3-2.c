#include <stdio.h>

int main(){
    //num: �Է¹޴� ��
    //i: ����, j: ����
    //space: x�� ��������� ���ݰ���� ���� ����
    int num, space = 0;
    printf("ũ��: ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num; j++){
            if(j == (space + 1) || j == (num - space)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        space++;
    }
}