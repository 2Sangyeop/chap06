/*****************************************************************************************************
   * ���ϸ�: assign_19.c

   * ����: ��ġ �����Ϳ� �������� ���ڷ� �޾� �׷����� ����ϴ� graph �Լ��� �ۼ��Ͻÿ�.
            ��: graph(1200, 100); �� * 12��, graph(1200, 10); �� * 120��
            0~9999 ������ ������ ���� 3���� �����ϰ� ������ 100���� �׷����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

   * �ۼ���: �̻�

   * ��¥: 2025.05.20.

   * ����: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int assign_19(void);             
void graph(int data, int scale); 

int main()
{
    assign_19(); 
    return 0;
}

// 0~9999 ������ ���� 3�� ���� �� �׷��� ���
int assign_19(void)
{
    int num1, num2, num3;

    srand((unsigned int)time(NULL)); 

    // ���� ����
    num1 = rand() % 10000;
    num2 = rand() % 10000;
    num3 = rand() % 10000;

    // ���� �׷��� ���
    printf("%d: ", num1);
    graph(num1, 100);

    printf("%d: ", num2);
    graph(num2, 100);

    printf("%d: ", num3);
    graph(num3, 100);

}

// ���ڷ� ���޵� ��ġ �����Ϳ� �����Ϸ� �׷����� ����ϴ� �Լ�
void graph(int data, int scale)
{
    int count = data / scale;

    for (int i = 0; i < count; i++)
    {
        printf("*");
    }
    printf("\n");
}