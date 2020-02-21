#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    변수
     int, char, float,double, long, ...
     변수 자체에 값 저장.

    */

    //배열 : 같은 타입의 연속 할당.
    //구조체 : 여러가지 타입의 연속 할당.



// 배열
//    int scores[3] = {0}; //배열 생성, 초기화 안되어 있음.
//    scores[0]=10;
//    scores[1]=20;
//    scores[2]=scores[0]+scores[1];
//
//    puts("점수를 입력하세요");
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

    count = sizeof(scores) / sizeof(scores[0]);  // 배열의 크기 / 배열에 담은 자료형의 크기.
    for(int i = 0; i < count; i++){
        scanf("%d", &scores[i]);
    }



     printf("%d",)
    return 0;
}
