#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    ����
     int, char, float,double, long, ...
     ���� ��ü�� �� ����.

    */

    //�迭 : ���� Ÿ���� ���� �Ҵ�.
    //����ü : �������� Ÿ���� ���� �Ҵ�.



// �迭
//    int scores[3] = {0}; //�迭 ����, �ʱ�ȭ �ȵǾ� ����.
//    scores[0]=10;
//    scores[1]=20;
//    scores[2]=scores[0]+scores[1];
//
//    puts("������ �Է��ϼ���");
//    scanf("%d", &scores[2]);
//
//    printf("%d\n", scores[0]);
//    printf("%d\n", scores[1]);
//    printf("%d\n", scores[2]);
//
//    int ary[3] ={1,2};
//    printf(ary[2]);
//

    int scores[3];

    count = sizeof(scores) / sizeof(scores[0]);  // �迭�� ũ�� / �迭�� ���� �ڷ����� ũ��.
    for(int i = 0; i < count; i++){
        scanf("%d", &scores[i]);
    }



     printf("%d",)
    return 0;
}
