/*****************************************************************************************************
   * ���ϸ�: assign_03.c

   * ����: �� �� ������ ���� �Ÿ��� ���ϴ� distance �Լ��� �ۼ��Ͻÿ�. 
            distance �Լ��� �̿��ؼ� �Է� ���� ���������� ���� ������ ���� �Ÿ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

   * �ۼ���: �̻�_202111022_�������

   * ��¥: 2025.05.20.

   * ����: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int assign_03(void);
int get_distance(int x1, int y1, int x2, int y2);

//assign_03�Լ� ȣ��
int main()

{
    assign_03();

    return 0;
}


int assign_03(void)
{
    // ������ ������ ��ǥ
    int start_x = 0;
    int start_y = 0; 

    // ������ ���� ��ǥ
    int end_x = 0;
    int end_y = 0;

    // ���� �Ÿ� 
    float distance = 0;

    printf("������ ������ ��ǥ? ");
    scanf("%d %d", &start_x, &start_y);

    printf("������ ���� ��ǥ? ");
    scanf("%d %d", &end_x, &end_y);

    distance = get_distance(start_x, start_y, end_x, end_y);

    printf("(%d, %d)~(%d, %d) ������ ����: %f", start_x, start_y, end_x, end_y, distance);

}


// �������� ������ ��ǥ�� �Է¹޾� ������ ���̸� ���ϴ� �Լ�
int get_distance(int x1, int y1, int x2, int y2)
{
    float result = 0;

    result = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    return result;
}

