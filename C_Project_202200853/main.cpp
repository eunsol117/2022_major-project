/*[���׸� 1] : ���� ����

��ǻ�����α׷��� �򰡰��� (���� 25��)
�а� : ��ǻ�Ͱ��к�
�й� : 202200853
�̸� : ������

���� ���� : 6�� ù°��(1��~4��) ���νó� �ڷγ� Ȯ���� ��Ȳ

*/

#include <stdio.h>

int main(void)
{
    int numbers[4];  // [���׸� 3] : �迭 ���
    numbers[0] = 355;
    numbers[1] = 188;
    numbers[2] = 309;
    numbers[3] = 256;
    printf("6.1=%d��\n", numbers[0]);
    printf("6.2=%d��\n", numbers[1]);
    printf("6.3=%d��\n", numbers[2]);
    printf("6.4=%d��\n", numbers[3]);
    return 0;
}
//
int get_integer() // [���׸� 2] : �Լ� ���
{
    int value;
    printf("������ �Է��Ͻÿ�: ");
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
    printf("6�� ù°��(1��~4��) ���νó� �ڷγ� �� Ȯ���� ���� %d�Դϴ�. \n", sum);
    return 0;

        int i = 355;  //[���׸� 4] : ������ ���
        int* p = NULL;

        p = &i;

        printf("6.1 Ȯ���� ���� %d�Դϴ�.\n", *p);

        return 0;

#include <stdio.h>  //[���׸� 5] : ����ü ���
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

            printf("6.1 ���� �ó� ���� Ȯ���� ����\n");
            printf("ó��: %d\n", s.num_1);
            printf("����: %s\n", s.num_2);
            printf("����: %f\n", s.num_3);

            return 0;

#include <stdio.h>

            void set_pointer(char** q);  //[���׸� 6] : ������ Ȱ��

            {

                char* p;
                set_pointer(&p);
                printf("�����ȳ�����\n %s \n", p);
                return 0;
            }
            void set_pointer(char** q)
            {
                
                *q = "������� ������ ����ũ ���� �� ���� �濪��Ģ�� �ؼ��Ͽ� �ֽñ� �ٶ��ϴ�.";
            }


                FILE* fp = NULL;  //[���׸� 7] : ���� �����

                fp = fopen("sample.txt", "w");

                if (fp == NULL)
                    printf("���� ���� ����\n");
                else
                    printf("���� ���� ����\n");

                fclose(fp);

                return 0;


#include <stdio.h>  //[���׸� 8] : ���� �ҽ� ���� ���
#include "power.h"

    int x, y;

    printf("x�� ���� �Է��Ͻÿ�:");
    scanf("%d", &x);
    printf("y�� ���� �Է��Ͻÿ�:");
    scanf("%d", &y);
    printf("6.1 6.4 Ȯ���� ���� ���� %d\n", power(x, y));

    return 0;



}