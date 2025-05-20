/*****************************************************************************************************
   * 파일명: assign_19.c

   * 내용: 수치 데이터와 스케일을 인자로 받아 그래프를 출력하는 graph 함수를 작성하시오.
            예: graph(1200, 100); → * 12개, graph(1200, 10); → * 120개
            0~9999 사이의 임의의 숫자 3개를 생성하고 스케일 100으로 그래프를 출력하는 프로그램을 작성하시오.

   * 작성자: 이상엽

   * 날짜: 2025.05.20.

   * 버전: v1.0

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

// 0~9999 사이의 난수 3개 생성 후 그래프 출력
int assign_19(void)
{
    int num1, num2, num3;

    srand((unsigned int)time(NULL)); 

    // 난수 생성
    num1 = rand() % 10000;
    num2 = rand() % 10000;
    num3 = rand() % 10000;

    // 각각 그래프 출력
    printf("%d: ", num1);
    graph(num1, 100);

    printf("%d: ", num2);
    graph(num2, 100);

    printf("%d: ", num3);
    graph(num3, 100);

}

// 인자로 전달된 수치 데이터와 스케일로 그래프를 출력하는 함수
void graph(int data, int scale)
{
    int count = data / scale;

    for (int i = 0; i < count; i++)
    {
        printf("*");
    }
    printf("\n");
}