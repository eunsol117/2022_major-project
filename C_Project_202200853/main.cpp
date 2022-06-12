/*[평가항목 1] : 과제 설명

컴퓨터프로그래밍 평가과제 (배점 25점)
학과 : 컴퓨터공학부
학번 : 202200853
이름 : 김은솔

과제 주제 : 6월 첫째주(1일~4일) 용인시내 코로나 확진자 현황

*/

#include <stdio.h>

int main(void)
{
    int numbers[4];  // [평가항목 3] : 배열 사용
    numbers[0] = 355;
    numbers[1] = 188;
    numbers[2] = 309;
    numbers[3] = 256;
    printf("6.1=%d명\n", numbers[0]);
    printf("6.2=%d명\n", numbers[1]);
    printf("6.3=%d명\n", numbers[2]);
    printf("6.4=%d명\n", numbers[3]);
    return 0;
}
//
int get_integer() // [평가항목 2] : 함수 사용
{
    int value;
    printf("정수를 입력하시오: ");
    scanf_s("%d", &value);
    return value;
}

int add(int a, int b, int c, int d)
{
    return c + d + a + b;

    int c = get_integer();
    int d = get_integer();
    int a = get_integer();
    int b = get_integer();

    int sum = add(c, d, a, b);
    printf("6월 첫째주(1일~4일) 용인시내 코로나 총 확진자 수는 %d입니다. \n", sum);
    return 0;

        int i = 355;  //[평가항목 4] : 포인터 사용
        int* p = NULL;

        p = &i;

        printf("6.1 확진자 수는 %d입니다.\n", *p);

        return 0;

#include <stdio.h>  //[평가항목 5] : 구조체 사용
#include <stdlib.h>
#include <string.h>

        struct numbers {
            int num_1;
            int num_2;
            int num_3;
        };

            struct numbers s;

            s.num_1 = 68;
            s.num_2 = 147;
            s.num_3 = 140;

            printf("6.1 용인 시내 구별 확진자 수는\n");
            printf("처인: %d\n", s.num_1);
            printf("기흥: %s\n", s.num_2);
            printf("수지: %f\n", s.num_3);

            return 0;

#include <stdio.h>

            void set_pointer(char** q);  //[평가항목 6] : 포인터 활용

            {

                char* p;
                set_pointer(&p);
                printf("안전안내문자\n %s \n", p);
                return 0;
            }
            void set_pointer(char** q)
            {
                
                *q = "백신접종 참여와 마스크 착용 등 개인 방역수칙을 준수하여 주시기 바랍니다.";
            }


                FILE* fp = NULL;  //[평가항목 7] : 파일 입출력

                fp = fopen("sample.txt", "w");

                if (fp == NULL)
                    printf("파일 열기 실패\n");
                else
                    printf("파일 열기 성공\n");

                fclose(fp);

                return 0;


#include <stdio.h>  //[평가항목 8] : 다중 소스 파일 사용
#include "power.h"

    int x, y;

    printf("x의 값을 입력하시오:");
    scanf("%d", &x);
    printf("y의 값을 입력하시오:");
    scanf("%d", &y);
    printf("6.1 6.4 확진자 수의 합은 %d\n", power(x, y));

    return 0;



}