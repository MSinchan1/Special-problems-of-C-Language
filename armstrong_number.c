#include<stdio.h>
#include<math.h>
int main()
{
    int num,count=0,i,sum=0,a;
    printf("Enter number: ");
    scanf("%d",&num);
    i=num;
    a=num;
    while(num>0)
    {
        count++;
        num/=10;
    }
    while(i>0)
    {
        sum+=pow((i%10),count);
        i/=10;
    }
    if(sum==a)
    {
        printf("Given number is an armstrong number");
    }
    else
    {
        printf("Given number is not an armstrong  number");
    }
    return 0;
}