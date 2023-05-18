#include<stdio.h>
int fact(int);
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Factorial is: %d",fact(num));
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