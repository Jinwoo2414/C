#include <stdio.h>

int main()
{
    double num1 , num2 , num3 ;
    double sum , avg ;
    printf("3개의 실수를 입력하시오 : ");
    scanf("%lf %lf %lf" , &num1 , &num2 , &num3 );
    sum = num1 + num2 + num3;
    avg = sum / 2;
    printf("합계 = %lf", sum);
    printf("평균 = %lf", avg);
    return 0;
}