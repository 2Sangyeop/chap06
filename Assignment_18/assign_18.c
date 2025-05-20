/*****************************************************************************************************
   * 파일명: assign_18.c

   * 내용: 인자로 전달된 정수의 약수를 구해서 출력하는 divisors 함수를 작성하시오.
            0~999사이의 임의의 정수 3개를 생성하고 divisors 함수를 이용해서 각각의 약수를 출력하는 프로그램을 작성하시오.
   
   * 작성자: 이상엽_202111022_영어교육과

   * 날짜: 2025.05.20.

   * 버전: v1.0

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

    // 0~ 999 난수 생성
    num1 = rand() % 999;
    num2 = rand() % 999;
    num3 = rand() % 999;

    divisors(num1);
    divisors(num2);
    divisors(num3);

    return 0;
}

//인자로 전달된 정수의 약수를 구해서 출력하는 함수
// 리턴값은 없고 매개변수만 있는 함ㅅ
void divisors(int number)
{
    int count = 0;

    printf("%d의 약수: ", number);
    for (int i = 1; i <= number; i++) 
    {
        if (number % i == 0) 
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("=> 총 %d개\n", count);
}