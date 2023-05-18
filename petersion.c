#include<stdio.h>
int fact(int);
int main()
{
    int num,i,sum=0;
    printf("Enter number: ");
    scanf("%d",&num);
    i=num;
    while(num>0)
    {
        sum+=fact(num%10);
        num/=10;
    }
    if(sum==i)
    {
        printf("Given number is a petersion number ");
    }
    else
    {
        printf("Given number is not a petersion number ");
    }
    return 0;
}
int fact(int x)
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return x*fact(x-1);
    }
}