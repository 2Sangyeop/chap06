/*****************************************************************************************************
   * 파일명: assign_01.c

   * 내용: 가로와 세로의 길이를 매개변수로 전달받아 직사각형의 둘레를 구하는 get_perimeter 함수를 작성하시오. 
            get_perimeter 함수를 이용해서 입력받은 가로, 세로의 길이로 직사각형의 둘레를 구하는 프로그램을 작성하시오.

   * 작성자: 이상엽_202111022_영어교육과

   * 날짜: 2025.05.20.

   * 버전: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_01(void);
int get_perimeter(int a, int b);

//assign_01함수 호출
int main()

{
    assign_01();

    return 0;
}


int assign_01(void)
{
    int width = 0;  //가로
    int height = 0; //세로
    int perimeter = 0; //둘레

    printf("가로? ");
    scanf("%d", &width);

    printf("세로? ");
    scanf("%d", &height);

    perimeter = get_perimeter(width, height);

    printf("직사각형의 둘레: %d", perimeter);
}


// 가로, 세로를 각각 a와 b로 전달받아 둘레를 구하여 반환하는 함수.
int get_perimeter(int a, int b)
{
    int result = 0;

    result = a * 2 + b * 2;

    return result;
}

