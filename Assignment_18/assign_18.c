/*****************************************************************************************************
   * ���ϸ�: assign_18.c

   * ����: ���ڷ� ���޵� ������ ����� ���ؼ� ����ϴ� divisors �Լ��� �ۼ��Ͻÿ�.
            0~999������ ������ ���� 3���� �����ϰ� divisors �Լ��� �̿��ؼ� ������ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
   
   * �ۼ���: �̻�_202111022_�������

   * ��¥: 2025.05.20.

   * ����: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int assign_18(void);
void divisors(int number);

int main()
{
    assign_18();
    return 0;
}

int assign_18(void)
{
    int num1, num2, num3;

    // 0~ 999 ���� ����
    num1 = rand() % 999;
    num2 = rand() % 999;
    num3 = rand() % 999;

    divisors(num1);
    divisors(num2);
    divisors(num3);

    return 0;
}

//���ڷ� ���޵� ������ ����� ���ؼ� ����ϴ� �Լ�
// ���ϰ��� ���� �Ű������� �ִ� �Ԥ�
void divisors(int number)
{
    int count = 0;

    printf("%d�� ���: ", number);
    for (int i = 1; i <= number; i++) 
    {
        if (number % i == 0) 
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("=> �� %d��\n", count);
}