#include <stdio.h>

int main()
{
    //i�� 2 ~ num���� �����Ǵ� ����
    //cnt�� i�� ����� ���
    //cnt2�� �Ҽ��� ī��Ʈ
    int num, i = 2, j = 2, cnt = 0, cnt2 = 0;
    printf("����� �Ѱ�: ");
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