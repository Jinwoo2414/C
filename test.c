#include <stdio.h>

int main(void)
{
    int x = 20 , y = 10;
    int sum , diff , mul , div;
    sum = x + y;
    diff = x - y;
    mul = x * y;
    div = x / y;
    printf("두수의 합 : %d\n" , sum );
    printf("두수의 차 : %d\n" , diff );
    printf("두수의 곱 : %d\n" , mul );
    printf("두수의 몫 : %d\n" , div );
    
    return 0;

}