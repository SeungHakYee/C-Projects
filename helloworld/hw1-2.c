#include <stdio.h>

int main()
{
    //i�� 2 ~ num���� �����Ǵ� ����
    //cnt�� i�� ����� ���
    //cnt2�� �Ҽ��� ī��Ʈ
    int num, cnt = 0, cnt2 = 0;
    printf("����� �Ѱ�: ");
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