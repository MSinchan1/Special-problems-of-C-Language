// Fibonacci Series using Recursion
#include <stdio.h>
int main()
{
    int num,d1=0,d2=1,i;
    printf("Enter number: ");
    scanf("%d",&num);
    int temp=d1+d2;
    printf("Fibonacii series is: 0  1   ");
    for(i=3;i<=num;i++)
    {
        printf("%d  ",temp);
        d1=d2;
        d2=temp;
        temp=d1+d2;
    }
    return 0;
}