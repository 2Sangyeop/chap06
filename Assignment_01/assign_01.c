/*****************************************************************************************************
   * ���ϸ�: assign_01.c

   * ����: ���ο� ������ ���̸� �Ű������� ���޹޾� ���簢���� �ѷ��� ���ϴ� get_perimeter �Լ��� �ۼ��Ͻÿ�. 
            get_perimeter �Լ��� �̿��ؼ� �Է¹��� ����, ������ ���̷� ���簢���� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

   * �ۼ���: �̻�_202111022_�������

   * ��¥: 2025.05.20.

   * ����: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_01(void);
int get_perimeter(int a, int b);

//assign_01�Լ� ȣ��
int main()

{
    assign_01();

    return 0;
}


int assign_01(void)
{
    int width = 0;  //����
    int height = 0; //����
    int perimeter = 0; //�ѷ�

    printf("����? ");
    scanf("%d", &width);

    printf("����? ");
    scanf("%d", &height);

    perimeter = get_perimeter(width, height);

    printf("���簢���� �ѷ�: %d", perimeter);
}


// ����, ���θ� ���� a�� b�� ���޹޾� �ѷ��� ���Ͽ� ��ȯ�ϴ� �Լ�.
int get_perimeter(int a, int b)
{
    int result = 0;

    result = a * 2 + b * 2;

    return result;
}

