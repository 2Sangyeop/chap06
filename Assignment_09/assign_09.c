/*****************************************************************************************************
   * ���ϸ�: assign_09.c

   * ����: red, green, blue�� ���ڷ� �����ؼ� RGB ���� ����� �����ϴ� make_rgb �Լ��� �����Ͻÿ�.   
            �տ��� ������ get_red, get_green, get_blue �Լ��� �Բ� �̿��ؼ� �Է¹��� RGB ������   
            ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

   * �ۼ���: �̻�_202111022_�������

   * ��¥: 2025.05.20.

   * ����: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_09(void);
int get_red(int color);
int get_green(int color);
int get_blue(int color);
int make_rgb(int red, int green, int blue);

int main()
{
    assign_09();
    return 0;
}

int assign_09(void)
{
    int input_color = 0;
    int red, green, blue; // �Է°����� ������ red, green, blue
    int red_bo, green_bo, blue_bo; // �� red, green, blue�� ����
    int bo_color; // ������ ���-> Ư�� �������� ��� 

    printf("RGB ����? ");
    scanf("%x", &input_color);  // 16������ �Է¹ޱ�

    // ������ �� ����
    red = get_red(input_color);
    green = get_green(input_color);
    blue = get_blue(input_color);

    // ������ ���
    red_bo = 255 - red;
    green_bo = 255 - green;
    blue_bo = 255 - blue;

    // ���� ���������� -> Ư�� �������� ���ؼ� ���
    bo_color = make_rgb(red_bo, green_bo, blue_bo);

    // ��� ���
    printf("RGB %06X�� ����: %06X\n", input_color, bo_color);

}

int get_red(int color)
{
    return (color >> 16) & 0xFF;
}

int get_green(int color)
{
    return (color >> 8) & 0xFF;
}

int get_blue(int color)
{
    return color & 0xFF;
}

// �Է¹��� �������κ��� ����� red, green, blue�� �������� �޾�,
// RGB������ �ٽ� ����� ����
int make_rgb(int red, int green, int blue)
{
    return (red << 16) | (green << 8) | blue;
}