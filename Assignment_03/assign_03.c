/*****************************************************************************************************
   * 파일명: assign_03.c

   * 내용: 두 점 사이의 직선 거리를 구하는 distance 함수를 작성하시오. 
            distance 함수를 이용해서 입력 받은 시작점부터 끝점 사이의 직선 거리를 구하는 프로그램을 작성하시오.

   * 작성자: 이상엽_202111022_영어교육과

   * 날짜: 2025.05.20.

   * 버전: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int assign_03(void);
int get_distance(int x1, int y1, int x2, int y2);

//assign_03함수 호출
int main()

{
    assign_03();

    return 0;
}


int assign_03(void)
{
    // 직선의 시작점 좌표
    int start_x = 0;
    int start_y = 0; 

    // 직선의 끝점 좌표
    int end_x = 0;
    int end_y = 0;

    // 직선 거리 
    float distance = 0;

    printf("직선의 시작점 좌표? ");
    scanf("%d %d", &start_x, &start_y);

    printf("직선의 끝점 좌표? ");
    scanf("%d %d", &end_x, &end_y);

    distance = get_distance(start_x, start_y, end_x, end_y);

    printf("(%d, %d)~(%d, %d) 직선의 길이: %f", start_x, start_y, end_x, end_y, distance);

}


// 시작점과 끝점의 좌표를 입력받아 직선의 길이를 구하는 함수
int get_distance(int x1, int y1, int x2, int y2)
{
    float result = 0;

    result = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    return result;
}

