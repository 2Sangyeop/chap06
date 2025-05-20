/*****************************************************************************************************
   * 파일명: assign_09.c

   * 내용: red, green, blue를 인자로 전달해서 RGB 색을 만들어 리턴하는 make_rgb 함수를 정의하시오.   
            앞에서 정의한 get_red, get_green, get_blue 함수를 함께 이용해서 입력받은 RGB 색상의   
            보색을 구해서 출력하는 프로그램을 작성하시오.

   * 작성자: 이상엽_202111022_영어교육과

   * 날짜: 2025.05.20.

   * 버전: v1.0

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
    int red, green, blue; // 입력값에서 추출한 red, green, blue
    int red_bo, green_bo, blue_bo; // 각 red, green, blue의 보색
    int bo_color; // 보색값 계산-> 특정 색상으로 출력 

    printf("RGB 색상? ");
    scanf("%x", &input_color);  // 16진수로 입력받기

    // 각각의 색 추출
    red = get_red(input_color);
    green = get_green(input_color);
    blue = get_blue(input_color);

    // 보색값 계산
    red_bo = 255 - red;
    green_bo = 255 - green;
    blue_bo = 255 - blue;

    // 계산된 보색값들을 -> 특정 보색으로 구해서 출력
    bo_color = make_rgb(red_bo, green_bo, blue_bo);

    // 결과 출력
    printf("RGB %06X의 보색: %06X\n", input_color, bo_color);

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

// 입력받은 색상으로부터 추출된 red, green, blue의 보색값을 받아,
// RGB색으로 다시 만들어 리턴
int make_rgb(int red, int green, int blue)
{
    return (red << 16) | (green << 8) | blue;
}