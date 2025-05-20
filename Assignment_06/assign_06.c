/*****************************************************************************************************
   * 파일명: assign_06.c

   * 내용: 다음과 같이 메뉴를 출력하고 선택된 메뉴 항목의 번호를 리턴하는 choose_menu 함수를 작성하시오.
            잘못된 번호를 선택하면 올바른 번호를 선택할 때까지 계속 메뉴를 출력하고 다시 선택받아야 한다.
            즉, choose_menu 함수는 반드시 0~3사이의 값을 리턴해야 한다. choose_menu 의 리턴값에 따라
            어떤 메뉴가 선택되었는지 간단히 출력하는 프로그램을 작성하시오.

   * 작성자: 이상엽_202111022_영어교육과

   * 날짜: 2025.05.20.

   * 버전: v1.0

 *******************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_06(void);
int choose_menu(int n);

// assign_06 함수 호출
int main()
{
    assign_06();
    return 0;
}


int assign_06(void)
{
    int input = 0;
    
    while (1)
    {
        printf("[1. 파일 열기   2. 파일 저장    3. 인쇄   0. 종료] 선택? ");
        scanf("%d", &input);

        if (choose_menu(input) == 0)
        {
            return 0;
        }
        else if (choose_menu(input) == 1)
        {
            printf("파일 열기를 수행합니다.\n");
        }
        else if (choose_menu(input) == 2)
        {
            printf("파일 저장을 수행합니다.\n");
        }
        else if (choose_menu(input) == 3)
        {
            printf("인쇄를 수행합니다.\n");
        }
    }
}

// 선택된 메뉴 항목의 번호를 리턴하는 함수 ** 반드시 0~3사이의 값을 리턴해야함.
int choose_menu(int n)
{
    if (n >= 0 && n <= 3)
    {
        return n;
    }
    else
    {
        return -1 ;
    }
}